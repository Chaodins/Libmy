#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_put_nbr_base, should_print_5_in_binary_base)
{
    cr_redirect_stdout();
    my_put_nbr_base(5, "01");
    cr_assert_stdout_eq_str("101");
}

Test(my_put_nbr_base, should_print_10_in_hexadecimal)
{
    cr_redirect_stdout();
    my_put_nbr_base(10, "0123456789abcdef");
    cr_assert_stdout_eq_str("a");
}

Test(my_put_nbr_base, should_print_r)
{
    cr_redirect_stdout();
    my_put_nbr_base(3, "azertyuiop");
    cr_assert_stdout_eq_str("r");
}

Test(my_put_nbr_base, should_print_minus_55)
{
    cr_redirect_stdout();
    my_put_nbr_base(0, "516");
    cr_assert_stdout_eq_str("5");
}
