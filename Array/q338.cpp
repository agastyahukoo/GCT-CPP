#include <iostream>
using namespace std;

int main()
{
    int NAME_COUNT  = 3;
    int MAX_LENGTH = 100;
    char names[NAME_COUNT][MAX_LENGTH];

    for(int i=0;i<NAME_COUNT; i++)
    {
        cout << "Enter a name " << (i+1) << ": ";
        cin >> names[i];
    }
    for(int i=NAME_COUNT-1;i>=0;i--)
    {
        cout << names[i] << '\t';
    }
}