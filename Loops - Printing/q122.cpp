#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number.\n";
    cin >> n;
    for(int i=5;i<=n;i+=5)
    {
        cout << i << "\t";
    }
    return 0;
}