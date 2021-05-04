/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,x;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        l=s.length();

        if(l==20 && s[0]=='R' && s[1]=='A')
        {
            for(int i=2;i<20;i++)
            {
                if(s[i]!='0')
                {
                    x=i;

                    break;
                }
            }
            for(int i=x;i<20;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
            x=0;
        }
        else
            cout<<"INVALID DATA"<<endl;
    }
    return 0;
}
