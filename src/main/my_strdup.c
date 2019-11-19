#include <stdlib.h>

#include "my.h"

char *my_strdup(char const *str)
{
    char *to_return = malloc((my_strlen(str) + 1) * sizeof(char));

    to_return = my_strcpy(to_return, str);
    return (to_return);
}
