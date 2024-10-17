/*
This program shows how to write a function that 
1) accepts a vector by reference using & i.e. it is not copied into memory
2) loop and edit the elements in place, again using &
*/

#include <iostream>
#include <vector>

// Function declaration
double square(double x) {
    return x * x;
}

// Pass by reference (&) (efficient, can modify original)
// Similar to pointers (*) in c, but safer
void square_vector_in_place(std::vector<int>& vec) {
    // int& num to modify the actual elements of the vector in place
    // int num without & will copy values from the vector into the variable num and
    // not modify the original values
    for (int& num : vec) {
        num *= num;
    }
}

int main() {
    
    std::vector<int> numbers = {1, 2, 3};
    square_vector_in_place(numbers);
    // numbers is now {1, 4, 9}
    for (int num: numbers){
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}