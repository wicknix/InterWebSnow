#ifndef _STRNLEN_HACK
#define _STRNLEN_HACK
/* Implementation of strnlen() for libc's that don't have it. */

// http://www.cs.cmu.edu/afs/cs/project/theo-11/www/naive-bayes/bow_diff/argp/strndup.c

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>

/* Find the length of STRING, but scan at most MAXLEN characters.
   If no '\0' terminator is found in that many characters, return MAXLEN.  */
size_t
my_strnlen (const char *string, size_t maxlen)
{
  const char *end = (const char *)memchr (string, '\0', maxlen);
  return end ? end - string : maxlen;
}

#endif
