#include <unistd.h>

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int size = my_strlen(dest);
    int i;

    for (i = 0; i < nb && src[i] != '\0'; i++)
        dest[size + i] = src[i];
    dest[size + i] = '\0';
    return (dest);
}
