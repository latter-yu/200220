#include <stdio.h>
int main()
{
	printf("hello kid\n");
	return 0;
}


#include <stdio.h>
int main()
{
	printf("%d\n", sizeof(long double));
	return 0;


#include <stdio.h>
int main()
{
	int num1=10;
	int num2=20;
	scanf("%d %d", &num1 &num2);
	printf(%d\n)
	int sum = 0;
	sum = num1 + num2;
	printf("sum=%d\n", sum);
		return 0;
}


#include <stdio.h>
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a+ b + c);
}
int main()

{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d, ", sum(a));
	}
}
int get_max(int x, int y)
{
	int z;
	z = x > y ? x:y;
	return z;

}
int main()
{
	int num1 = 10;
	int num2 = 20;
	//要求：完成get_max函数
	int max = get_max(num1, num2);
	int get_max(int x, int y)
	
int get_max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;

}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个数字:>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}
