#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number.\n";
    cin >> n;
    if(n%2==0)
        n+=1;
    for(int i=1;i<=n;i+=2)
    {
        cout << i << "\t";
    }
    return 0;
}