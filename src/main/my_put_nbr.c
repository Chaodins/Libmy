#include <unistd.h>

#include "my.h"

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar((nb % 10) + 48);
}
