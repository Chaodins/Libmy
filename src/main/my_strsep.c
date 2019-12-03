#include <unistd.h>

#include "my.h"

int is_c_in_str(char c, const char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            return (1);
    return (0);
}

char *my_strsep(char **stringp, const char *delim)
{
    int i = 0;
    char *save = *stringp;

    if (save[0] == 0)
        return (NULL);
    for (; save[i] != '\0' && is_c_in_str(save[i], delim) != 1; i++);
    if (save[i] == 0) {
        *stringp += i;
        return (save);
    }
    save[i] = '\0';
    *stringp += i + 1;
    return (save);
}
