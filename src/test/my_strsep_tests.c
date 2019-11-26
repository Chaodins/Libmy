#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strsep, should_return_the_next_word_at_each_call)
{
    char *str = my_strdup("Hollow knight c'est bien.");

    cr_assert_str_eq(my_strsep(&str, " "), "Hollow");
    cr_assert_str_eq(my_strsep(&str, " "), "knight");
    cr_assert_str_eq(my_strsep(&str, " "), "c'est");
    cr_assert_str_eq(my_strsep(&str, " "), "bien.");
}
