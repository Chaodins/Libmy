#include "my.h"

int my_is_multiple(int x, int a)
{
    int tmp = x / a;

    if (tmp == tmp * a)
        return (1);
    return (0);
}
