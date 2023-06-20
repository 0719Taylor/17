#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	double a = 5 / 2.0; //商2余1
//	int b = 5 % 2;
//	printf("a=%lf\n",a);
//	printf("b=%d\n",b);
//	return 0;
//}



//int main()
//{
//	int a = -1;
//	//整数的二进制表示有：原码、反码、补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001  - 原码
//	//11111111111111111111111111111110  - 反码
//	//11111111111111111111111111111111  - 补码
//	
//	int b = a >> 1;
//	//11111111111111111111111111111111 右移一位保持不变，还是-1
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





////交换两个变量的值，不使用第三个变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//加减法 -- 有缺陷，可能会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//异或法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("before:a=%d,b=%d\n",a,b);
//	printf("after:a=%d,b=%d\n",a,b);
//	return 0;
//}










//求一个整数存储在内存中的二进制中1的个数
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d",&num);
	//统计num的补码中有几个1
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