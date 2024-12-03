#ifdef DEBUG
#include <stdio.h>

#define TRACE() \
    printf("file: %s, Line %d, Function: %s\n",__FILE__,__LINE__,__func__);

    #else
    #define TRACE()
    #endif