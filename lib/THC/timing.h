#ifndef TIMING_H__
#define TIMING_H__

#include <sys/time.h>
inline double get_ts()
{
  struct timeval ts;
  gettimeofday(&ts, NULL);
  return (ts.tv_sec * 1000.0 + ts.tv_usec / 1000.0);
}

#endif
