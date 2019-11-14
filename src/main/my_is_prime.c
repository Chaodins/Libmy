#include "my.h"

int my_is_prime(int nb)
{
    int root = my_compute_square_root(nb);

    if (root == 0)
        root = nb;
    if (nb < 2)
        return (0);
    if (nb == 2)
        return (1);
    for (int i = 3; i != nb; i += 2)
        if (nb % i == 0)
            return (0);
    return (1);
}
