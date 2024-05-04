#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age.\n";
    cin >> age;
    if(age>=18)
        cout << "Major\n";
    else
        cout << "Minor\n";
}