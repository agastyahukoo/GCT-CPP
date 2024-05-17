#include <iostream>
using namespace std;

int main()
{
    int a[] =  {1,2,3,4,5,6,7,8,9,10};
    for(int i=9;i>=0;i--)
    {
        cout << a[i] << '\t';
    }
    return 0;
}