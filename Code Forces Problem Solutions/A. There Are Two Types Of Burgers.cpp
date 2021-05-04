#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {

        int r,g,m,gd,md,s=0;
        cin>>r>>g>>m>>gd>>md;
        r=r/2;

        if(gd>md)
        {
            if(r>=g)
            {
                s+=g*gd;
                r=r-g;
                if(r>=m)
                {
                    s+=m*md;
                }
                else
                    s+=r*md;
            }
            else
                s+=r*gd;
        }

        else
        {
            if(r>=m)
            {
                s+=m*md;
                r=r-m;
                if(r>=g)
                {
                    s+=g*gd;
                }
                else
                    s+=r*gd;
            }
            else
                s+=r*md;
        }



        cout<<s<<endl;







    }
}
