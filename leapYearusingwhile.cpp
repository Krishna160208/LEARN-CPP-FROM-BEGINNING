#include <iostream>
using namespace std;
int main() {
    int a , b;
    cout << "Enter First Number of year";
    cin >> a;
    cout << "Enter Second Number of year";
    cin >> b;
    if (a < b)
    {
        while (a <= b)
        {
            if (a%4 == 0)
            {
                cout << a << endl;
            }
            a++;
        }
    }
    else
    {
        cout << "First number is GREATERTHEN or EQUAL to Second number" << endl;
    }
}