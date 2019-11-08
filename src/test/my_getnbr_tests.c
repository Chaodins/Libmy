#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_getnbr, should_return_0_for_overflow_input)
{
    cr_assert(my_getnbr("10") == 10, "Expected 10 for\"10\" input");
}

Test(my_getnbr, should_return_1)
{
    cr_assert(my_getnbr("1") == 1, "Expected 1 for \"1\" given as parameter.");
}
