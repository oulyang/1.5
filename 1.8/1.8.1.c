#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//��ѭ�� -1��Ĳ���Ϊȫ1���޷���ʱ�ܴ�
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
//	//-1 -2 -3....-128 127 126....3 2 1 0 -1...��0��ֹ
//	printf("%d", strlen(a));//��ӡ255
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
//	//double d = 1E10;//��ѧ������
//	//printf("%lf", d);
//	int n = 9;
//	float* pf = (float*)&n;
//	printf("n��ֵ %d\n", n);
//	printf("*pf��ֵ%f\n", *pf);
//
//	*pf = 9.0;
//	//1001.0
//	//�����ʹ洢����
//	//(-1)^0*1.001*2^3
//	//(-1)^S*M*2^E   S=0��0����1��,M=1.001(���ڵ���1��С��2),E=3(�޷�����)
//	//S 1bit           1bit
//	//E 8bit           11bit
//	//M 23bit          52bit
//	printf("n��ֵ%d\n", n);
//	printf("*pf��ֵ%f\n", *pf);
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
//	char* p = "abcdef";//''abcdef'�ǳ����ַ�������ʵ�ǰ�a�ĵ�ַ��p��
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//��� hehe
//	if (p1 == p2)
//{
//	printf("hehe\n");
//}
//else
//{
//	printf("haha\n");
//}
//	//���haha
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
//	////int * p1[10]       ָ������p1
//	//int(*p2)[10] = &arr;//����ָ��p2
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
//void print2(int(*pa)[5], int x, int y)//int [5]�ṹ
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(pa + i) + j));//*(pa+i)һ�е�������  
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

//ע���

//int arr[5]
//// arr��һ�����飬��5��Ԫ�أ�ÿ��Ԫ������Ϊint
//int *parr1[5]
////parr1��һ�����飬��5��Ԫ�أ�ÿ��Ԫ������Ϊ int*,��parr1Ϊָ������
//int (*parr2)[5]
////parr2��һ��ָ�룬��ָ��ָ��һ�����飬������5��Ԫ�أ�ÿ��Ԫ��������int
//int (*(parr3[10]))[5]
////parr3��һ�����飬������10��Ԫ�أ�ÿ��Ԫ��������ָ�룬����ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ��������int
