#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_showmem, expected)
{
    cr_redirect_stdout();
    my_showmem("AAAAAAAAAAAAAAAA", 16);
    cr_assert_stdout_eq_str("00000000:  4141 4141 4141 4141 4141 4141 4141 4141 AAAAAAAAAAAAAAAA");
}
