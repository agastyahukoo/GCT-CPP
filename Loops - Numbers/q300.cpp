#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n)
{
    int a=0;
    int t=n;
    int l = to_string(n).length();
    if(n<0)
        l--;
    while(t>0)
    {
        a+=pow(t%10, l);
        t/=10;
    }  
    if(a==n)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "Enter a number.\n";
    cin >> n;
    if(armstrong(n))
        cout << n << " is an armstrong number.";
    else
        cout << n << " is not an armstrong number.";
    return 0;
}