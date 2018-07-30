#ifndef TIMEVAL_H
#define TIMEVAL_H

#ifdef _WIN32
   #include <time.h>
   struct timeval {
      long tv_sec;
      long tv_usec;
   };
#endif

#endif