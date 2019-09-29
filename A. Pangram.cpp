#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l;
    cin>>l;

    char s[200];
    cin>>s;

    vector<bool> v(26,false);
    int n,frag=0;



    if(l<25)
    {
        cout<<"NO";
    }
    else
    {


    for(int i=0;i<l;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            n=s[i]-'A';
        }
        else if(s[i]>='a' && s[i] <='z')
        {
            n=s[i]-'a';
        }
        v[n] = true;
    }

    for(int i=0;i<26;i++)
    {
        if (v[i]==false){
            frag=1;
            break;
        }
    }

    if(frag==1)
    {
        cout<<"NO";
    }
    else
        cout<<"YES";


    }
    return 0;
}
