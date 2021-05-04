#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n,frag=0;
    cin>>n;
    int p,q,num;
    vector<int> v;

    cin>>p;
    for(int i=0;i<p;i++)
        {
            cin>>num;
            v.push_back(num);
        }

    cin>>q;
    for(int i=0;i<q;i++)
         {
            cin>>num;
            v.push_back(num);
        }

    for (int j=1;j<=n;j++){

        for (int i = 0; i < v.size(); ++i)
        {
            if(j==v[i])
            {
                frag=1;
            }
        }
        if(frag==0)
        {
            frag=420;
            break;
        }
        else
        {
            frag=0;
        }
    }
    if(frag==0)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
