#include <iostream>
using namespace std;

int main()
{
    int odd = 0, even = 0;
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    cout << "Number of even numbers: " << even << '\n';
    cout << "Number of odd numbers: " << odd << '\n';
}