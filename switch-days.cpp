#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter days number from sunday = 1";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thusrday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;
    default:
        cout << "invalid number";
        break;
    }
}
