/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,m,l;
    double lg;
    while(t--)
    {
        scanf("%d %d",&n,&m);
        lg=log10(n);
        lg=lg*m;
        l=lg;
        printf("%d\n",l+1);
    }
}
