#include <stdio.h>

struct body {
    int age;
    char gender[7];
    char name[6];
};

void setTokki(struct body *ptokki, int age, const char *gender, const char *name);
void copyStr(const char *src, char *dest);

int main() {
    
    struct body tokki;

    setTokki(&tokki, 2, "Male", "Tosun");

    printf("%d | %s | %s", tokki.age, tokki.gender, tokki.name);

    getchar(); getchar();
    return 0;
}

void setTokki(struct body *ptokki, int age, const char *gender, const char *name) {
    ptokki->age = age;
    copyStr(gender, ptokki->gender);
    copyStr(name, ptokki->name);
}

void copyStr(const char *src, char *dest) {
    while(*src) {
        *dest = *src;
        *dest++;
        *src++;
    }

    *dest = '\0';
}