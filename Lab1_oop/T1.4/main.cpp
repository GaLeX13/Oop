#include "a.h"
#include "b.h"

#define USE_A

int main() {
    #ifdef USE_A
        testA();
    #else
        testB();
    #endif
    return 0;
}


//compile 

//g++ a.cpp b.cpp main.cpp -o main
