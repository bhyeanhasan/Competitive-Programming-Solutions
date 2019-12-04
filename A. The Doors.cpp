/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll int
#define pi acos(-1)
#define vc vector<ll>
#define in(a) scanf("%d",&a)
#define srt(a) sort(a.begin(),a.end())


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;

    in(n);
    int arr[n];

    for(int i=0;i<n;i++)
        in(arr[i]);

        int u=arr[n-1];

    for(int i=n-1;i>=0;i--)
    {

        if(arr[i]==u)
            count++;
        else
            break;
    }

    cout<<n-count;





    return 0;
}
