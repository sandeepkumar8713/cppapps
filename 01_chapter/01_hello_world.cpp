// Load pre-built libraries to print to console.
#include <iostream>

/*
Multiline comment
Line 1
*/

int get_value(){
    return 3;
}

// It is the starting point of cpp program.
int main(int argc, char **argv){
    int value = get_value();
    std::cout << "Hello World!" << std::endl;
    std::cout << "Value : " << value << std::endl;
    // Send message to OS, if it finished successfully.
    return 0;
}
