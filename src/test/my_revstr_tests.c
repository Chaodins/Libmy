#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <string.h>

#include "../main/my.h"


Test(my_revstr, expected_to_reverse_the_string)
{
    char to_reverse[] = "Hello !";

    cr_assert_str_eq(my_revstr(to_reverse), "! olleH");
    cr_assert_eq(my_revstr(to_reverse), to_reverse);
}
