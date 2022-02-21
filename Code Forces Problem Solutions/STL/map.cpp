#include<bits/stdc++.h>
using namespace std;

void show(map<int,int> mp)
{
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

//        map<int,int> ::iterator it;
//
//    for(it = mp.begin(); it != mp.end(); it++)
//    {
//        cout<<it->first<<" "<<it->second<<endl;
//    }
}

int main()
{
    map<int,int> mp;

    mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;
    mp[4] = 40;
    mp[5] = 50;

    mp.insert(pair<int,int> (100,1));
    mp.insert(pair<int,int> (200,2));
    mp.insert(pair<int,int> (300,3));
    mp.insert(pair<int,int> (500,5));
    mp.insert(pair<int,int> (400,4));

    show(mp);

    mp.erase(mp.begin(),mp.find(3));
    mp.erase(400);

    show(mp);
}
