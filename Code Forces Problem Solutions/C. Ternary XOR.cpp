#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n,l;
    string s;
    bool found=false;

    cin>> l;
    while(l--)
    {
        cin>>n;
        cin>>s;

        vector<char> v1,v2;

        int c;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                v1.push_back('0');
                v2.push_back('0');
            }
            else if(s[i]=='1')
            {

                v1.push_back('1');
                v2.push_back('0');

                found = true;
                c=i+1;

                break;

            }
            else
            {
                v1.push_back('1');
                v2.push_back('1');
            }
        }

        if(found = true)
        {
            for(int i=c;i<n;i++)
            {
                v1.push_back('0');
                v2.push_back(s[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v1[i];
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<v2[i];
        }
        cout<<endl;

    }
    return 0;
}
