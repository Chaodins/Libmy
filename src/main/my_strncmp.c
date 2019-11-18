#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (!s1 || !s2)
        return (1);
    for (int i = 0; (s1[i] != '\0' && s2[i] != '\0') || i < n; i++)
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    return (0);
}
