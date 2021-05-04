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
    int s,a,b,d;
    while(cin>>s>>a>>b)
    {
        if(a<=b)
            cout<<"impossivel"<<endl;
        else
        {

                        d=a-b;
                        float x=s*1.00/d;
                        printf("%0.2f\n",x);

        }


    }
    return 0;
}
