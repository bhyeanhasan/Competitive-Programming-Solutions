#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[3],ok=0,count=0,i;
    cin>>n;
    while(n--)
    {
        cin>>arr[0]>>arr[1]>>arr[2];
        for(i=0;i<3;i++)
        {
            if(arr[i]==1)
            {
                count++;
            }
        }
        if(count>1)
            ok++;

        count=0;

    }
    cout<<ok<<endl;
    return 0;
}
