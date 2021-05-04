
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll c=2,d,n,t,count=0,sum=0,s=0,result;

    cin>>d>>t;
    n=d;
    while(1)

    {
        if(n%10 ==0 || n%10== t)
            break;
        n=d*c;
        c++;
    }
    cout<<c-1<<endl;

    return 0;
}
