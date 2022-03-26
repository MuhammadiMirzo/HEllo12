#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of Array; ";
    cin>>n;

    int array[10];
    cout<<"input number "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"array["<<i<<"]=";
        cin>>array[i];
    }
    cout<<"showing nums "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"array["<<i<<"]="<<array[i]<<endl;
    }
}
