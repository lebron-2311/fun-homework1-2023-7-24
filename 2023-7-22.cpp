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

/*ʵ��һ�������������������������ݡ�*/
//
// /*��ֵ����*/
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
//	printf("����ǰ��num1 = %d num2 = %d\n", num1, num2);
//
//	//ʵ�ʲ���
//	Swap1(num1, num2);
//	//�������õ�ʱ�򣬽�ʵ�δ��ݸ��β�
//	//�β���ʵ��ʵ�ε�һ����ʱ����
//	//���βε��޸ģ�����ı�ʵ��
//
//	printf("������num1 = %d num2 = %d\n", num1, num2);
//
//	return 0;
//}
/*��ַ����*/
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
//	printf("������������:");
//
//	scanf("%d %d", &x1, &x2);
//
//	swap(&x1, &x2);
//
//	printf("�����Ժ��������ģ�%d,%d", x1, x2);
//
//	return 0;
//
//}
///*ʵ�ֺ����ж�year�ǲ������ꡣ*/
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
//	printf("������ݣ�");
//	int year = 0;
//	scanf("%d", &year);
//	if (isrunyear(year)==1)
//		printf("%d������!\n", year);
//	else
//		printf("%d��������\n", year);
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
//	printf("������һ����ݣ�\n");
//	scanf("%d", &year);
//
//	int ret = Leap(year);
//	if (ret == 1) {
//		printf("%d�����꣡\n", year);
//	}
//	else
//	{
//		printf("%d�������꣡\n", year);
//	}
//
//	return 0;
//}
#include<stdio.h>
#include<math.h>
bool is_prime(int n)
{
	//��2~sqrt(n)֮�������Գ�
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return false;
	}
	return true;//������
}

int main()
{
	//��ӡ100~200֮�������
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		//�ж�i�Ƿ���������
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

