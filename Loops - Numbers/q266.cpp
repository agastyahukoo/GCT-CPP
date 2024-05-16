#include <iostream>
using namespace std;

int main()
{
    int n=0;
    for(int i=1;i<=10;i++)
    {
        n+=i;
    }
    cout << "The sum of the first 10 positive integers is " << n << endl;
    return 0;
}