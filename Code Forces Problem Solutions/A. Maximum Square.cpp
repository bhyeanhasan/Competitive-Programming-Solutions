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
<<<<<<< Updated upstream
<<<<<<< Updated upstream
bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}
=======
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes


using namespace std;

int main()
{
<<<<<<< Updated upstream
<<<<<<< Updated upstream
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;


    cin>>t;

    while(t--)
    {
        cin>>n;
        ll arr[n];

        fr(i,n)
            cin>>arr[i];

        sort(arr,arr+n);

        for(i=arr[n-1];i>=0;i--)
        {
            if(arr[n-i]>=i)
            {
                cout<<i<<endl;
                break;
            }
        }


    }


=======
=======
>>>>>>> Stashed changes
    int n;
    cin>>n;

    while(n--)
    {

        int k,count=1;
        cin>>k;

        int arr[k];

        for(int i=0;i<k;i++)
            cin>>arr[i];

        sort(arr,arr+k);

        for(int i=k-1;i>=0;i--)
        {
            count=1;

            for(int j=0;j<k;j++)
            {
                if(arr[i]>=k-j)
                {
                    count=k-j;
                }
                else
                    break;
            }




        }
        cout<<count<<endl;
    }

<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes

    return 0;
}


