#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putchar, should_print_A)
{
    cr_redirect_stdout();
    my_putchar('A');
    cr_assert_stdout_eq_str("A");
}
