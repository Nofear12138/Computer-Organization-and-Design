#include<stdio.h>
int check_endian(int a)
{
	char *p = (char*)&a;
	if (*p == 1)
	{ 
		printf("��Ļ����� Little-endian"); 
	}
	else
	{
		printf("��Ļ����� Big-endian");
	}
	return 0;
}
int main()
{
	int a = 1;
	check_endian(a);
	return 0;
}


