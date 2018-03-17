#include <stdio.h>
int a,b,gcd,lcm;
int GCD(int x,int y)
{
	while (x!=y) 
		if (x>y) x=x-y;
		else y=y-x;
	return(x);
}
void main()
{
	int GCD(int x,int y);
	printf("Please input two positive integers a,b.\n");
	scanf("%d,%d",&a,&b);
    gcd=GCD(a,b);
	lcm=a*b/gcd;
	printf("The GCD of a and b is %d.\n",gcd);
	printf("The LCM of a and b is %d.\n",lcm);
}