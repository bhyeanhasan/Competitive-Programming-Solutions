#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    char  n1[200],n2[200],r[200];
    cin>>n1>>n2;
    int l = strlen(n1);

    for(i=0;i<l;i++)
    {
        if(n1[i]=='1' && n2[i]=='1')
            r[i]='0';
        else if(n1[i]=='0' && n2[i]=='0')
            r[i]='0';
        else
            r[i]='1';
    }
     for(i=0;i<l;i++)
    {
        cout<<r[i];
    }

    return 0;
}
