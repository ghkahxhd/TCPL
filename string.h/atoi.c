/* atoi: convert s to integer */
int atoi (char s[]) {
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
        n = n * 10 + (s[i] - '0');

    return n;
}

#include <ctype.h>
/* atoi: convert s to integer; version 2 */
int atoi (char s[]) {
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++) /* skip white space */
        ;

    sign = (s[i] == '-')? -1 : 1;
    if (s[i] == '-' || s[i] == '+') /* skip sign */
        i++;

    for (n = 0; isdigit(s[i]); i++)
        n = n * 10 + (s[i] - '0');
    return sign * n;
}
