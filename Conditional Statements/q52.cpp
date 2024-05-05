#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number.";
    cin >> n;
    if(n>9 && n<100)
        cout << "The number is a two digit number.";
    else
        cout << "The number is not a two digit number.";
    return 0;
}