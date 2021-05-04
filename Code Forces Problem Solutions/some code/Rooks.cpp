
#include<bits/stdc++.h>
#define ll long long int



using namespace std;


int main()
{

    unsigned long long  n,t,count=0,sum=0,result=1,i,j,k;
    bool is;
    string s;

    cin>>t;

    while(t--)
    {
        count++;

        cin>>n>>k;

        result = 0;

        if(k<=n)
        {

        result = 1;
        sum = n;

        for(i=1;i<=k;i++)
        {
            result = result*n;
            result = result / i;
            result = result*n;
            n--;
        }

        }

        cout<<"Case "<<count<<": "<<result<<endl;
    }


    return 0;
}


