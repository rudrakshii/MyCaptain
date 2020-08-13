#include <iostream>
using namespace std;
int main ()
{
    int arr[5], *p, i;
    cout<<"Enter elements: ";
    for (i=0; i<5; i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    p=arr;
    cout<<"You entered: ";
    for (i=0; i<5; i++)
    {
        cout<<*p<<endl;
        p++;
    }
}
