#include <iostream>
using namespace std;

int main()
{
    char a, b;
    cout << "Enter two characters.\n";
    cin >> a;
    cin >> b;
    if(a>b)
        cout << a << " is greater than " << b;
    else if(b>a)
        cout << b << " is greater than " << a;
    else
        cout << "Both characters are equal";
    return 0;
}