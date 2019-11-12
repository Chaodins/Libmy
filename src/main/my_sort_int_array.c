#include <unistd.h>

#include "my.h"

void my_sort_int_array(int *array, int size)
{
    int i = 0;

    if (array == NULL || size == 0)
        return;
    while (i + 1 < size) {
        if (array[i] > array[i + 1]) {
            my_swap(&array[i], &array[i + 1]);
            i = 0;
        }
        i++;
    }
}
