#include "my.h"

int my_compute_power_rec(int nb, int power)
{
    int result = 0;

    if (power == 0)
        return (1);
    if (power < 0)
	   return (0);
    else {
        result = nb * my_compute_power_rec(nb, power - 1);
        if (result / nb != my_compute_power_rec(nb, power - 1))
            return (0);
        return (nb * my_compute_power_rec(nb, power - 1));
    }
}
