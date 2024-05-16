#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number. \n";
    cin >> n;
    for(int i=0;i<3;i++)
    {
        cout << n << '\t' << n << '\t' << n << '\n';
    }
    return 0;
}