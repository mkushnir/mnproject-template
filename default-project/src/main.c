#include <stdio.h>
#include "foo.h"

#ifndef NDEBUG
const char *_malloc_options = "AJ";
#endif

int
main (int argc, char ** argv)
{
    int res = 0;
    if ((res = initialize(argc, argv)) != 0) {
        goto BAD;
    }

    if ((res = run()) != 0) {
        goto BAD;
    }

END:
    terminate();
    return res;
BAD:
    fprintf(stderr, "%s", message);
    goto END;
}
