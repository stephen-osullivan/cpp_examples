/*
simple matrix multiplication program
eigen library contains more optimised functions for this.
*/

#include <vector>
#include <stdexcept>
#include <iostream>

using Matrix = std::vector<std::vector<double>>;

Matrix multiply_matrices(const Matrix& A, const Matrix& B) {
    int m = A.size();
    int n = A[0].size();
    int p = B[0].size();

    if (n != B.size()) {
        throw std::invalid_argument("Matrix dimensions don't match for multiplication");
    }

    Matrix C(m, std::vector<double>(p, 0.0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

// Helper function to print a matrix
void print_matrix(const Matrix& matrix) {
    for (const auto& row : matrix) {
        for (double val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    Matrix A = {{1, 2}, {3, 4}};
    Matrix B = {{2, 0}, {1, 2}};

    std::cout << "Matrix A:" << std::endl;
    print_matrix(A);

    std::cout << "Matrix B:" << std::endl;
    print_matrix(B);

    Matrix C = multiply_matrices(A, B);

    std::cout << "Result of A * B:" << std::endl;
    print_matrix(C);

    return 0;
}