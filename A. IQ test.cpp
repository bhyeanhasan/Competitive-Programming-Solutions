#include<bits/stdc++.h>
using namespace std;
int even(int arr[],int x);
int odd(int arr[],int x);
int main()
{
    int n,i=0,j,ev=0,od=0,r,bo;
    cin>>n;
    int arr[n];
    bo=n;
    while(bo--)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            ev++;
        }
        else
        {
            od++;
        }
        i++;
    }
    if(ev>od)
    {
       r=odd(arr,n);
    }
    else
        r=even(arr,n);

    return 0;
}

int odd(int arr[],int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}
int even(int arr[],int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}
