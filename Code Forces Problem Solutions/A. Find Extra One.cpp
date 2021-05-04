#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x[t],y[t];
    int a,b=0,nn=0;
    for(int i=0;i<t;i++)
    {

        cin>>a>>nn;
        if(a<0)
            b++;
    }




    if(b<=1 || t-b<=1 )
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
