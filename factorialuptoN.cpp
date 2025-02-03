#include <iostream>
using namespace std;
int main(){
    int n , fact = 1, i;
    cout << "Enter A digit For FACTORIAL of 1 TO N Numbers ";
    cin >> n;
    for ( i = 1; i <= n; i++)
    {
        fact = i * fact;
    }
    cout << "FACTORIAL IS :~ " << fact ;
}