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
//	printf("�ܺ�Ϊ%d", c);
//
//	return 0;
//}

//����
//char a = 1;
//int b = 2;
//long c = 3;
//long long d = 4;
//float e = 1.1;
//double f = 2.2222222;
//���������������
//int main()
//{
//	int a = 11;
//	{int a = 12;
//
//		printf("%d\n", a);
//	//���н��Ϊ��������a��ֵ��12
//	}
//
//	printf("%d\n", a);//���Ϊ���������a��ֵ��Ϊ11
//
//	return 0;
//}

//����-----3.14  10  a abdcsa 

//int main()
//{
//	int a = 10;//��ʱaΪ����
//
//	a = 20;
//
//	printf("%d\n", a);//��ʱ��ӡ���Ϊ20
//
//	const int b = 10;//��ʱbΪ�����޷��ı䣨���޷��ٴθ�ֵ
//
//	//b = 20;
//
//	printf("%d\n", b);//b�ı丳ֵ���޷����� 
//
//}

//�ַ�����ת���ַ�----�ַ�������˫������������һ���ַ�"abcdasdjk"

#include<string.h>
//int main()
//{
//	"abcd";
//	"hello";
//	//�ַ�����---������һ����ͬ���͵�Ԫ��
//	char arr[] = "hello";
//
//	printf("%s\n", arr);//��ӡ�ַ���
//
//	strlen("asbd");//string lenth --�ַ����ĳ���
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


//ѡ����� if else

//int main()
//{
//	int input = 0;
//	printf("hello\n");
//	printf("��ѧ�����Ǿ����ú�ѧϰ������Ϸ�����أ�\nyes-1\nno-0");
//
//	
//	scanf("%d",&input);
//	if (input == 1)//һ���Ⱥ��Ǹ�ֵ�������Ⱥ��ǱȽ��Ƿ����
//	printf("��offer!");
//	else
//		printf("�ؼ�������");
//
//
//	return 0;
//}

//ѭ�����
int main()
{
	int line = 0;
	while (line < 3000)
	{
		printf("д���룺%d\n", line);
		line++;
	}
	if (line == 3000)
	{
		printf("a good job");
	}
	return 0;
}
