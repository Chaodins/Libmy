#include <unistd.h>

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] && i < n) {
        dest[i] = src[i];
        i++;
    }
    if (n > 0)
        dest[i] = '\0';
    return (dest);
}
