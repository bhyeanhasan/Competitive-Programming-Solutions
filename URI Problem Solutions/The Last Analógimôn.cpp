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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    int a,b,c,d,n,t,count=0,sum=0,s=0,result,x1,x2,y1,y2;

    while(cin>>a>>b)
    {


    int arr[a][b];

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                x1=i;
                y1=j;
            }
            else if(arr[i][j]==2)
            {
                x2=i;
                y2=j;
            }
        }
    }

    cout<<abs(x2-x1)+abs(y2-y1)<<endl;
    }


    return 0;
}

