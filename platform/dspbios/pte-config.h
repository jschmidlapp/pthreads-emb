/* config.h  */

#ifndef PTE_CONFIG_H
#define PTE_CONFIG_H

#include <time.h>

/*********************************************************************
 * Defaults: see target specific redefinitions below.
 *********************************************************************/

/* We're building the pthreads-win32 library */
#define PTE_BUILD

#undef PTE_SUPPORT_ASYNC_CANCEL

typedef int pid_t;

struct timespec
{
  time_t  tv_sec;
  long    tv_nsec;   
};

typedef unsigned int mode_t;


struct timeb
{ 
  time_t time;
  unsigned short millitm;
  short timezone;
  short dstflag;
};

#endif
