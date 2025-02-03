#include <iostream>
using namespace std;
int main(){
    int dig , count = 0;
    cout << "Enter Any Number";
    cin >> dig;
   while (dig > 0)
   {
    count++;
    dig/=10;
   }
   
    cout << count;
}