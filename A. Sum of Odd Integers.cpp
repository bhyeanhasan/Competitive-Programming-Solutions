#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    while(n--)
    {
        long long int a,b;
        cin>>a>>b;
        if((b*b)<=a &&(a-(b*b))%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
