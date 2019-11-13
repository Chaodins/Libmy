#include "my.h"

int my_is_multiple(int x, int a)
{
    int tmp;

    if (x == 0 || a == 0)
        return (0);
    tmp = x / a;
    if (x == tmp * a)
        return (1);
    return (0);
}
