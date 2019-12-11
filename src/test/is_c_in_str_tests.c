#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(is_c_in_str, expected_to_return_1)
{
    char *str = "5 fruits et légumes par jours.";
    char a = '5';
    char b = ' ';
    char c = 'g';
    char d = 'r';
    char e = 's';
    char f = 't';

    cr_assert_eq(is_c_in_str(a, str), 1);
    cr_assert_eq(is_c_in_str(b, str), 1);
    cr_assert_eq(is_c_in_str(c, str), 1);
    cr_assert_eq(is_c_in_str(d, str), 1);
    cr_assert_eq(is_c_in_str(e, str), 1);
    cr_assert_eq(is_c_in_str(f, str), 1);
}
