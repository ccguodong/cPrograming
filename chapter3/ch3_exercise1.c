#include<stdio.h>
#include<math.h>
int main()
{
	double p;
	double r=0.09;
	double n=10;
	p=pow((1+r),n);
	printf("%f",p);
	return 0;
}