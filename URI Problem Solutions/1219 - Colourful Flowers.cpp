/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
using namespace std;
#define pi  3.1415926535897
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        double p=(a+b+c)*1.00/2;
        double s=sqrt(p*(p-a)*(p-b)*(p-c));
        double r=(2*s)/(a+b+c);
        double R=pi*r*r;
        double e=(a*b*c)/(4*s);
        double v=pi*e*e;


        printf("%.4lf %.4lf %.4lf\n",v-s,s-R,R);


    }

    return 0;
}
