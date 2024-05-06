#include <iostream>
using namespace std;

int main()
{
    int n, count=0;
    cout << "Enter a number.\n";
    cin >> n;
    for(int i=6;i<=n;i+=10)
        count++;
    cout << "There are "<< count << " numbers that end with 6.";
    return 0;
}