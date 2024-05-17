#include <iostream>
using namespace std;

int main()
{
    int positive = 0, negative = 0, zero = 0;
    int a[] = {-5,-4,-3,-2,-1,0,1,2,3,4,5};
    for(int i=0;i<11;i++)
    {
        if(a[i]<0)
            negative++;
        else if(a[i]>0)
            positive++;
        else
            zero++;
    }
    cout << "Number of positive numbers: " << positive << endl;
    cout << "Number of negative numbers: " << negative << endl;
    cout << "Number of zero numbers: " << zero << endl;
    return 0;
}
