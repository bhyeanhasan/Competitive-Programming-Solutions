/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
*/


#include<bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int t;
    string s;

    cin>>t;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for(int h=0;h<t;h++)
        {



        getline(cin,s);

        int l= s.length();

        for(int i=0;i<l;i++)
        {
            if(isalpha(s[i]))
            s[i]+=3;
        }


        reverse(s.begin(),s.end());

        for(int i=l/2; i<l;i++)
            s[i]-=1;

        cout<<s<<endl;
    }



    return 0;
}
