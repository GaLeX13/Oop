#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>

template<typename T>
class Matrix {
    std::vector<std::vector<T>> data;
    int rows, cols;

public:
    Matrix(int r, int c, T value = T()) : rows(r), cols(c) {
        data = std::vector<std::vector<T>>(rows, std::vector<T>(cols, value));
    }

    void setElement(int r, int c, T value) {
        data[r][c] = value;
    }

    T getElement(int r, int c) const {
        return data[r][c];
    }

    Matrix<T> power(int n) const {
        Matrix<T> result(rows, cols, T(1));
        for (int i = 0; i < n; ++i) result = result.multiply(*this);
        return result;
    }

    Matrix<T> multiply(const Matrix<T>& other) const {
        Matrix<T> result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = T();
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    void display() const {
        for (const auto& row : data) {
            for (const auto& elem : row) std::cout << elem << " ";
            std::cout << std::endl;
        }
    }
};

#endif
