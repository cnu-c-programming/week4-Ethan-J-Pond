#include <stdio.h>


static inline void logger(char* message) {
    printf("log: %s\n", message);
}

static inline void logger_static_inline(char* message){
    static int counter = 0;
    printf("log %2d: %s\n", counter++, message);
}
