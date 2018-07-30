#ifndef _STRINGS_H_
#define _STRINGS_H_

#include <sys/types.h>

/*
#define bcopy(b1,b2,len) (memmove((b2), (b1), (len)), (void) 0)
#define bzero(b, len) (memset((b),0,(len)),(void)0)
#define strcasecmp _stricmp
#define strdup _strdup
*/

void   bcopy(const void * src, void * dst, size_t n);
void   bzero(void * p, size_t n);
int    strcasecmp(const char* s1, const char* s2);
int    strncasecmp(const char* s1, const char* s2, size_t n);
int bcmp(const void * p1, const void * p2, size_t n);
char   *index(const char * s, int c);
char   *rindex(const char * s, int c);
int    ffs(int v);

#endif