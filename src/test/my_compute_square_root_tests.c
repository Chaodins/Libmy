#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_compute_square_root, should_return_2_for_4_in_input)
{
    cr_assert(my_compute_square_root(4) == 2, "root of 4 = 2");
}
