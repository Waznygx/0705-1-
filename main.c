#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int age = 2;
//	int i = 0;
//	//scanf("%d", &age);
//	if (age == 9)
//	{
//		if (i = 0)
//		{
//			printf("%d is a teenager\n", age);
//
//		}
//	}
//	/*else if (age > 18 && age < 55)
//	{
//		printf("%d is an adult\n", age);
//	}*/
//	else
//	{
//		printf("%d is an older\n", age);
//	}
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	printf("please input a num:");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("error!");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x%2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("a\n");
//		case 1:
//			printf("b\n");
//			break;
//		default:
//			printf("c\n");
//		}
//	case 2:
//		printf("d\n");
//	default:
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d\nn = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			break;
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int rat = 0;
//	char passwd[20] = { 0 };
//	printf("please input passwd:");
//	scanf("%s", &passwd);
//	//getchar();
//	while ((rat = getchar())!= '\n')
//	{
//	}
//	printf("please ensure choose(y/n):");
//	rat = getchar();
//	if (rat == 'y')
//	{
//		printf("correct\n");
//	}
//	else
//	{
//		printf("quit\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		if (i==5)
//		{
//			break;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for ( ; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\n");
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	int count = 0;
//	for ( i = 0,k=0; k = 1; i++,k++)
//	{
//		k++;
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	} while (i<10);
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int jc = 1;
//	printf("please input a num:");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		jc = jc * i;
//	}
//	printf("%d的阶乘 = %d\n",n, jc);
//	return 0;
//}

//计算1！+2！+3！+...+10！= 4037913
//int main()
//{
//	int sum = 0;
//	int jc = 1;
//	for (int i = 1; i <= 10; i++)
//	{
//		jc = jc * i;
//		sum = sum + jc;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}

//有序数组二分查找
//int main()
//{
//	int arr[10] = { 2,4,6,8,10,12,14,16,18,20 };
//	int lenth = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int mid = 0;
//	int right = lenth - 1;
//	int n = 0;
//	printf("please input a num:");
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			arr[mid] = n;
//			printf("arr[%d]\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("not exist!");
//	}
//	return 0;
//}

//演示多个字符从两端移动向中间汇聚
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "i am going to a concert!!!";
//	char arr2[] = "**************************";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(700);
//		printf("%s\n", arr2);
//	}
//	return 0;
//}

//只有三次机会输入密码，超过次数退出系统
//#include<string.h>
//int main()
//{
//	char p[50] = "";
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("please input a passwd:");
//		scanf("%s", &p);
//		if (strcmp(p, "525") == 0)
//		{
//			printf("password is correct!!!\n");
//			break;
//		}
//		else
//		{
//			printf("try again!\n");
//			count++;
//			printf("error=%d\n", count);
//		}
//	}
//	if (i > 3)
//	{
//		printf("exit!\n");
//	}
//	return 0;
//}

//猜数字游戏
//#include<stdlib.h>
//#include<time.h>
//int gameUI()
//{
//	printf("\n********************************************\n");
//	printf("********************************************\n");
//	printf("****************  0.exit  ******************\n");
//	printf("****************  1.play  ******************\n");
//	printf("********************************************\n");
//	printf("********************************************\n");
//}
//int play()
//{
//	int random_num = rand() % 100 + 1;
//	int i = 0;
//	while (1)
//	{
//		printf("please input a num with you in mind:(1-100) ");
//		scanf("%d", &i);
//		if (i > random_num)
//		{
//			printf("猜大了！\n");
//		}
//		else if (i < random_num)
//		{
//			printf("猜小了!\n");
//		}
//		else
//		{
//			printf("correct!!\n");
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		gameUI();
//		printf("\nplease input your choose:");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 0:
//			printf("Exit the game!\n");
//			break;
//		case 1:
//			printf("Start the game!\n");
//			play();
//			break;
//		default:
//			printf("try again!\n");
//			break;
//		}
//	} while (i);
//	return 0;
//}

//关机程序
//#include<stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("如不输入‘cancel’语句，电脑将在一分钟之后关机:\n");
//	scanf("%s", input);
//	if (strcmp(input,"cancel") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//从大到小输入三个数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int mid = 0;
//	printf("please input 3 nums:");
//	scanf("%d%d%d", &a, &b, &c);
//	if (b > a)
//	{
//		mid = a;
//		a = b;
//		b = mid;
//	}
//	if (c > a)
//	{
//		mid = a;
//		a = c;
//		c = mid;
//	}
//	if (c > b)
//	{
//		mid = b;
//		b = c;
//		c = mid;
//	}
//	printf("%d>%d>%d", a, b, c);
//	return 0;
//}

//打印100以内3的倍数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//输入两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (1)
//	{
//		printf("\nplease input two nums:");
//		scanf("%d%d", &a, &b);
//		if (a >= b)
//		{
//			while (c = a % b)
//			{
//				a = b;
//				b = c;
//			}
//			printf("最大公约数=%d\n", b);
//			break;
//		}
//		else
//		{
//			printf("第一个输入的值要大于第二个！\n");
//		}
//	}
//	return 0;
//}

//打印1000-2000之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 400 == 0))
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if ((year % 4 == 0 && year % 100 != 0))
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("\n共有%d个闰年", count);
//	return 0;
//}

//打印100-200以内素数
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		for (i = 2; i < num; i++)
//		{
//			if (num % i == 0)
//				break;
//		}
//		if (i == num)
//		{
//			printf("%d\n", num);
//			count++;
//		}
//	}
//	printf("%d个素数\n", count);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		for (i = 2; i <= sqrt(n); i++)
//		{
//			if (n % i == 0)
//			{
//				break;
//			}
//		}
//		if (i > sqrt(n))
//		{
//			printf("%d\n", n);
//			count++;
//		}
//	}
//	printf("共%d个素数", count);
//	return 0;
//}

//1-100以内出现带有“9”的数字的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	for ( num = 1; num < 101; num ++)
//	{
//		if (num % 10 == 9 || num / 10 == 9)
//		{
//			printf("%d\n", num);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

//求1/1-1/2+1/3-1/4+...+1/99-1/100
//int main()
//{
//	int i = 0;
//	float num = 0;
//	int p = 1;
//	for ( i = 1; i < 101; i++)
//	{
//		num += (1.0 / i) * p;
//		p = !p;
//	}
//	printf("%d", num);
//	return 0;
//}

//求10个整数中的最大值
//int main()
//{
//	int arr[10] = { 2,38,4,22,12,43,76,7,40,96 };
//	int length = sizeof(arr) / sizeof(arr[0]) - 1;
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < length; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("arr[%d]", i);
//	return 0;
//}

//打印9*9乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}