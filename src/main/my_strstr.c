#include <unistd.h>

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int patern_length = my_strlen(to_find);
    int str_length = my_strlen(str);

    for (int i = 0; i < str_length - patern_length; i++) {
        for (int j = 0; j < patern_length; j++) {
            if (to_find[j] != str[i + j])
                break;
            if (j == patern_length - 1)
                return (str + i);
        }
    }
    return (NULL);
}
