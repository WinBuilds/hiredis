#ifndef GETTIMEOFDAY_H
#define GETTIMEOFDAY_H

#ifdef _WIN32

#include <winsock2.h>
#include <time.h>

int gettimeofday(struct timeval * tp, struct timezone * tzp);

#endif

#endif
