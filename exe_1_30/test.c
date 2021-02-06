#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<assert.h>
void print_arr(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(arr + i));
	}
}
void move1(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2)
		{
			int tmp = i;
			while (tmp && !(arr[tmp - 1] % 2))
			{
				int t = arr[tmp];
				arr[tmp] = arr[tmp - 1];
				arr[tmp - 1] = t;
				tmp--;
			}
		}
	}
}
void move2(int* arr, int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		while (left < right && arr[left] % 2)
		{
			left++;
		}
		while (left < right && !(arr[right] % 2))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void left_move1(char* arr, int len, int n)
{
	assert(arr);
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = i; j < len - n + i; j++)
		{
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
}
void left_move2(char* arr, int len, int n)
{
	assert(arr);
	for (int i = 0; i < n; i++)
	{
		char tmp = arr[0];
		for (int j = 1; j < len; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[len - 1] = tmp;
	}
}
void reverse(char* arr, int len)//字符串逆序
{
	assert(arr);
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
//三步翻转法
void left_move3(char* arr, int len, int n)
{
	assert(arr);
	reverse(arr, n);
	reverse(arr + n, len - n);
	reverse(arr, len);
}
int main()
{
	char arr[] = "abcdef";
	left_move3(arr, strlen(arr), 1);
	printf("%s", arr);

	
	//int arr[] = { 0, 1, 2, 3, -4, -5, 6, 7, 8, 9 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//move2(arr, len);
	//for (int i = 0; i < len; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//int money = 0;
	//scanf("%d", &money);
	//int total = money;
	//int empty = total;
	//while (empty > 1)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	//printf("%d\n", total);
	//for (int i = 1; i <= 10000; i++)
	//{
	//	int count = 1;
	//	for (int j = 1; i / (int)pow(10, j); j++)
	//	{
	//		count++;
	//	}
	//	int sum = 0;
	//	int num = i;
	//	for (int j = 0; j < count; j++)
	//	{
	//		sum += (int)pow(num % 10, count);
	//		num /= 10;
	//	}
	//	if (i == sum)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//int a = 0;
	//int n = 0;
	//scanf("%d%d", &a, &n);
	//int sum = 0;
	//int ret = 0;
	//for (int i = 0; i < n; i++)
	//{
	//	ret = ret * 10 + a;
	//	sum += ret;
	//}
	//printf("%d\n", sum);
	//int arr[] = { 1,2,3,4,5,6 };
	//print_arr(arr, sizeof(arr) / sizeof(arr[0]));
	//return 0;
}