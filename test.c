#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	double a = 5 / 2.0; //��2��1
//	int b = 5 % 2;
//	printf("a=%lf\n",a);
//	printf("b=%d\n",b);
//	return 0;
//}



//int main()
//{
//	int a = -1;
//	//�����Ķ����Ʊ�ʾ�У�ԭ�롢���롢����
//	//�洢���ڴ���ǲ���
//	//10000000000000000000000000000001  - ԭ��
//	//11111111111111111111111111111110  - ����
//	//11111111111111111111111111111111  - ����
//	
//	int b = a >> 1;
//	//11111111111111111111111111111111 ����һλ���ֲ��䣬����-1
//	printf("%d\n",b);//-1
//	return 0;
//}





//int main()
//{
//	int a = -2;
//	int b = a >> 1;
//	//00000000000000000000000000000101
//	printf("%d\n",b);
//	return 0;
//}





////��������������ֵ����ʹ�õ���������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//�Ӽ��� -- ��ȱ�ݣ����ܻ����
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("before:a=%d,b=%d\n",a,b);
//	printf("after:a=%d,b=%d\n",a,b);
//	return 0;
//}










//��һ�������洢���ڴ��еĶ�������1�ĸ���
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d",&num);
	//ͳ��num�Ĳ������м���1
	/*while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}*/
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n",count);
	return 0;
}