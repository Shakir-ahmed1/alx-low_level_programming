#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int f1(unsigned char a1) {
    return (a1 ^ 59) & 63;
}

int f5(long long a1, int a2) {
    unsigned char v3 = 0;
    for (int i = 0; i < a2; ++i) {
        v3 += *((char *)(i + a1)) * *((char *)(i + a1));
    }
    return (v3 ^ 239) & 63;
}

int f6(char a1) {
    unsigned char v2 = 0;
    for (int i = 0; a1 > i; ++i) {
        v2 = rand();
    }
    return (v2 ^ 229) & 63;
}

int f4(char *a1, int a2) {
    int v3 = *a1;
    for (int i = 0; i < a2; ++i) {
        if (a1[i] > v3) {
            v3 = a1[i];
        }
    }
    srand(v3 ^ 14);
    return rand() & 63;
}

int f3(long long a1, int a2) {
    char v3 = 1;
    for (int i = 0; i < a2; ++i) {
        v3 *= *((char *)(i + a1));
    }
    return ((unsigned char)v3 ^ 85) & 63;
}

int f2(long long a1, int a2) {
    unsigned char v3 = 0;
    for (int i = 0; i < a2; ++i) {
        v3 += *((char *)(i + a1));
    }
    return (v3 ^ 79) & 63;
}

int main(int argc, char **argv) {
    char v21[72] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    if (argc != 2) {
        printf("Usage for your keygen: ./keygen5 username\n");
        return 1;
    }
    char *username = argv[1];
    int len = strlen(username);
    int f1_res = f1(len);
    int f2_res = f2((long long)username, len);
    int f3_res = f3((long long)username, len);
    int f4_res = f4(username, len);
    int f5_res = f5((long long)username, len);
    int f6_res = f6(username[0]);
    printf("%c%c%c%c%c%c\n", v21[f1_res], v21[f2_res], v21[f3_res], v21[f4_res], v21[f5_res], v21[f6_res]);
    return 0;
}
