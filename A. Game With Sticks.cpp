#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int sum;
    sum=a*b;

    if(sum==2)
    {
        cout<<"Akshat";
    }
    else if(sum%2==0)
    {
        cout<<"Malvika";
    }
    else
        cout<<"Akshat";

    return 0;
}
