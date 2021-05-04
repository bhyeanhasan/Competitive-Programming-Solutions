/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin>>t)
    {




    double x[t];

    for(int i=0;i<t;i++)
        cin>>x[i];


    cout<<*std::min_element(x, x + t)<<endl;
    }

    return 0;
}

