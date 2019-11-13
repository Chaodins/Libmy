#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int size = my_strlen(dest);
    int i;

    for(i = 0; src[i] != '\0'; i++)
        dest[size + i] = src[i];
    dest[size + i] = '\0';
    return (dest);
}
