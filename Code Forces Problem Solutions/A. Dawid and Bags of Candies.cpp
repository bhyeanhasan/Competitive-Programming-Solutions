/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/



#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a[4],b,c,d,count=0,sum=0,s=0,result;

    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    double x=(a[0]+a[1]+a[2]+a[3])*1.00/2;
    d=x;
    if(x>d){
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {

        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<4;j++)
            {
                if(a[i]+a[j]==d || a[0]+a[1]+a[2]==a[3])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }


    }
    cout<<"NO"<<endl;


    return 0;
}

