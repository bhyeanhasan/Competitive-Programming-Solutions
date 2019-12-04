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

    int t;
    cin>>t;

    while(t--)
    {
        int x,got=0;
        cin>>x;
        string s;
        cin>>s;



            for(int i=0;i<x;i++)
            {
                if(s[i]=='8')
                {

                    got=i+1;
                    break;
                }
            }


        if(got==0)
            cout<<"No"<<endl;
        else if((x-got)>=10)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;


    }
    return 0;
}
