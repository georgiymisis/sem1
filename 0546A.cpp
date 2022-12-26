#include <iostream>
 
using namespace std;
 
int main() {
    int x(0), y(0), z(0);
    cin >> x >> y >> z;
    if ((x*z+x)*z/2 <= y){
        cout << (0);
    }
    else {
        cout << ((x*z+x)*z/2 - y);
    }
    return (0);
}
