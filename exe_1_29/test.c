#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void len(int(*parr)[10])
{
	printf("%d\n", sizeof(*parr));
}
int main()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6 };
	int(*parr)[10] = &arr;
	printf("%d\n", sizeof(*parr));
	len(parr);
	//int arr1[] = { 1,2,3,4,5,6 };
	//int arr2[] = { 2,3,4,5,6,7 };
	//int arr3[] = { 3,4,5,6,7,8 };
	//int* parr[] = { arr1, arr2, arr3 };
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 6; j++)
	//	{
	//		printf("%d ", parr[i][j]);
	//	}
	//	printf("\n");
	//}
	//char arr[] = "abcdef";
	//char* ps1 = arr;
	//char* ps2 = "abcdef";
	//printf("%s\n", arr);
	//printf("%s\n", ps1);
	//printf("%s\n", ps2);
	return 0;
}