/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y,arr[3],brr[3],g,i,ok=400;
        cin>>x>>y;

        arr[0]=((3*x)*(3*x))+(y*y);
        brr[0]=arr[0];
        arr[1]=2*(x*x)+(5*y)*(5*y);
        brr[1]=arr[1];
        arr[2]=(-100*x)+(y*y*y);
        brr[2]=arr[2];

        sort(arr,arr+3);

        g=arr[2];

        for(i=0;i<3;i++)
        {
            if(g==brr[i])
            {
                ok=i;
                break;
            }
        }
        if(ok==0)
            cout<<"Rafael ganhou"<<endl;
        else if(ok==1)
            cout<<"Beto ganhou"<<endl;
        else if(ok==2)
            cout<<"Carlos ganhou"<<endl;


    }
    return 0;
}
