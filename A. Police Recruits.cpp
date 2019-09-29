#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=0,g=0;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] == -1)
        {
            if(g>0){
            count=(count+1)-1;
            g--;
            }
            else
                count++;



        }
        else
        {
            g=g+arr[i];
        }
    }
    cout<<count;

    return 0;
}
