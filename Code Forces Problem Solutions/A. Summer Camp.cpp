#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int x;
    string s;
    cin>>x;


    for(int i=1;i<=x;i++)
    {
        string str= to_string(i);
        s+=str;
    }

    cout<<s[x-1]<<endl;
}
