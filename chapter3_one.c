#include<stdio.h>
int main()
{
//测试1
/*	char c=255;
	printf("%c\n",c);    //该系统不能处理128~255之间的字符*/
//测试2
/*	double a,b,c,disc,x1,x2,p,q;
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("%7.2f\n%7.2f\n%7.2f\n",a,b,c);*/
//测试3
//	printf("%s","china");
	double a=10000;
	printf("%f",a/3);   //实数中整数部分全部输出，小数部分输出六位
	return 0;

/*	double a=100;
	printf("%55.50f",a/3); //一个双精度只能保证15位有效数字的精确度*/
    
}