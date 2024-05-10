#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number. \n";
    cin >> n;
    for(int i=0;i<=10;i++)
    {
        cout << pow(n, i) << "\t";
    }
    return 0;
}