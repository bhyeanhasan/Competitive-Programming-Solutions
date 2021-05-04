#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int j=1;
    while(j<=n)
    {
        int x;
        cin>>x;
        int arr[x];
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        printf("Case %d: %d\n",j,arr[x/2]);
        j++;
    }
    return 0;
}
