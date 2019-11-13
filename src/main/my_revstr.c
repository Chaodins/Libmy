#include <unistd.h>

#include "my.h"

char *my_revstr(char *str)
{
    int len = 0;
    int i = 0;
    int k;
    char strcp;

    for (len = 0; str[len] != '\0'; len++);
    len--;
    k = len / 2;
    while (i <= k) {
        strcp = str[i];
        str[i] = str[len];
        str[len] = strcp;
        i++;
        len--;
    }
    return (str);
}
