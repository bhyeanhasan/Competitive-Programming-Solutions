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
    ll a,b,c,d,n,t,count=0,sum=0,result;
    cin>>a>>b;




    if(b==10 && a==1)
    cout<<-1;
    else if(b==10)
    {
        for(int i=0;i<a;i++)
        {
            if(i==0)
                cout<<1;
            else
                cout<<0;
        }
    }

    else
    {
        for(int i=0;i<a;i++)
        {
            if(i==0)
                cout<<b;
            else
                cout<<0;
        }
    }
    return 0;
}
