#include <unistd.h>

#include "my.h"

char *my_revstr(char *str)
{
    int lenght = my_strlen(str);
    char tmp;

    if (!str)
        return (NULL);
    for (int i = 0, j = lenght - 1; i < (lenght / 2); i++, j--) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
    return (str);
}
