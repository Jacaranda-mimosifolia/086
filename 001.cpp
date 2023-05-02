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
	hello();//recursion递归,自己调用自己； 
} 
