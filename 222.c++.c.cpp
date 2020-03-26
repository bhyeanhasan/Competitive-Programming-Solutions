#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
long long int x=1;
string s;
int i,j;
cin>>s;


    for(i=0;i<s.size();i++)
    {
        j = s[i]-'0';
        if(i==0)
        {
            if(j>4 &&j<9){
            j=9-j;
            s[i] =j+'0';
            }
        }
        else if(j>4)
        {
            j=9-j;
            s[i] =j+'0';
        }

    }
    cout<<s<<endl;
}

