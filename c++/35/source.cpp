#include <iostream>

int main() {
    int i = 1;
    int b = 0;
    while(i<1000) {
        if(i%3 == 0) {
            b+=i;
            std::cout << i << std::endl;
        }
        else if(i%5 == 0) {
            b+=i;
            std::cout << i << std::endl;
        }
        i++;
    }
    std::cout << b << std::endl;
    return 0;
}
