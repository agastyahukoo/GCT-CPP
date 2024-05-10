#include <iostream>
using namespace std;

int square(int n)
{
    return n*n;
}

int main()
{
    int n, sum;
    cout << "Enter a number.\n";
    cin >> n;
    sum = square((n+1)/2);
    cout << "The sum of odd numbers till " << n << " is " << sum;
    return 0;
}

