#include<stdio.h>

void hello(void);

int main()//the main function
{
	hello();
	return 0;
}

void hello(void)//the add function,function definition
{
	printf("hello,world");
	hello();//recursion�ݹ�,�Լ������Լ��� 
} 
