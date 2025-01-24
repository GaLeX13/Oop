#ifndef SORT_H
#define SORT_H

#include <algorithm>
#include <cstring>
#include <complex>

template<typename T>
void sortArray(T* arr, int size) {
    std::sort(arr, arr + size);
}

template<>
void sortArray<char*>(char** arr, int size) {
    std::sort(arr, arr + size, [](const char* a, const char* b) {
        return std::strcmp(a, b) < 0;
    });
}

template<>
void sortArray<std::complex<double>>(std::complex<double>* arr, int size) {
    std::sort(arr, arr + size, [](const std::complex<double>& a, const std::complex<double>& b) {
        if (a.real() == b.real()) return a.imag() < b.imag();
        return a.real() < b.real();
    });
}

#endif
