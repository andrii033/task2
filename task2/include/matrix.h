#pragma once

#include <string>

class Matrix {
private:
    int **matrixPtr;
    int size;
    int val;
    std::string matrixString;
    void Create();
public:
    Matrix();
    Matrix(int size, int val);
    ~Matrix();
    void toString();
};


