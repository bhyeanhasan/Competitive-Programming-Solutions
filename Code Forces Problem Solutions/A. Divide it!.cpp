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
#define in(a) scanf("%lld",&a)
#define srt(a) sort(a.begin(),a.end())


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,t,count=0,sum=0,result,i,j,k;

    string s;

    in(a);

    while(a--)
    {
        bool is=true;
        in(b);
        if(b==1)
        {
            cout<<0<<endl;
            is = false;

        }
        else{
        while(b!=1)
        {
            c=b;
            if(b%2==0){
                b=b/2; count++;}
            if(b%3==0){
                b=(2*b)/3; count++;}
            if(b%5==0){
                b=(4*b)/5;  count++;}
            if(b==c)
            {
                cout<<-1<<endl;
                is =false;
                break;
            }

        }
        }
        if(is)
        cout<<count<<endl;

        count=0;
    }




    return 0;
}


