# http://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.69/
AC_INIT(hello.c, 0.1)
AM_INIT_AUTOMAKE(hello, 0.1)
# AC_CHECK_HEADER()
AC_CHECK_LIB(array, array_init, [echo "Array is[[0]] OK"], [echo "Array is missing" && exit 1;])
AC_CONFIG_FILES([Makefile])
AC_CONFIG_HEADERS(config.h)
AC_PROG_CC
AC_PROG_INSTALL
AC_OUTPUT
