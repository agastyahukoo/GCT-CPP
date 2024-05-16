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
       if(a[i]%7==0)
            sum+=a[i];
    }
    cout << "The sum of the integers divisible by 7 are " << sum << endl;
    return 0;
}