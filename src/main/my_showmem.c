#include "my.h"

int my_showmem(char const *str, int size)
{
    int lines = size / 16;
    int rest = size % 16;
    int characters_to_read = 16;

    if (lines * 16 != size)
        lines++;
    for (int i = 0; i < lines; i++) {
        if (lines - 1 == i)
            characters_to_read = rest;
        for (int k = 0; k < 6; k++)
            my_putchar('0');
        my_put_nbr(i);
        my_putstr("0:  ");
        for (int j = 0; j < characters_to_read; j++) {
            if (str[j + (i * 16)] < 16)
                my_putchar('0');
            my_put_nbr_base(str[j + (i * 16)], "0123456789abcdef");
            if (j % 2 != 0)
                my_putchar(' ');
        }
        for (int j = 0; j < 16; j++) {
            if (my_alphaisprint(str[j + (i * 16)]) == 0)
                my_putchar(str[j + (i * 16)]);
            else
                my_putchar('.');
        }
        my_putchar('\n');
    }
    return (0);
}
