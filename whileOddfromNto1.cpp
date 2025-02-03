#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter last number for loop:- ";
    cin >> N;
    while (1<=N)
    {
        if (N %2 != 0)
        {
            cout << N << endl;
        }
        N--;
    }
    
}