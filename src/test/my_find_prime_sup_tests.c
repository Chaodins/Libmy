#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_find_prime_sup, expected_to_return_the_next_prime_num)
{
    cr_assert_eq(my_find_prime_sup(1), 2);
    cr_assert_eq(my_find_prime_sup(2), 2);
    cr_assert_eq(my_find_prime_sup(6), 7);
    cr_assert_eq(my_find_prime_sup(7), 7);
}
