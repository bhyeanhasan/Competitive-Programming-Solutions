#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0,c=0,x=0,h;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>h;
        arr[i]=h;
    }

    if(n>0)
    for(int i=0;i<n;i+=3)
        a+=arr[i];

    if(n>1)
    for(int i=1;i<n;i+=3)
        b+=arr[i];

    if(n>2)
    for(int i=2;i<n;i+=3)
        c+=arr[i];

    if(a>b && a>c)
        cout<<"chest";
    else if(b>a && b>c)
        cout<<"biceps";
    else if(c>a && c>b)
        cout<<"back";




    return 0;
}
