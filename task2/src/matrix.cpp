#include "matrix.h"
#include <iostream>

Matrix::Matrix()
{
    size=0;
    val=0;
    Create();
}

Matrix::Matrix(const int size,const int val):
    val{val},size{size}
{
    Create();
}

void Matrix::Create()
{
    matrixPtr=new int*[size];
    for(int row=0; row<size; row++)
    {
        matrixPtr[row]=new int[size];
    }

    for(int row=0; row<size; row++)
    {
        for(int col=0; col<size; col++)
        {
            matrixPtr[row][col]=val;
        }
    }
}

void Matrix::toString()
{
    matrixString+="[";
    for(int row=0; row<size; row++)
    {
        for(int col=0; col<size; col++)
        {
            matrixString+=std::to_string(matrixPtr[row][col]);
            if(col<size-1) matrixString+=",";
        }
        matrixString+="; ";
    }
    matrixString+="]";
    std::cout<<matrixString;
}

Matrix::~Matrix ()
{
    delete [] matrixPtr[size];
}
