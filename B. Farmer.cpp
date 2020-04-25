
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,t,count=0,sum=0,result,i,j,k;

    cin>>t;

    for(j=0;j<t;j++)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4,ok;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4>>ok;

        double area = (double)((x1*y2)-(y1*x2))+((x2*y3)-(x3*y2))+((x3*y4)-(x4*y3))+((x4*y1)-(y4*x1));
        area =(double)abs(area)/2;
        area = ok*1.00/area;

        cout<<"Case #"<<j+1<<": ";
        printf("%.2f\n", area);
    }

    return 0;
}


