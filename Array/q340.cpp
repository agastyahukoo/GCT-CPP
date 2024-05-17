#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<9;i++)
    {
        if(a[i]%2!=0)
            cout << a[i] << '\t';
    }
}