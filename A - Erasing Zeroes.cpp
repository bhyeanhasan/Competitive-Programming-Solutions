#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    int x=-1,y=-1;
    int count=0;
    int m=0;

    cin>>t;

    while(t--)
    {
        cin>>s;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                count++;
        }


        if(count<2){
            cout<<0<<endl;
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='1'){
                    x=i;
                    break;
                }

            }
            for(int i=s.size();i>=0;i--)
            {
                if(s[i]=='1')
                {
                    y=i;
                    break;
                }
            }



            for(int i=x;i<=y;i++)
            {
                if(s[i]=='0')
                    m++;

            }
            cout<<m<<endl;
            m=0;
            count=0;

        }
    }
}
