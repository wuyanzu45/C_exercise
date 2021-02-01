#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void print(unsigned n)
{
	if (n / 10 > 0)
	{
		print(n / 10);
	}
	printf("%d  ", n % 10);
}
int my_strlen_1(char arr[])
{
	static int len = -1;
	if (arr[++len])
		my_strlen_1(arr);
	return len;
}
int my_strlen_2(char* str)
{
	if (*str)
		return 1 + my_strlen_2(++str);
	else
		return 0;
}
long long Fac(int n)
{
	if (n > 1)
		return n * Fac(n - 1);
	else
		return 1;
}
long long Fib_1(int n)//�ݹ�Ч�ʵ�
{
	if (n > 2)
		return Fib_1(n - 1) + Fib_1(n - 2);
	else
		return 1;
}
long long Fib_2(int n)
{
	if (n < 3)
		return 1;
	long long F1 = 1, F2 = 1, F3;
	for (int i = 3; i <= n; i++)
	{
		F3 = F1 + F2;
		F1 = F2;
		F2 = F3;
	}
	return F3;
}
//��ŵ��ʼĩ�����
void han_move(char* p1, char* p2)
{
	switch (*p1)
	{
	case 'a':
		switch (*p2)
		{
		case 'b':
			*p2 = 'c';
			break;
		case 'c':
			*p2 = 'b';
			break;
		}
		break;
	case 'b':
		switch (*p2)
		{
		case 'a':
			*p2 = 'c';
			break;
		case 'c':
			*p2 = 'a';
			break;
		}
		break;
	case 'c':
		switch (*p2)
		{
		case 'a':
			*p2 = 'b';
			break;
		case 'b':
			*p2 = 'a';
			break;
		}
		break;
	}
}
//��ŵ��
//��p1Ųn�㵽p2
void Hanoi(int n, char p1, char p2)
{
	static int count = 0;
	if (n > 1)
	{
		han_move(&p1, &p2);
		Hanoi(n - 1, p1 ,p2);
		han_move(&p1, &p2);
		printf("%2d.��%c���ϵ�Բ��Ų��%c��\n",++count, p1, p2);
		han_move(&p2, &p1);
		Hanoi(n - 1, p1, p2);
	}
	else
		printf("%2d.��%c���ϵ�Բ��Ų��%c��\n",++count, p1, p2);
}

//��ŵ����Ч�� 
void Hanoi2(int n, char a, char b, char c)
{
	if (n > 0)
	{
		Hanoi2(n - 1, a, c, b);
		printf("moving from %c to %c\n", a, c);
		Hanoi2(n - 1, b, a, c);
	}
}
//����ð������ѭ���������Ż���
void bubble_sort_1(int* arr, int len)
{
	int count = 0;//����Ƚϴ���
	int max;
	for (int i = len - 1; i > 0; i = max - 1)
	{
		max = 1;
		for (int j = 0; j < i; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				int tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
				max = j + 1;
			}
			count++;
		}
	}
	printf("%d\n", count);
}
//����ð�����򣨵ݹ飩
void bubble_sort_2(int* arr, int len)
{
	for (int i = 0; i < len-1; i++)
	{
		if (*(arr + i) > *(arr + i + 1))
		{
			int tmp = *(arr + i);
			*(arr + i) = *(arr + i + 1);
			*(arr + i + 1) = tmp;
		}
	}
	if (--len > 1)
		bubble_sort_2(arr, len);
}
void bubble_sort_3(int* arr, int len)
{
	static int i = 0;
	if (++i < len)
	{
		int tmp = *arr;
		*arr = *(arr + 1);
		*(arr + 1) = tmp;
		if (len > 2)
			bubble_sort_3(arr + 1, len);
	}
	if (--len > 1)
	{
		i = 0;
		bubble_sort_3(arr, len);
	}
}
int main()
{
	//printf("the first way:\n");
	//Hanoi(3, 'a', 'c');
	//printf("the second way:\n");
	//Hanoi2(3, 'a', 'b', 'c');

	int arr[] = { 1, 0, 2, 3, 4, 5, 6, 7, 8, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble_sort_1(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	////char arr[3] = "abc";
	//printf("%s\n", arr);
	//int n;
	//printf("������һ��������");
	//scanf("%d", &n);
	//Hanoi(n, 'a', 'c');
	//printf("��%d��쳲�������Ϊ��%lld\n", n, Fib_2(n));
	//printf("��%d��쳲�������Ϊ��%lld\n", n, Fib_1(n));
	//printf("�����Ľ׳�Ϊ��%lld\n", Fac(n));
	//printf("%d", sizeof(long long));
	//char arr[] = "hello world!";
	//int len = my_strlen_2(arr);
	//printf("�ַ�������Ϊ��%d\n", len);
	//unsigned num;
	//scanf("%u", &num);
	//print(num);
	return 0;
}