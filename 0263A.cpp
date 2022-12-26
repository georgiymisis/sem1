#include <iostream>
 
int main() {
    int i(1);
    int z(1);
    int arr1(0);
    for (i;i<6;i++){
        if (z == 6){z = 1;}
        for (z;z<6;z++){
            std::cin >> (arr1);
            if ((arr1) == 1){break;
                    }
                }
        if ((arr1) == 1){break;
                }
            }
    // std::cout << (i);
    // std::cout << ("\n");
    // std::cout << (z);
    // std::cout << ("\n");
    std::cout << (abs(i-3)+abs(z-3));
    return 0;
}
