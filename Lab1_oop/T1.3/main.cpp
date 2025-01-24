#include <iostream>
#include "a.h"
#include "b.h"

#define USE_A

void test() {
    std::cout << "This is test from main program" << std::endl;
}

int main() {
    #ifdef USE_A
        ::test();
    #else
        b::test();
    #endif

    return 0;
}

