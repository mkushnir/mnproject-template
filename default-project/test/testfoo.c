#include <assert.h>

#include <mncommon/unittest.h>

#ifndef NDEBUG
const char *malloc_conf = "abort:true,junk:true,xmalloc:true";
#endif

static void
test0(void)
{
    struct {
        long rnd;
        int in;
        int expected;
    } data[] = {
        {0, 0, 0},
    };
    UNITTEST_PROLOG_RAND;

    FOREACHDATA {
        //TRACE("in=%d expected=%d", CDATA.in, CDATA.expected);
        assert(CDATA.in == CDATA.expected);
    }
}

int
main(void)
{
    test0();
    return 0;
}
