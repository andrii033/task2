#include <iostream>
#include <matrix.h>

using namespace std;

int main()
{
    Matrix *matrix=new Matrix(10,-55);
    matrix->toString();
    delete matrix;
    return 0;
}
