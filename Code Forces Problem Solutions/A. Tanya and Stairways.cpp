#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<int> v;
    vector<int> :: iterator i;


    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            c++;

    }
     for(int i=0;i<n-1;i++)
     {
         if(arr[i]>=arr[i+1])
            v.push_back(arr[i]);
     }

     v.push_back(arr[n-1]);
    cout<<c<<endl;

    for(i=v.begin();i !=v.end();i++)
        cout<<*i<<" ";
    return 0;
}
