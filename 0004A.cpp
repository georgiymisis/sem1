#include <iostream>

int k = 0;
int i = 0;

int main() {
    std::cin >> k;
    for (i = 1; i < k; i++){
        if (((k-i)%2 == 0) and (i%2 ==0)){
            std::cout << "yes";
            exit(0);
        }
    }
    std::cout << "no";
    return 0;
}
