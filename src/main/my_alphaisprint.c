#include "my.h"

int my_alphaisprint(char c)
{
    if (c < 32 || c >= 127)
        return (1);
    return (0);
}
