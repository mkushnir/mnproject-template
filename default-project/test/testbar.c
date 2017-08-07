#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#ifndef NDEBUG
const char *_malloc_options = "AJ";
#endif


static int
gsetup(UNUSED void **state)
{
    TRACE();
    return 0;
}


static int
gteardown(UNUSED void **state)
{
    TRACE();
    return 0;
}


static int
test1_setup(UNUSED void **state)
{
    TRACE();
    return 0;
}


static void
test1(UNUSED void **state)
{
    TRACE();
}


static int
test1_teardown(UNUSED void **state)
{
    TRACE();
    return 0;
}


int
main(void)
{
    int res;
    const struct CMUnitTest tests[] = {
        cmocka_unit_test_setup_teardown(test1, test1_setup, test1_teardown),
    };

    cmocka_set_message_output(CM_OUTPUT_STDOUT); //default
    res = cmocka_run_group_tests(tests, gsetup, gteardown);
    return 0;
}
