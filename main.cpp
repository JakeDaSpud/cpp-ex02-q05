#include <iostream>

//Write a function increment( ) that accepts one integer argument and increments the
//value of the variable in the caller by one. You will need to use a reference parameter of
//type int& in this case. Draw the call stack at the point where the function is about to
//return. What happens if you don’t use a reference parameter?

void increment(int& intIn) {
    intIn++;
}

int main() {
    int a = 0;

    std::cout << "a: " << a << "\nincrement(a): ";
    increment(a);
    std::cout << a << std::endl;

    return 0;
}
