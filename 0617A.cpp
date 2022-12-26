#include <iostream>

int k = 0;
int i = 0;

int main() {
    std::cin >> k;
    if (k%5 == 0){
        std::cout << k/5;
    }
    else{
        std::cout << k/5+1;
    }
    return 0;
}
