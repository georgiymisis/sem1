#include <cmath>
#include <iostream>
 
int main() {
    int i(0);
    int p(0);
    int a(0);
    int n(0);
    int m(0);
    std::cin >> (a);
    for(int c = 0;c < a; c++){
        std::cin >> (i);
        p = i;
        for(int b = 0;b < 5; b++){
            if (0 != p % 10) {
                m = m+1;
                }
            p = int(p/10);
        }
        std::cout << m << "\n";
        m = 0;
        for(int b = 0;b < 5; b++){
            if (0 != i % 10) {
                std::cout << (int(i%10)*pow(10,n)) << " ";
            }
            i = int(i/10);
            n = n + 1;
        }
        n = 0;
    }
    return 0;
}
