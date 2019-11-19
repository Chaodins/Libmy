#include <stdlib.h>

#include "my.h"

char *my_strndup(char const *str, int n)
{
    char *to_return = malloc((my_strlen(str) + 1) * sizeof(char));

    to_return = my_strncpy(to_return, str, n);
    return (to_return);
}
