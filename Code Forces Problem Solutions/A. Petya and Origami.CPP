/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,t,count=0,sum=0,s=0,result;

    cin>>n>>t;

    int x= ((n*2)/t);
    if((n*2)%t>0)
        x++;
    int y= ((n*5)/t);
    if((n*5)%t>0)
        y++;
    int z= ((n*8)/t);
    if((n*8)%t>0)
        z++;


    cout<<x+y+z<<endl;

    return 0;
}

