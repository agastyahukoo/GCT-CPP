#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
            sum+=a[i];
    }
    cout << sum << '\n';
}