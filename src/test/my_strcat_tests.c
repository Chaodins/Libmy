#include "../main/my.h"
#include <string.h>

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strcat, expected_to_concat_the_strings)
{
    char str1[9] = "Yay";
    char str2[6] = " yay.";
    char str[9] = "Yay yay.";

    cr_assert_str_eq(str, my_strcat(str1, str2));
    cr_assert_eq(str1, my_strcat(str1, str2));
}
