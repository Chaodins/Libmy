#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_is_multiple, expected_to_be_multiples)
{
    cr_assert(my_is_multiple(10, 2) == 1, "should be a multiple");
    cr_assert(my_is_multiple(12, 2) == 1, "should be a multiple");
    cr_assert(my_is_multiple(12, 4) == 1, "should be a multiple");
    cr_assert(my_is_multiple(12, 3) == 1, "should be a multiple");
}

Test(my_is_multiple, expected_not_to_be_multiples)
{
    cr_assert(my_is_multiple(10, 3) == 1, "should be a multiple");
    cr_assert(my_is_multiple(12, 8) == 1, "should be a multiple");
    cr_assert(my_is_multiple(12, 4) == 1, "should be a multiple");
    cr_assert(my_is_multiple(12, 3) == 1, "should be a multiple");
}
