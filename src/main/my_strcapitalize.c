#include <unistd.h>
#include <stdio.h>

#include "my.h"

char *my_strcapitalize(char *str)
{
    int capitalize_indicator = 1;

    for (int i = 0; str[i]; i++) {
        if (capitalize_indicator == 1 && str[i] <= 'z' && str[i] >= 'a') {
            str[i] -= 32;
            capitalize_indicator = 0;
            continue;
        } else if (capitalize_indicator == 1 &&str[i] <= 'Z' && str[i] >= 'A')
            capitalize_indicator = 0;
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] > 'Z' || str[i] < 'A')) {
            capitalize_indicator = 1;
            continue;
        }
    }
    return (str);
}
