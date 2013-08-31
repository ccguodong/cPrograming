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
/*	double a=10000;
	printf("%f",a/3);   //实数中整数部分全部输出，小数部分输出六位
	*/

/*	double a=100;
	printf("%55.50f",a/3); //一个双精度只能保证15位有效数字的精确度*/

//测试4
/*	float a,b,c;
	scanf("a=%fb=%fc=%f",&a,&b,&c);
	printf("%7.2f\n%7.2f\n%7.2f\n",a,b,c);*/

//测试5
/*	char a=88;
	a=getchar();
	putchar(a);
	putchar('\n');*/

//测试6  大写转小写
	char ch1,ch2;
	scanf("%c",&ch1);
	ch2=ch1+32;
	putchar(ch2);


	return 0;
}