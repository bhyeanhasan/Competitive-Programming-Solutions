#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int x,v=0,a,b;
go:
    x=n;

    while(x!=0)
    {
        v+=x%10;
        x=x/10;
    }
    if(v%4==0)
    cout<<n<<endl;
    else{
            n++;
            v=0;
        goto go;
    }



}
