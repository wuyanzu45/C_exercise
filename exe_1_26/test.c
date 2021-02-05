#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = -1;
	while (count++, *str++)
	{
		;
	}
	return count;
}

int binary_search(const int* arr, const int dst)
{
	static int left = 0;
	static int right = 9;
	static int mid = 0;
	if (left <= right)
	{
		mid = (left + right) / 2;
		if (dst == arr[mid])
			return mid;
		else if (dst < arr[mid])
		{
			right = mid - 1;
			return binary_search(arr, dst);
		}
		else
		{
			left = mid + 1;
			return binary_search(arr, dst);
		}
	}
}
int main()
{
	int arr[] = {  1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	int ret = 0;
	int len = 0;
	len = sizeof(arr) / sizeof(arr[0]);
	ret = binary_search(arr, 3, len);
	printf("该数下标为%d\n", ret);
	//printf("%d\n", 128.0);
	//int n = 9;
	//float* p = (float*)&n;
	//printf("%d\n", n);
	//printf("%f\n", n);
	//*p = 9.0;
	//printf("%d\n", *p);
	//printf("%f\n", (float)n);

	//char i;
	//for (i = 0; i <= 127; i++)
	//{
	//	printf("hehe\n");
	//}
	//char a = 127;
	//printf("%d\n", ++a);
	//char arr[] = "";
	//printf("%d\n", my_strlen(arr));
	//return 0;
}