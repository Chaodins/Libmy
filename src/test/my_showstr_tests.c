#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_showstr, should_print_the_given_string)
{
    cr_redirect_stdout();
    my_showstr("Hey");
    cr_assert_stdout_eq_str("Hey");
}

Test(my_showstr, should_print_the_return_in_hexa)
{
    cr_redirect_stdout();
    my_showstr("\n");
    cr_assert_stdout_eq_str("\\0a");
}
