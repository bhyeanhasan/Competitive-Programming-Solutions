#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    char arr[n][m];
    int x[3],y[3];
    int c=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char u;
            cin>>u;
            arr[i][j]=u;

            if(arr[i][j]=='*')
            {
                x[c]=i;
                y[c]=j;
                c++;
            }
        }
    }

    sort(x,x+3);
    sort(y,y+3);

    int x1,y1;
    if(x[0]!=x[1])
    {
        x1=x[0];
    }
    else
    {
        x1=x[2];
    }



    if(y[0]!=y[1])
    {
        y1=y[0];
    }
    else
    {
        y1=y[2];
    }

    cout<<x1+1<<" "<<y1+1<<endl;

    return 0;
}
