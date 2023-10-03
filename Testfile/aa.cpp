#include <iostream>

const int MAX_SIZE = 10;  // Maximum size of the array
int globalArray[MAX_SIZE];  // Global array declaration
int top = -1;  // Variable to keep track of the top of the stack

void push(int value) {
    if (top == MAX_SIZE - 1) {
        std::cout << "Stack overflow. Cannot push more elements." << std::endl;
        return;
    }

    top++;
    globalArray[top] = value;
}

int main() {
    // Push elements onto the global array
    push(10);
    push(20);
    push(30);

    // Display the elements in the global array
    std::cout << "Array elements after push:" << std::endl;
    for (int i = 0; i <= top; i++) {
        std::cout << globalArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
