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


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    int pos ,one,two,three,sum=0;

    while(cin>>pos>>one>>two>>three)
    {
        if(pos==0 && one==0 && two==0 &&three==0)
            return 0;
        if(pos<one)
        {

            sum=40-(one-pos);
        }
        else
        {
            sum=pos-one;
        }

        if(one>two)
        {

            sum+=40-(one-two);
        }
        else
        {
            sum+=(two-one);
        }

        if(two<three)
        {
            sum+=40-(three-two);
        }
        else
        {

            sum+=two-three;
        }

        sum*=9;
        sum+=1080;
        cout<<sum<<endl;
        sum=0;

    }


    return 0;
}

