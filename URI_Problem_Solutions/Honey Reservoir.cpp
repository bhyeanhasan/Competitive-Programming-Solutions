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

    double a,b,v,p,c,d,r,n,h,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;
    p=3.14;

    while(cin>>v>>d)
    {
        r=d/2;
        h= v/(p*r*r);
        a=p*r*r;

        printf("ALTURA = %0.2f\n",h);
        printf("AREA = %0.2f\n",a);
    }





    return 0;
}


