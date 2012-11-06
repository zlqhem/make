#include "utils.h"

#include <assert.h>

void print_current_time()
{
   time_t     tm_time;
   struct tm *st_time;
   char       buff[BUFF_SIZE];

   time( &tm_time);
   st_time = localtime( &tm_time);
   strftime( buff, BUFF_SIZE, "%H:%M:%S (%s)\n", st_time);

   printf( buff);
}

void print_elapsed_time(time_t *prev_time, const char *msg)
{
    time_t      cur_time;
    double      elapsed_time;    
    
    assert (prev_time != 0);
    assert (msg != 0);
    
    time( &cur_time );    
    elapsed_time = difftime(cur_time,*prev_time);
    printf ("[%s] %g seconds \n", msg, elapsed_time);
}