#include<stdio.h>
int check_endian(int a)
{
	char *p = (char*)&a;
	if (*p == 1)
	{ 
		printf("你的机器是 Little-endian"); 
	}
	else
	{
		printf("你的机器是 Big-endian");
	}
	return 0;
}
int main()
{
	int a = 1;
	check_endian(a);
	return 0;
}


