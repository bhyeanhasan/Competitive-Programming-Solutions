<<<<<<< Updated upstream
Law:
	(num1 * num2) = gcd(num1,num2) * lcm(num1,num2);
Template:
	__gcd( num1, num2);
Other :
	Int gcd(int a, int b)
	{
		If(a==b)
		{
			Return

Other:
	mx  = max( num1,num2);
	while(1)
	{
		If(mx% num1 = =0 && mx%num2==0)
		{
			Lcm =mx;
			Break;
		}
		else
		{
			mx++;
}
=======
/* Md. Babul Hasan */
#include<stdio.h>
int mystery(int p, int q){
     int r;
     if ((r = p % q) == 0)
          return q;
     else return mystery(q, r);
}

int main()
{
     int a[10] = {1,2,3,4,5,6,7,8,9,10}, i = 6 ;
int *p = &a[0];
printf("%d\n", *(p + i));
>>>>>>> Stashed changes
}
