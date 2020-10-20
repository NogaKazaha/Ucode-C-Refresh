int mx_strlen(const char *s) {
    int number  = 0;
    char c = s[0];
    while(c != '\0') {
        number ++;
        c = s[number];
    }
    return number;
}

