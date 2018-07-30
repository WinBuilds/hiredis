// gettimeofday() for Windows

#ifdef _WIN32

#include "gettimeofday.h"

#if 0
#include <sys/timeb.h>
int gettimeofday( struct timeval* tp, struct timezone * tzp)
   {
   struct timeb tb;
   ftime(&tb);
   tp->tv_sec = tb.time;
   tp->tv_usec = 1000*tb.millitm;
   return 0;
   }
#endif

#if 1
int gettimeofday(struct timeval* tv, struct timezone * tzp) {
	FILETIME ft;
	GetSystemTimeAsFileTime( &ft );

	double timed = ((ft.dwHighDateTime * 4294967296e-7) - 11644473600.0) + (ft.dwLowDateTime  * 1e-7);
	tv->tv_sec  = (long) timed;
	tv->tv_usec = (long) ((timed - tv->tv_sec) * 1e6);

	return 0;
}
#endif

#endif /* _MSC_VER */
