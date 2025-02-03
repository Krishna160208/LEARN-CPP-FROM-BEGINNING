#include <iostream>
using namespace std;
int main()
{
    int a , c ;
    cout << "Enter Any Number: ";
    cin >> a;
    int first =a,last=a;
    while (a > 0)
    {
        first = a%10;
        last = last%10;
        a = a/10;
    }
    c = first + last;
    cout << c;
}