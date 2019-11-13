#include "my.h"

int my_str_isupper(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            continue;
        else
            return (0);
    }
    return (1);
}
