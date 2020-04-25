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

    ll n,l=0,t,count=0,sum=0,result=0,i=0,j=0,k;
    bool is;
    string s,o;

    cin>>s>>o;



    while(1)
    {


        if(s[i]=='L' && o[j]=='L')
        {
            i++;
            j++;
            result++;
        }
        else if(s[i]=='L')
        {
            j++;
            result++;
        }
        else if(o[j]=='L')
        {
            i++;
            result++;
        }
        else
        {
            i++;
            j++;
            result++;
        }

        if(i==s.size() || j == o.size())
            break;




    }






    l = result + s.size()-i+o.size()-j;

    cout<<l<<endl;




    return 0;
}


