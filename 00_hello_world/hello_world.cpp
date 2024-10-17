#include <iostream>
#include <vector>
#include <cmath>

int main() {
    // Basic types
    int i = 42;
    bool is_true = true;
    const double PI = 3.14159;
    
    // Printing 
    std::cout << "Hello, C++!" << std::endl;
    
    // Vectors
    std::vector<int> v = {1, 2, 3, 4, 5};
    
    // classic looping
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    
    // loop over vector range directly
    for (int num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}