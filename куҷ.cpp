#include <iostream>
#include <cmath>
using namespace std;
int main(){
int counter, first, last, next;
first=1;
last=2;
counter=first;
while(counter<=last)
{
    cout<<"\n"<<counter;
    if (first%2==0)
        next=counter*counter;
    cout<<" "<<next;
    counter++;
}
}
