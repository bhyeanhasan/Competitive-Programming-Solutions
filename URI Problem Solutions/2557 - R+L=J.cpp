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
    ll a,b,c,d,t,count=0,sum=0,result;
    int n;
    char s[85];
    while(cin>>s){

    if(isalpha(s[4])==1)
    {
        n=(s[2]-'0')+(s[0]-'0');

    }
    else if(isalpha(s[0])==1)
    {
        n=(s[4]-'0')-(s[2]-'0');
    }
    else{
        n=(s[4]-'0')-(s[0]-'0');

    }


    cout<<n<<endl;
    }
    return 0;
}

