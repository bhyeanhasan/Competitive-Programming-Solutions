#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,num;

    cin>>n>>num;

    vector<int> v1,v2;

    for(int i=1;i<=n;i++)
    {
        if(i%2 != 0)
        {
            v1.push_back(i);
        }
        else

        {
            v2.push_back(i);
        }
    }
    v1.insert(v1.end(),v2.begin(),v2.end());

    cout<<v1[num-1];

    return 0;
}
