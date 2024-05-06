#include <iostream>
using namespace std;

int main()
{
    int a,b,n;
    n=0;
    cout << "Enter two numbers.\n";
    cin >> a;
    cin >> b;
    for(int i=1;i<7;i++)
    {
        if((a+i)%7==0)
        {
            a=a+i;
        }
    }
    for(int i=a;i<=b;i+=7)
    {
        n++;
    }
    cout << "There are "<< n << " numbers divisible by 7.";
    return 0;
}