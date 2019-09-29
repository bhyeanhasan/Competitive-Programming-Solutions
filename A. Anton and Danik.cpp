#include<bits/stdc++.h>
using namespace std;
int main()
{



       int n,a=0,d=0;

       string s;
       cin>>n;
       cin>>s;

       for (int i = 0; i < n; i++) {

           if(s[i]=='D')
               d++;
            else if(s[i]=='A')
                a++;

       }

        if(d<a)
           cout<<"Anton"<<endl;
        else if(d>a)
            cout<<"Danik"<<endl;
        else
            cout<<"Friendship"<<endl;



}
