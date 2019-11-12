#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    long value = 0;
    int n = 1;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            n = n * -1;
        ++i;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        value *= 10;
        value = value + str[i] - 48;
        if (value > 2147483647 || value < -2147483646)
            return (0);
        ++i;
    }
    value *= n;
    return (value);
}
