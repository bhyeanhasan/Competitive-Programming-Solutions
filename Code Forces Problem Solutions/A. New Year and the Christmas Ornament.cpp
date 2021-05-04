#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;
go:
    int x=min(a,min(b,c));

    if(a==x && a<=(b-1)&& a<=(c-2))
    {
        x=(3*x)+3;
    }
    else if(b==x && b<=(c-1))
        x=(3*x);
    else if(c==x)
        x=(3*x)-3;
        else
        {
            a--;
            goto go;
        }

    cout<<x<<endl;
}
