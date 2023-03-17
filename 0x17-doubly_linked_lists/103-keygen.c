#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/**
 * f1 - evaluator
 * @a1: var1
 * Return: the evaluated integer
 */
int f1(unsigned char a1)
{
	return ((a1 ^ 59) & 63);
}


/**
 * ff - evaluator
 * @a1: var1
 * @a2: var2
 * @cond: flow controler
 * Return: the evaluated integer
 */
int ff(long a1, int a2, int cond)
{
if (cond == 2)
{
	unsigned char v3 = 0;
	int i;

	for (i = 0; i < a2; ++i)
		v3 += *((char *)(i + a1));
	return ((v3 ^ 79) & 63);
}
if (cond == 3)
{
	char v3 = 1;
	int i;

	for (i = 0; i < a2; ++i)
		v3 *= *((char *)(i + a1));
	return (((unsigned char)v3 ^ 85) & 63);
}
if (cond == 5)
{
	unsigned char v3 = 0;
	int i;

	for (i = 0; i < a2; ++i)
		v3 += *((char *)(i + a1)) * *((char *)(i + a1));
	return ((v3 ^ 239) & 63);
}
	return (0);
}
/**
 * f6 - evaluator
 * @a1: var1
 * Return: the evaluated integer
 */
int f6(char a1)
{
	unsigned char v2 = 0;
	int i;

	for (i = 0; a1 > i; ++i)
		v2 = rand();
	return ((v2 ^ 229) & 63);
}
/**
 * f4 - evaluator
 * @a1: var1
 * @a2: var2
 * Return: the evaluated integer
 */
int f4(char *a1, int a2)
{
	int v3 = *a1;
	int i;

	for (i = 0; i < a2; ++i)
	{
		if (a1[i] > v3)
			v3 = a1[i];
	}
	srand(v3 ^ 14);
	return (rand() & 63);
}
/**
 * main - key generator based on the given user name
 * @argc: argument count
 * @argv: array of arguments
 * Return: the evaluated integer
 */
int main(int argc, char **argv)
{
char j[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char *username;
	int len, f1_res, f2_res, f3_res, f4_res, f5_res, f6_res;

	if (argc != 2)
	{
		printf("Usage for your keygen: ./keygen5 username\n");
		return (1);
	}
	username = argv[1];
	len = strlen(username);
	f1_res = f1(len);
	f2_res = ff((long)username, len, 2);
	f3_res = ff((long)username, len, 3);
	f4_res = f4(username, len);
	f5_res = ff((long)username, len, 5);
	f6_res = f6(username[0]);
	printf("%c%c%c%c%c%c\n", j[f1_res], j[f2_res], j[f3_res],
			j[f4_res], j[f5_res], j[f6_res]);
	return (0);
}
