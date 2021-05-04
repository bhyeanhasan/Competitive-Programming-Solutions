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
    string  s;

    int l,i,m=0;

    while(getline(cin,s))
    {
        m=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i] != ' ')
            {
                if(m==0){
                    s[i]=toupper(s[i]);
                    m=1-m;
                }
                else{
                    s[i]=tolower(s[i]);
                    m=1-m;
                }


            }


        }

        cout<<s<<endl;
    }

    return 0;
}
