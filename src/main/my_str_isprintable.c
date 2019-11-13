#include <unistd.h>

#include "my.h"

int my_str_isprintable(char const *str)
{
    if (str == NULL)
        return (0);
    for (int i = 0; str[i]; i++)
        if (my_alphaisprint(str[i]) == 1)
            return (0);
    return (1);
}
