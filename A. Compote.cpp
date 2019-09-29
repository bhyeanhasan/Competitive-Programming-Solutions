#include<bits/stdc++.h>
using namespace std;
int test (int a,int b,int c);

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    cout<<test(a,b,c);


}

int test (int a,int b,int c)
{
    if(2*a<=b && 4*a<=c)
    {
        return (a*2+a*4+a);
    }
    else
    {
        a--;
        test(a,b,c);
    }
}
