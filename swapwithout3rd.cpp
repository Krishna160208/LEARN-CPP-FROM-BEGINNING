#include <iostream>
using namespace std;
int main(){
    int a = 15 , b = 20;
    cout << "Without spwaping a is " << a << endl;
    cout << "Without spwaping b is " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << endl << b;
}