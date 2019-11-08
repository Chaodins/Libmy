#include "../main/my.h"

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strlen, should_return_0_for_a_null_string)
{
    cr_expect(my_strlen("") == 0, "Expected 0 for an empty string.");
    cr_expect(my_strlen("A") == 1, "Expected \"A\" to have a length of 1.");
    cr_expect(my_strlen(NULL) == 0, "Expected 0 for a NULL string.");
}
