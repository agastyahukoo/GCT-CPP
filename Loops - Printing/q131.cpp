#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        cout << i << "\t" << pow(i, 2) << "\t" << pow(i, 3) << "\n";
    }
    return 0;
}