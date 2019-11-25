#include <unistd.h>

#include "my.h"

int is_c_in_str(char c, const char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            return (1);
    return (0);
}

char *my_strsep(char **to_sep, const char *delim)
{
    int i = 0;
    char *string = *to_sep;

    if (*to_sep == NULL)
        return (NULL);
    for (; *to_sep[i] != '\0'; i++) {
        if (is_c_in_str(*to_sep[i], delim) == 1) {
            *to_sep[i] = '\0';
            *to_sep += i + 1;
            return (string);
        }
    }
    return (NULL);
}
