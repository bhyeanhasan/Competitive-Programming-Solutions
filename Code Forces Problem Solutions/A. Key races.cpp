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

    cin>>n>>a>>b>>c>>d;

    int x=(n*a)+(2*c);
    int y=(n*b)+(2*d);

    if(x<y)
        cout<<"First"<<endl;
    else if(x>y)
        cout<<"Second"<<endl;
    else
        cout<<"Friendship"<<endl;



    return 0;
}

