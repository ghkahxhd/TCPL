/* strlen: return length of sring s */
int strlen(char s[]) {
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

/* strlen: return length of string s */
int strlen(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++, n++)
        n++;
    return n;
}
