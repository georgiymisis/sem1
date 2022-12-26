//
//  main.cpp
//  abc
//
//  Created by Георгий Даниелян on 27.09.2022.
//
 
#include <iostream>
#include <stdio.h>
int main(int) {
    int t,n,s,k;
    int m = 1;
    int d = 0;
    std::string c;
    std::cin >> t >> n >> s >> k >> c;
    for (int i = 0; i < n; i++){
        d = d * 10;
        if (k <= i){
            d = d + m;
        }
        else {
        d = d + 2;
        }
        k = k - 1;
    }
    
std::cout << d;
}
