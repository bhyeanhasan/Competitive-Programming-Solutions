#include<stdio.h>

int main()
{
    int n,Max=-1,Min=10000,sum=0,count=0;

    while(scanf("%d",&n))
    {
        if(n>0)
        {
            sum+=n;
            count++;
            if(n>Max)
                Max=n;
            if(n<Min)
                Min=n;
        }
        else if(n<0)
            printf("Please Input a positive num\n");
        else
            break;
    }
    printf("%d\n",count);
    printf("%d\n",Max);
    printf("%d\n",Min);
    printf("%d\n",sum/count);

}
