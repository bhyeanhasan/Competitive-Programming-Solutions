#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> v;

    while(cin>>n )
    {
        if(n>0)
        v.push_back(n);
        else if(n<0)
            cout<<"Please enter a positive number"<<endl;
        else
            break;
    }

    int Max=-1,Min=-1,sum=0;
    int i=0;
    do{
        if(v[i]>Max)
            Max=v[i];
        if(v[i]<Min)
            Min=v[i];

        sum+=v[i];
        i++;
    }
    while(i<v.size());

    cout<<v.size()<<endl;
    cout<<Max<<endl;
    cout<<Min<<endl;
    cout<<sum/v.size()<<endl;
}
