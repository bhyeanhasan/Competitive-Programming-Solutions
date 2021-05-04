/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    float x,y,m=1.0,temp;


    for(x=0;x<=2.2;x+=.2)
    {
        for(y=1;y<=3;y++)
        {
            i=x/1;
            temp=x-i;
            if(temp==0){
                printf("I=%0.0f J=%0.0f\n",x,m);
            }
            else if(x>2.0){
                 printf("I=%0.0f J=%0.0f\n",x,m);
            }
            else{
                printf("I=%0.1f J=%0.1f\n",x,m);
            }

            m++;
        }
        m-=3;
        m+=.2;
    }

    return 0;
}
