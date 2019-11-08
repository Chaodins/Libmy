#include "my.h"

#include <unistd.h>

int my_strlen(char const *str)
{
    int count = 0;

    if (str == NULL)
        return (0);
    for (; str[count] != '\0'; count++);
    return (count);
}
