#include <iostream>
using namespace std;

int main()
{
    int n = 65;
    for(int i=0;i<26;i++)
    {
        cout << (char) (n+i) << '\t';
    }
    return 0;
}