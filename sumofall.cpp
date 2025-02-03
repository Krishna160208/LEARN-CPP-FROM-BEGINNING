#include <iostream>
using namespace std;
int main(){
    int i , n , a;
    cout << "Enter Last Number to Add From 1 To N :~ ";
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        a = i + a;
    }
    cout << a;
}