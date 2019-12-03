#include <unistd.h>

#include "my.h"

char *my_revstr(char *str)
{
    int len = 0;
    int i = 0;
    int k = 0;
    char tmp = 0;

    for (len = 0; str[len] != '\0'; len++);
    if (len == 0)
        return (str);
    len--;
    k = len / 2;
    while (i <= k) {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return (str);
}
