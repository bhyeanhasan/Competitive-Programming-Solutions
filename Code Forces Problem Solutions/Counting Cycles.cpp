#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,i=0;
    while(1)
    {
        cin>>n;
        if(n==-1)
            break;
        r=n/2;
        i++;
        printf("Experiment %d: %d full cycle(s)\n",i,r);
    }
    return 0;
}
