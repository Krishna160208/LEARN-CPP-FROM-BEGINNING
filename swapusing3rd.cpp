#include <iostream>
using namespace std;
int main(){
    int a = 15 , b = 20 , c ;
    cout << " A is " << a << endl;
    cout << " B is " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "After SWAPPPING a is " << a << endl;
    cout << "After SWAPPPING b is " << b << endl;

}