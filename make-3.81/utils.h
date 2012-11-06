#ifndef __UTILS_H__
#define __UTILS_H__

#include <stdio.h>
#include <time.h>

#define BUFF_SIZE 1024

void print_current_time(void);
void print_elapsed_time(time_t *prev_time, const char *msg);

#endif