#include "my.h"

int my_showstr(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (my_alphaisprint(str[i]) == 1) {
            my_putstr("\\0");
            my_put_nbr_base(str[i], "0123456789abcdef");
        } else {
            my_putchar(str[i]);
        }
    }
    return (0);
}
