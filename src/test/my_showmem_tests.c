#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_showmem, expected)
{
    cr_assert_eq(my_showmem("", 2), 0);
}
