#include "../main/my.h"
#include <string.h>

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strcat, expected_to_concat_the_strings)
{
    char *str1 = "Yay";
    char *str2 = " yay.";
    char *str = "Yay yay.";

    cr_assert(strcmp(str, my_strcat(str1, str2)) == 0, "Should concat the strings and match the result.");
}
