#include "my.h"

int my_compute_square_root(int nb)
{
    int i = 0;
    int a = 1;

    if (nb < 0)
        return (0);
    for (; a != nb; i++) {
        if (a > nb)
            return (0);
        a = i * i;
    }
    i = i - 1;
    return (i);
}
