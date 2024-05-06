#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter two numbers.\n";
    cin >> a;
    cin >> b;
    if(a%2!=0)
        a++;
    for(int i=a;i<=b;i+=2)
    {
        cout << i << "\t";
    }
    return 0;
}