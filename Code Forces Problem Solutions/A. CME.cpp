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

    int t,ans;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x==2)
            ans=2;
        else if(x%2==0)
            ans=0;
        else if(x%2==1)
            ans=1;

        cout<<ans<<endl;
    }

    return 0;
}

