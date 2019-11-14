#include <unistd.h>

#include "my.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 'Z' && str[i] > 'A')
            str[i] += 32;
    return (str);
}
