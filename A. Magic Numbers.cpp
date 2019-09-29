#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int i,len,frag;
    string str;

    cin>>str;
    len= str.length();
    frag=0;

    for(i=0;i<len;i++)
    {
        if(str[i]=='1' && str[i+1]=='4' && str[i+2]=='4')
            i+=2;
        else if(str[i]=='1' && str[i+1]=='4')
            i++;
        else if(str[i]=='1')
            continue;
        else
        {
            frag=1;
            break;
        }

    }
    if(frag==1)
        cout<<"NO"<<endl;
    else if(frag==0)
        cout<<"YES"<<endl;
    return 0;
}
