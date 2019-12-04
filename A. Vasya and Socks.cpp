
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
    ll a,b,c,d,n,t,count=0,sum=0,s=0,result;

    cin>>a>>b;
    c=a;
    while(c>=b)
    {
        n=c/b;
        c=n+(c%b);
        s=s+n;
    }
    cout<<s+a<<endl;

    return 0;
}
