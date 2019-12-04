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
    ll a,b,c,d,count=0,sum=0,ss=0,res;
    int n;
    cin>>n;

    string s;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='n')
            count++;
        else if(s[i]=='z')
            ss++;
    }
    for(int i=0;i<count;i++)
        cout<<1<<" ";
    for(int i=0;i<ss;i++)
        cout<<0<<" ";
    return 0;
}

