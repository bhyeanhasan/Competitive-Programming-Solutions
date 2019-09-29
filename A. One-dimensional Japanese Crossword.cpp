#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,sm=0;
    cin>>n;

    vector<int> v;

    string s;

    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            count++;
        }
        else
        {
            if(count>0){
            v.push_back(count);
            }
            count=0;
        }
    }

if(s[n-1]=='B')
   cout<<v.size()+1<<endl;
   else
    cout<<v.size()<<endl;

   for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    if(count>0)
   cout<<count;
}
