#include "my.h"

int my_compute_square_root(int nb)
{
    int i = 0;
    int a = 1;

    for (; a != nb; i++)
        a = i * i;
    i = i - 1;
    return (i);
}
