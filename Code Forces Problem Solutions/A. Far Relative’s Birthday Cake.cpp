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
#define vc vector<ll>
#define in(a) scanf("%d",&a)
#define srt(a) sort(a.begin(),a.end())
#define fr(i,n) for(ll i=0;i<n;i++)
bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    int n,count=0;
    cin>>n;
    char ch[n+1][n+1];

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0 || j==0)
                ch[i][j]='0';
            else
            {
                cin>>ch[i][j];
            }
        }
    }

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(ch[i][j]=='C')
            {
                if(ch[i-1][j]=='C')
                    count+=2;


                if(ch[i][j-1]=='C')
                    count+=2;
            }
        }
    }






    return 0;
}


