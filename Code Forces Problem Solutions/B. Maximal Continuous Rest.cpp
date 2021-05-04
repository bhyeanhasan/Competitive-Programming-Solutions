#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll int n,c=0,m=0,w=0;
     cin>>n;
     ll int arr[n];



     for(ll int i=0;i<n;i++)
        cin>>arr[i];




     for(ll int i=0;i<n/2;i++)
     {
         if(arr[i]==1)
            w++;
         else
            break;
     }
     for(ll int i=n-1;i>=n/2;i--)
     {
         if(arr[i]==1)
            w++;
         else
            break;
     }

        for(ll int i=0;i<n;i++)
        {
            if(arr[i]==1){
                c++;

            }
            else
            {
                if(c>m)
                    m=c;
                c=0;
            }
        }
        if(m<2)
        {
            if(arr[0]==1 && arr[n-1]==1)
            {
                m=2;
            }
        }
        if(m<c)
            m=c;
        if(w>m)
            m=w;

        cout<<m<<endl;



    return 0;
}
