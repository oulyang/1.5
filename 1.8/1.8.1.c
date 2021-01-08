#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//死循环 -1存的补码为全1，无符号时很大
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3....-128 127 126....3 2 1 0 -1...到0截止
//	printf("%d", strlen(a));//打印255
//	return 0;
//}
//unsigned char i = 0;//255+1=0
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello worle\n");
//	}
//	return 0;
//}
//int main()
//{
//	//double d = 1E10;//科学计数法
//	//printf("%lf", d);
//	int n = 9;
//	float* pf = (float*)&n;
//	printf("n的值 %d\n", n);
//	printf("*pf的值%f\n", *pf);
//
//	*pf = 9.0;
//	//1001.0
//	//浮点型存储规则
//	//(-1)^0*1.001*2^3
//	//(-1)^S*M*2^E   S=0（0或者1）,M=1.001(大于等于1，小于2),E=3(无符号数)
//	//S 1bit           1bit
//	//E 8bit           11bit
//	//M 23bit          52bit
//	printf("n的值%d\n", n);
//	printf("*pf的值%f\n", *pf);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//
//	char arr[] = "abcdef";
//	char* pa = arr;
//
//	char* p = "abcdef";//''abcdef'是常量字符串，其实是把a的地址给p。
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//结果 hehe
//	if (p1 == p2)
//{
//	printf("hehe\n");
//}
//else
//{
//	printf("haha\n");
//}
//	//结果haha
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,7,8,9,0,3 };
//	////int * p1[10]       指针数组p1
//	//int(*p2)[10] = &arr;//数组指针p2
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,89,0 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *pa + i);
//	}
//	return 0;
//}
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*pa)[5], int x, int y)//int [5]结构
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(pa + i) + j));//*(pa+i)一行的数组名  
//								//*(*(pa+i)+j)=(*(pa+i))[j]=arr[j]=*(arr+j)
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,4,5,6},{2,3,4,5,6},{3,3,3,3,3} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//注意点

//int arr[5]
//// arr是一个数组，有5个元素，每个元素类型为int
//int *parr1[5]
////parr1是一个数组，有5个元素，每个元素类型为 int*,故parr1为指针数组
//int (*parr2)[5]
////parr2是一个指针，该指针指向一个数组，数组有5个元素，每个元素类型是int
//int (*(parr3[10]))[5]
////parr3是一个数组，数组有10个元素，每个元素是数组指针，数组指针指向的数组有5个元素，每个元素类型是int
