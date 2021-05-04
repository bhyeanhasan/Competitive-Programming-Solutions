/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int l1,l2,ls=0,lb=0;
    cin>>s1;
    cin>>s2;
    l1=s1.length();
    l2=s2.length();

    for(int i=0;i<l1;i++)
    {
        ls+=s1[i];
    }
    for(int i=0;i<l1;i++)
    {
        lb+=s2[i];
    }
    if(s1<s2)
    {
       cout<<s1<<endl;
        cout<<s2<<endl;
    }
    else
    {
        cout<<s2<<endl;
        cout<<s1<<endl;
    }


    return 0;
}
