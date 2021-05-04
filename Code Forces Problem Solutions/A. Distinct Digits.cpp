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
    ll a,b,c,d,x,l,count=0,sum=0,s=0,result,frag=0;

    cin>>a>>b;
    set<char> st;
    for(int i=a;i<=b;i++)
    {
        string s=to_string(i);
        l=s.size();
        for(int j=0;j<l;j++)
        {
            st.insert(s[j]);
        }
        if(st.size()==l)
        {
            cout<<s;
            return 0;
        }
        st.clear();
    }
    cout<<-1<<endl;

    return 0;
}
