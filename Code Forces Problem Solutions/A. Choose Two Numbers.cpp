#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];

    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    sort(arr1,arr1+n1);

    int n2;
    cin>>n2;
    int arr2[n2];

    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    sort(arr2,arr2+n2);

    cout<<arr1[n1-1]<<" "<<arr2[n2-1]<<endl;


    return 0;
}
