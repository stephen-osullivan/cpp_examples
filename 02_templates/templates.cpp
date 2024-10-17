/*
templates allow you to write generic functions that work for multiple types
rather than writing separate functions for ints, floats etc.
*/

#include <iostream>
#include <vector>

// Function template for dot product
template<typename T>
T dot_product(const std::vector<T>& a, const std::vector<T>& b) {
    T result = 0;  // Initialize the result with the default value of type T
    for (size_t i = 0; i < a.size(); ++i) {
        result += a[i] * b[i];  // Multiply elements and accumulate the sum
    }
    return result;
}

int main() {
    std::vector<int> v1 = {1, 2, 3};  // Vector of ints
    std::vector<int> v2 = {4, 5, 6};  // Another vector of ints

    // Call the dot_product template function with int vectors
    std::cout << "Dot product: " << dot_product(v1, v2) << std::endl;

    return 0;
}