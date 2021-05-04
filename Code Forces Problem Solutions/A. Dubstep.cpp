#include<bits/stdc++.h>
using namespace std;

int main()
{
    char line[201];
    cin>>line;
    int frag=0;
    for (int i=0;i<strlen(line);i++)
    {
        if(line[i]=='W' && line[i+1]=='U' && line[i+2]=='B')
        {
            if(frag==1)
            {
                cout<<" ";
                frag=0;
            }
            i+=2;

        }

        else{
            cout<<line[i];
            frag=1;
        }
    }
    return 0;
}
