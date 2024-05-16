#include <iostream>
using namespace std;

int main()
{
    char c[256];
    cout << "Enter a name. \n";
    cin >> c;
    for(int i=0;i<5;i++)
    {
        cout << c << '\n';
    }
    return 0;
}