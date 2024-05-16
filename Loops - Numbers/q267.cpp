#include <iostream>
using namespace std;

int main()
{
    int a[11];
    int sum=0;
    cout << "Enter 10 numbers. \n";
    for(int i=0;i<10;i++)
    {
       cin >> a[i];
    }
    for(int i=0;i<10;i++)
    {
       sum+=a[i];
    }
    cout << "The sum of the 10 integers is " << sum << endl;
    return 0;
}