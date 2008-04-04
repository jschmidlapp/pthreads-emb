/* config.h  */

#ifndef PTE_CONFIG_H
#define PTE_CONFIG_H

#include <errno.h>
#include <sys/types.h>
#include <sys/timeb.h>

#define PTE_STATIC_LIB

/*********************************************************************
 * Defaults: see target specific redefinitions below.
 *********************************************************************/

/* We're building the pthreads-win32 library */
#define PTE_BUILD

typedef int pid_t;

/* Define if you don't have Win32 errno. (eg. WinCE) */
//#undef NEED_ERRNO

/* Do we know about type mode_t? */
//#undef HAVE_MODE_T

//#undef HAVE_TIMEB
//#define HAVE_TIMEB

/* Define if you have the timespec struct */
//#undef HAVE_STRUCT_TIMESPEC
//#define HAVE_STRUCT_TIMESPEC

#endif
