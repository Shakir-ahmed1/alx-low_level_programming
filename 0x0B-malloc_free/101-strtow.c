#include <stdlib.h>
#include <stdio.h>
int len(char *);
int word_length(char *, int);
char *word(char *, int);
int word_count(char *str)
{
int i = 0, l, k, words = 0;
l = len(str);
for (i = 0; i < l; i++)
{
k = 0;
while (str[i] != ' ' && str[i] != '\0')
{
k++;
i++;
}
if (k > 0)
words++;
}
return words;
}
int word_length(char *str, int ord)
{
int i = 0, l, k, words = 0;
l = len(str);
for (i = 0; i < l; i++)
{
k = 0;
while (str[i] != ' ' && str[i] != '\0')
{
k++;
i++;
}
if (k > 0)
words++;
if (ord == words)
break;
}
return k;
}
int len(char *str)
{
int i = 0;
if (str != NULL)
{
while(str[i] != '\0')
i++;
}
return i;
}
char *word(char *str, int ord)
{
int i = 0, l, k, words = 0,m;
char *mc;
l = len(str);

for (i = 0; i < l; i++)
{
k = 0;
while (str[i] != ' ' && str[i] != '\0')
{
k++;
i++;
}
if (k > 0)
{
words++;
}
if (ord == words && k != 0)
{
mc = malloc(sizeof(char) * k);
for (m = 0;m < k; m++)
{
/*printf("%c",str[i - k + m]);*/
mc[m] = str[i - k + m];
}
return mc;
}
}
return NULL;
}
/**
* strtow - it splits a string to words by using space as separator
* @str: the string to be splited
* Return: NULL if str is NULL or "" or if the function fails
* other wise the array of strings
*/
char **strtow(char *str)
{
int i, j, wc;
char **mcc;

wc = word_count(str);
if (wc == 0)
return (NULL);
mcc = (char **) malloc(sizeof(char *) * wc);
if (mcc == NULL)
return (NULL);
for (i = 0; i < wc; i++)
{
mcc[i] = malloc(sizeof(int *) * word_length(str,i));
if ( mcc[i] == NULL)
{
while (i >= 0)
{
free(mcc[i]);
i--;
}
free(mcc);
return (NULL);
}
for (j = 0; j < word_length(str, i + 1); j++)
{
char *str1 = word(str, i + 1);
mcc[i][j] = str1[j];
}
}
return (mcc);
}
