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
    ll a,b,c,d,count=0,sum=0,s=0,res;
    int n;

    // 2 4 8 10=0, 3 6 9 11=0, 2 5 8 13 18 ??

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==0)
        {
            count++;
        }
        else
            s++;
    }

    res=min(count,s);
    cout<<s<<endl;
    return 0;
}

