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

    ll n,t,count=0,sum=0,result,i,j,k,r,c,m,nn;
    bool is;
    string s;

    cin>>n>>t;

    char arr[n][t];

    fr(i,n)
    {
        fr(j,t)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='B')
            {
                if(count==0)
                {
                    r=i+1;
                    c=j+1;
                }
                count++;

                m=i+1;
                nn=j+1;

            }
        }
    }

    cout<<(r+m)/2<<" "<<(c+nn)/2<<endl;



    return 0;
}


