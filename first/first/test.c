#include<stdio.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
long jiecheng(int n)
{
	long jc = 1;
	for (int i = 1; i <= n; i++)
	{
		jc = jc * i;
	}
	return jc;
}
long jiechenghe(int n)
{
	long jch = 0;
	for (int i = 1; i <= n; i++)
	{
		jch = jch + jiecheng(i);
	}
	return jch;
}
void binsearch(int x, int v[])
{
	//int n = sizeof(v);
	//n = (sizeof(v) / sizeof(v[0]));
	int n = 20;
	int left = 0;
	int right = n-1;
	int mid;
	for (int i =1; i <= (log(n)/log(2)); i++)
	{
		mid = (left + right) / 2;
		if (x == v[mid])
		{
			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
			return;
		}
		else if(x > v[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}
	printf("�Ҳ���\n");
}
int Add(int, int );
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int sum;
	sum = Add(a, b);
	printf("%d", sum);
	//int count = 0;
	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 9 || i / 10 == 9)
	//	{
	//		if (i % 10 == 9 && i / 10 == 9)
	//			count++;
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n����Ϊ��%d\n", count);
	//int a, b, c;
	//printf("����������������\n");
	//scanf("%d%d", &a, &b);
	////do	{
	//	a = b;
	//	b = r;
	//	r = a % b;
	//} while (r);
	//printf("���ǵ����Լ��Ϊ��%d", b);

	//for (int i = 1; i <= a && i <= b ||; i++)
	//{
	//	if (a % i == 0 && b % i == 0)
	//		c = i;
	//}
	//printf("���ǵ����Լ��Ϊ��%d", c);
	//char a[] = "welcome to bit!!!!!"; 
	//char b[] = "                   ";
	//int c = strlen(a) - 1;
	//for (int i = 0; i <= c - i; i++)
	//{
	//	Sleep(500);
	//	system("cls");
	//	b[i] = a[i];
	//	b[c - i] = a[c - i];
	//	printf("%s\n", b);
	//}
	//int u[] = { 0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	//binsearch(20, u);
	//int n;
	//printf("������һ��������\n");
	//scanf("%d", &n);
	//long ret=1, sum=0;
	//for (int i = 1; i <= n; i++)
	//{
	//	ret = ret * i;
	//	sum = sum + ret;
	//}
	//printf("�����Ľ׳˺�Ϊ��%ld\n", sum);
	//while ((ch = getchar()) != '\n')
	//{
	//	if (ch<'0' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}
	////char a[20] = { 0 };
	//char b;
	//scanf("%s", &a);
	//scanf("%c", &b);
	//printf("%s\n", a);
	//printf("%c1\n", b);

	//char ch;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
	//if (ch == -1)
	//	printf("haha\n");
	//putchar(ch);
	//printf("%c\n", ch);

	////int a = 1;
	//if (-1 == EOF)
	////	printf("%d\n", a++);
	//short a = 1; 
	//scanf("%hd", &a);
	//printf("a = %d\n", a);
	//switch (a)
	//{

	//case 1:
	//	printf("haha\n");
	//default:
	//	printf("hehe\n");
	//case 2:
	//	printf("xixi\n");
	//}
	//while ()
	//{

	//}
	//}
	//for (int a = 1; a < 101; a++)
	//{
	//	if (1 == abs(a % 2))
	//		printf("%d\n", a);
	//	/*else
	//		printf("����һ��ż��\n");*/
	//}
//	int a = 1, b = 2;
//	if (a == 2)
//	{		if (b == 2)
//			printf("hehe\n");
//}
//	else
//		printf("haha\n");
//
//	//int age = 19;
//	//if (age >= 18)
	//	printf("������\n");

	////char name[] = {'v',"����" };
	////printf("%s\n", name);
	//printf("%d\n", sizeof(name));
	//printf("%d\n", strlen(name));
	////name = 'b';
	//struct person
	//{
	//	char name[20];
	//	short age;
	//};
	//printf("%s\n", "���˼��");
	//struct person wzl = { "������", 19 };
	//struct person* pw = &wzl;
	//printf("���֣�%s\n", pw->name);
	//printf("���䣺%d��\n", (*pw).age);
	///*wzl.name = "�� �� ��";*/
	//wzl.age = 18;
	//printf("ȥ�����䣺%d��\n", wzl.age);
	return 0;
}
//int Add(int a, int b)
//{
//	return a + b;
//}
