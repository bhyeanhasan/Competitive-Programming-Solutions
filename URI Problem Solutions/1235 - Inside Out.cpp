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
    string s;
    int n;
    int i,m,l;
    cin>>n;

    for(long int j=0;j<=n;j++){


    getline(cin,s);
    if(j == 0)

            continue;

    l=s.size();
    m=l/2;

    for(i=m-1;i>=0;i--)
    {
        cout<<s[i];
    }

    for(i=l-1;i>=m;i--)
    {
        cout<<s[i];
    }
    cout<<endl;


    }

    return 0;
}
