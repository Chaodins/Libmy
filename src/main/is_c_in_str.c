#include "my.h"

int is_c_in_str(char c, const char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            return (1);
    return (0);
}
