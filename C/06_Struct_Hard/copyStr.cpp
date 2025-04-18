void copyStr(const char *src, char *dest) {
    while(*src) {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}