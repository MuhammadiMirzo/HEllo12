#include <iostream>
#include <cmath>
using namespace std;

int min(int a, int b, int c, int d )
{
    int res;

    if(a<=b and a<=c and a<=d){res=a;}
    else if(b<=a and b<=c and b<=d){res = b;}
    else if(c<=a and c<=b and c<=d){res = c;}
    else if (d<=a and d<=b and d<=c){res = d;}
    return res;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<min(a,b,c,d);

}
