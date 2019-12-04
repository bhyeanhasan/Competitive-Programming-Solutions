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
    string str;
    cin>>n;
    cin>>str;
    go:
    for(ll i=0;i<str.size()-2;i++)
    {
        if(str[i]=='x' && str[i+1]=='x' && str[i+2]=='x')
        {
            count++;
            str.erase(str.begin()+i);
            goto go;
        }
    }

    cout<<count;


    return 0;
}

