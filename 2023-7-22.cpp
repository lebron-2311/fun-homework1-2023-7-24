#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%2d  ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*实现一个函数来交换两个整数的内容。*/
//
// /*传值调用*/
//#include<stdio.h>
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	printf("交换前：num1 = %d num2 = %d\n", num1, num2);
//
//	//实际参数
//	Swap1(num1, num2);
//	//函数调用的时候，将实参传递给形参
//	//形参其实是实参的一份临时拷贝
//	//对形参的修改，不会改变实参
//
//	printf("交换后：num1 = %d num2 = %d\n", num1, num2);
//
//	return 0;
//}
/*传址调用*/
#include<stdio.h>

//void swap(int* p1, int* p2)
//
//{
//
//	int tmp = 0;
//
//	tmp = *p1;
//
//	*p1 = *p2;
//
//	*p2 = tmp;
//
//
//
//}
//
//int main()
//
//{
//
//	int x1 = 0, x2 = 0;
//
//	printf("请输入两个数:");
//
//	scanf("%d %d", &x1, &x2);
//
//	swap(&x1, &x2);
//
//	printf("交换以后是这样的：%d,%d", x1, x2);
//
//	return 0;
//
//}
///*实现函数判断year是不是润年。*/
//#include<stdio.h>
//int isrunyear(int year)
//{
//
//	if((year % 4 == 0) && (year % 100 != 0)||(year%400==0))
//	{
//		return 1;
//     }
//	return 0;
//}
//int main()
//{
//	printf("输入年份：");
//	int year = 0;
//	scanf("%d", &year);
//	if (isrunyear(year)==1)
//		printf("%d是闰年!\n", year);
//	else
//		printf("%d不是闰年\n", year);
//	return 0;
//}
//#include <stdio.h>								
//int Leap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	int year;
//	printf("请输入一个年份：\n");
//	scanf("%d", &year);
//
//	int ret = Leap(year);
//	if (ret == 1) {
//		printf("%d是闰年！\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年！\n", year);
//	}
//
//	return 0;
//}
#include<stdio.h>
#include<math.h>
bool is_prime(int n)
{
	//拿2~sqrt(n)之间数字试除
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return false;
	}
	return true;//是素数
}

int main()
{
	//打印100~200之间的素数
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		//判断i是否是素数？
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

