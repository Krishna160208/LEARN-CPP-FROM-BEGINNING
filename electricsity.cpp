#include <iostream>
using namespace std;
int main() {
    float Bill , Unit , Additional_charge;
    cout << "----------------------------------------" << endl;
    cout << "Welcome to electricity bill payment desk" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Enter Electricity Unit :~ ";
    cin >> Unit;
    if (Unit <= 50)
    {
        Bill = Unit * 0.50;
    }
    else if (Unit <= 150)
    {
        Bill = 50 * 0.50 + ( (Unit - 50) * 0.75); 
    }
    else if (Unit <= 250)
    {
        Bill = (50 * 0.50) + (100 * 0.75) + ((Unit - 150) * 1.20);
    }    
    else
    {
        Bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((Unit - 250) * 1.50);
    }
    Additional_charge = (Bill * 0.20) + Bill;
    cout << "Bill Amount is TOTAL with ADDITIONAL CHARGE" << Additional_charge;
}