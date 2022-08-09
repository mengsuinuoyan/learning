#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d", &a, &b);
//	c = a + b;
//	printf("总和为%d", c);
//
//	return 0;
//}

//变量
//char a = 1;
//int b = 2;
//long c = 3;
//long long d = 4;
//float e = 1.1;
//double f = 2.2222222;
//作用域和生命周期
//int main()
//{
//	int a = 11;
//	{int a = 12;
//
//		printf("%d\n", a);
//	//运行结果为大括号内a的值即12
//	}
//
//	printf("%d\n", a);//结果为外面大括号a的值即为11
//
//	return 0;
//}

//常量-----3.14  10  a abdcsa 

//int main()
//{
//	int a = 10;//此时a为变量
//
//	a = 20;
//
//	printf("%d\n", a);//此时打印结果为20
//
//	const int b = 10;//此时b为常量无法改变（即无法再次赋值
//
//	//b = 20;
//
//	printf("%d\n", b);//b改变赋值后无法运行 
//
//}

//字符串和转义字符----字符串就是双引号扩起来的一串字符"abcdasdjk"

#include<string.h>
//int main()
//{
//	"abcd";
//	"hello";
//	//字符数组---数组是一组相同类型的元素
//	char arr[] = "hello";
//
//	printf("%s\n", arr);//打印字符串
//
//	strlen("asbd");//string lenth --字符串的长度
//
//	int len = strlen("hello");
//
//	printf("%d\n", len);
//
//
//
//
//
//
//	return 0;
//}



//int main()
//{
//	printf("\a,\a,\a");
//
//	return 0;
// }


//选择语句 if else

//int main()
//{
//	int input = 0;
//	printf("hello\n");
//	printf("大学四年是决定好好学习还是游戏人生呢？\nyes-1\nno-0");
//
//	
//	scanf("%d",&input);
//	if (input == 1)//一个等号是赋值，两个等号是比较是否相等
//	printf("好offer!");
//	else
//		printf("回家卖红薯");
//
//
//	return 0;
//}

//循环语句
int main()
{
	int line = 0;
	while (line < 3000)
	{
		printf("写代码：%d\n", line);
		line++;
	}
	if (line == 3000)
	{
		printf("a good job");
	}
	return 0;
}
