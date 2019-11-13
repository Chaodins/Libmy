#include "my.h"

int my_is_prime(int nb)
{
    int root = my_compute_square_root(nb);

    for (int i = 0; i < root + 1; i++)
        if (my_is_multiple(nb, i) == 1)
            return (0);
    return (1);
}
