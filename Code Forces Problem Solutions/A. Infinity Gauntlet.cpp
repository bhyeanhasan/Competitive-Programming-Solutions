#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, string> m;
    map<string, string> :: iterator i;

    m.insert(pair<string,string>("purple","Power"));
    m.insert(pair<string,string>("green","Time"));
    m.insert(pair<string,string>("blue","Space"));
    m.insert(pair<string,string>("orange","Soul"));
    m.insert(pair<string,string>("red","Reality"));
    m.insert(pair<string,string>("yellow","Mind"));

    int t,c=0;
    cin>>t;

    vector<string> v;

    for(int j=0;j<t;j++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }

    sort(v.begin(),v.end());



    for(int j=0;j<v.size();j++)
    {
       i=m.find(v[j]);
       m.erase(i);
    }
    cout<<6-t<<endl;
    for(i=m.begin();i!=m.end();i++)
        cout<<i->second<<endl;
    return 0;
}
