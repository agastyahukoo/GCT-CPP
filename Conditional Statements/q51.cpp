#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number.\n";
    cin >> n;
    if(n%2==0)
        cout << n << " is an even number.\n";
    else
        cout << n << " is an odd number.\n";
}