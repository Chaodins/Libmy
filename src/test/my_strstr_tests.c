#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strstr, expected)
{
    char str[] = "Bonsoir monsieur le monarque.";
    
    cr_assert_str_eq("monsieur le monarque.", my_strstr(str, "mon"));
}
