#include "my.h"

int my_find_prime_sup(int nb)
{
    for (; my_is_prime(nb) != 1; nb++);
    return (nb);
}
