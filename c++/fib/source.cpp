#include <iostream>

int main () {
    int first = 1;
    int second = 0;
    int sumOfEven = 0;
    int temp = 0;
    while( temp < 4000000) {
        if(temp%2 == 0) {
            sumOfEven += temp;
        }

        temp = first + second;
        first = second;
        second = temp;
    }
    std::cout << sumOfEven << std::endl;
    return 0;
}
