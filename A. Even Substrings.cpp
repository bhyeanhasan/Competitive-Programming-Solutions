/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define lvc vector<ll>
#define ivc vector<int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,t,count=0,sum=0,s=0,result,i,j,k;
    string str;
    cin>>n;
    cin>>str;

    for(i=0;i<n;i++)
    {
        if((str[i]-0)%2==0)
        {
            sum+=i+1;
        }
    }

    cout<<sum;



    return 0;
}
