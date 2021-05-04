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
    long long int n,x,y,frag=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;

        while(y != 0)
        {
            if(x%10 !=y%10)
            {
                frag=1;
                break;
            }
            x=x/10;
            y=y/10;

        }
        if(frag==1)
        cout<<"nao encaixa"<<endl;
        else
        cout<<"encaixa"<<endl;
        frag=0;

    }
    return 0;
}
