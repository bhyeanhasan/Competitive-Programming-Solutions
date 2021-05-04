#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,n,num,e=0,o=0;

    cin>>n>>num;

    if(n%2==0)
    {
        if(num<=n/2)
        {
            cout<<2*num-1;
        }
        else
        {
            cout<<(num-(n/2))*2;
        }
    }

    else
    {
        if(num<=(n/2)+1)
        {
            cout<<2*num-1;
        }
        else
        {
            cout<<(num-((n/2)+1))*2;
        }
    }

    return 0;
}
