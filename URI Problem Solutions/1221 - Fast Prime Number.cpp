/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n,x,j,frag=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==0)
            cout<<"Not Prime"<<endl;
        else if(x==1)
            cout<<"Not Prime"<<endl;
        else if(x==2)
            cout<<"Prime"<<endl;

        else
        {
            for(j=2;j<sqrt(x)+1;j++)
            {
                if(x%j==0)
                {
                frag=1;
                break;
                }
            }
            if(frag==1)
            cout<<"Not Prime"<<endl;
        else
            cout<<"Prime"<<endl;
            frag=0;
        }


    }
}
