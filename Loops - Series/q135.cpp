#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number.\n";
    cin >> n;
    for(int i=2;i<=n;i+=2)
    {
        if(i%4==0)
            sum-=i;
        else
            sum+=i;
    }
    cout << sum;
    return 0;
}