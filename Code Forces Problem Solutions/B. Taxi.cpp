#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,n3=0,n4=0,n2=0,n1=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)
        n1++;

        if(arr[i]==2)
        n2++;

        if(arr[i]==3)
        n3++;

        if(arr[i]==4)
        n4++;
    }


    sort(arr,arr+n);

    if(n3>=n1){
    n1=0;
    }
    else
    {
        n1=n1-n3;
    }

    if(n2%2==0)
        n2=n2/2;
    else{
        n2=(n2/2)+1;

        if(n1>0)
            n1=n1-2;
    }
if(n1>0){
    float x=n1*1.00/4;
    int y=x;
    //cout<<"x "<<x<<" Y "<<y<<" n1 "<<n1<<endl;
    if(x>y)
        y=y+1;
    n1=y;
}
else
    n1=0;


    n4=n4+n3+n2+n1;

    cout<<n4<<endl;



    return 0;
}
