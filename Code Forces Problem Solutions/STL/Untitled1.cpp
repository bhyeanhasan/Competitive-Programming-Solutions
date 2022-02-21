#include<bits/stdc++.h>
using namespace std;

void reverseWords(string s)
{
    string ss = s;
    string a;
    vector<string> v;

    int x =ss.find(' ');

    while(x!=-1)
    {
        a = ss.substr(0,x);
        ss = ss.substr(x+1);
        x = ss.find(' ');
        cout<<a<<" + "<<ss<<endl;
    }
}

int main()
{

    string s = "first second third fourth fifth";
    reverseWords(s);
}
