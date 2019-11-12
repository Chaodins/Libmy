#include <unistd.h>

#include "my.h"

int my_put_nbr_base(long nb, char *base)
{
    int b = my_strlen(base);

    if (base == NULL)
        return (84);
    if (b < 2)
        return (84);
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= b)
        my_put_nbr_base(nb / (b), base);
    my_putchar(base[(nb % b)]);
    return (0);
}
