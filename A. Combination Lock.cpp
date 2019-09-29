#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,a,c,b,d,m;
    cin>>n;

    char s1[n];
    char s2[n];
    cin>>s1>>s2;

    for(int i=0;i<n;i++)
    {
        a= s1[i]-'0';
        b= s2[i]-'0';

        if(a>b)
            m=(a-b);
        else
            m=(b-a);

        if(m>5)
            m=10-m;

            sum+=m;



    }

    cout<<sum;

    return 0;
}
