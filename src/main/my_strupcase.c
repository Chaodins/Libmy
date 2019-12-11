#include <unistd.h>

#include "my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] <= 'z' && str[i] >= 'a')
            str[i] -= 32;
    }
    return (str);
}
