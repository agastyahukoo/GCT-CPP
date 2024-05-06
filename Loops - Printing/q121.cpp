#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number.\n";
    cin >> n;
    for(int i=n;i>=1;i--)
    {
        cout << i << "\t";
    }
    return 0;
}