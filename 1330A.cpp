
#include <stdio.h>
#include <iostream>
 
int main()
{
int n,lenght,a,t, x,i,z;
    //std::cin >> t;
    std::cin >> lenght >> x;
int arr[lenght];
 
for(n = 0;n<=lenght + x; n++){
    arr[n] = 0;}
    
for(i = 0;i<=lenght; i++){
    std::cin >> a;
    arr[a] = a;}
//for(n = 0; n <= x + lenght; n++)
//  {
//      if (arr[n] == 0){
//          arr[n] = 0;
//      }
//  }
    for (z = 0; z <= x+lenght; z++){
        std::cout << arr[z];
    }
}
