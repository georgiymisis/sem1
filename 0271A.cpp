#include <iostream>

int k = 0;
int i = 0;

int main() {
    std::cin >> k;
    for (i = k+1; i < 9999; i++){
        int a = i%10;
        int b = (i/10)%10;
        int c = i/100%10;
        int d = i/1000%10;
        if ((a != b) and (b != c) and (c != d) and (a != c) and (a != d) and (b != d)){
            std::cout << i;
            exit(0);
        }
    }
    return 0;
}
