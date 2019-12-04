#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,x,sum=0;
    cin>>n;
    if(n==1)
    {
        x=1;
        goto go;
    }
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum+=j;

            if(sum>n){
                x=i-1;
                goto go;
            }


        }
    }


    go:
        cout<<x;
    return 0;
}
