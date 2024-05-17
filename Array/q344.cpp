#include <iostream>
using namespace std;

int main()
{
    int a[] = {5,25,15,25,20,45,50,65,5,25};
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]==25)
            count++;
    }
    cout << "Number of times 25 occurs: " << count << endl;
    return 0;
}
