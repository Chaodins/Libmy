#include "my.h"
#include <unistd.h>

void my_putchar(char c);

void my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar(45);
        my_putchar(50);
        nb = 147483648;
    }
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar((nb % 10) + 48);
}
