#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;


    int n,x,c=0,l;
    cin>>n>>x;

    int arr[200];

    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }

    set<int> s(v.begin(),v.end());
    set<int> :: iterator m;

    l=s.size();
    //cout<<"\t"<<l<<endl;

    if(x>l)
        cout<<"NO"<<endl;

    else
    {
        cout<<"YES"<<endl;
        for(m=s.begin();m!=s.end();m++)
        {

            arr[c]=*m;
            c++;

            if(c==x)
                break;
        }


        for(int i=x-1;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]==v[j]){
                    cout<<j+1<<" ";
                    break;
                }

            }
        }
    }

}
