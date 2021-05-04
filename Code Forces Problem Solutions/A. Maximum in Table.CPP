#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int arr[n][n];

    for(i=0;i<n;i++)
    {
        arr[0][i]=1;
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0)
                arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=arr[i][j-1]+arr[i-1][j];
        }
    }

    cout<<arr[n-1][n-1];
    return 0;
}
