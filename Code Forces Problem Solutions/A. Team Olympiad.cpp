#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    int count1=0,count2=0,count3=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<int> v1,v2,v3;

    for(i=0;i<n;i++)
    {
        if(arr[i]==1){
            count1++;
            v1.push_back(i);

        }
        else if(arr[i]==2)
        {
            count2++;
            v2.push_back(i);
        }
        else if(arr[i]==3){
            count3++;
            v3.push_back(i);
        }

    }
    int res=min(count1,min(count2,count3));
    cout<<res<<endl;

    if(res==0)
        return 0;

    for(i=0;i<res;i++)
    {
        cout<<v1[i]+1<<" "<<v2[i]+1<<" "<<v3[i]+1<<endl;
    }


}
