#include <iostream>
#include <vector>

int main() {
    const int rows = 3;
    const int cols = 3;
    
    // 声明并初始化一个3x3的二维数组
    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // 访问和修改矩阵元素
    matrix[1][2] = 10;  // 修改第二行第三列的元素

    // 输出矩阵
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cin.get();
    
    int rows1 = 3;
    int cols1 = 4;

    // 动态分配二维数组
    int** matrix1 = new int*[rows1];
    for (int i = 0; i < rows1; ++i) {
        matrix1[i] = new int[cols1];
    }

    // 初始化矩阵
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            matrix1[i][j] = i * cols1 + j + 1;
        }
    }

    // 输出矩阵
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // 释放动态分配的内存
    for (int i = 0; i < rows1; ++i) {
        delete[] matrix1[i];
    }
    delete[] matrix1;
    std::cin.get();


    // 使用std::vector创建二维矩阵
    std::vector<std::vector<int>> matrix2(rows, std::vector<int>(cols));

    // 初始化矩阵
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix2[i][j] = i * cols + j + 1;
        }
    }

    // 输出矩阵
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
