#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_compute_power_rec, should_return_4_for_2_square_2)
{
    cr_assert(my_compute_power_rec(2, 2) == 4, "2**2 should return 4");
}

Test(my_compute_power_rec, should_return_0_for_overflowing_output)
{
    cr_assert(my_compute_power_rec(10, 15) == 0, "Expected 0 because 10000000000000000 is over 9000");
}
