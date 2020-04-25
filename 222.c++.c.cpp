#include<bits/stdc++.h>
#define pb push_back
using namespace std;


int nCr(int n, int r)
{
    int x;

    if(n==r)
        return 1;
    if(r==1)
        return n;

    return nCr(n-1,r-1)+nCr(n-1,r);
}

int main()
{
    int x,y,sum;

    while(cin>>x>>y)
    {

        if(x==0 && y==0)
            return 0;
    sum = nCr(x,y);
    cout<<x<<" things taken "<<y<<" at a time is "<<sum<<" exactly."<<endl;

    }

}

