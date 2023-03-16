#include <stdio.h>
#include <string.h>

int f1(int x) {
    return (x * 3) % 64;
}

int f2(char *s, int x) {
    int sum = 0;
    for (int i = 0; i < x; i++) {
        sum += s[i];
    }
    return sum % 64;
}

int f3(char *s, int x) {
    int sum = 0;
    for (int i = 0; i < x; i++) {
        sum += s[i] * i;
    }
    return sum % 64;
}

int f4(char *s, int x) {
    int sum = 0;
    for (int i = 0; i < x; i++) {
        sum += s[i] * (i + 1);
    }
    return sum % 64;
}

int f5(char *s, int x) {
    int sum = 0;
    for (int i = 0; i < x; i++) {
        sum += s[i] * (i + 2);
    }
    return sum % 64;
}

int f6(int x) {
    return (x * 7) % 64;
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
    int f2_res = f2(username, len);
    int f3_res = f3(username, len);
    int f4_res = f4(username, len);
    int f5_res = f5(username, len);
    int f6_res = f6(username[0]);
    printf("%c%c%c%c%c%c\n", v21[f1_res], v21[f2_res], v21[f3_res], v21[f4_res], v21[f5_res], v21[f6_res]);
    return 0;
}
