#include <stdio.h>
int main(){
	short a=-12345;
	printf("-12345\n");
	printf("转为int的结果为：%d\n",(int)a);
	printf("转为int的结果为：%x\n",(int)a);
	printf("转为unsigned short的结果为：%hu\n",(unsigned short)a);
	printf("转为unsigned short的结果为：%x\n",(unsigned short)a);
	printf("转为unsigned int的结果为：%u\n",(unsigned int)a);
	printf("转为unsigned int的结果为：%x\n",(unsigned int)a);
	printf("转为float的结果为：%f\n",(float)a);
	//printf("转为float的结果为：%x\n",(float)a);
	puts("");
	int b=2147483647;
	puts("2147483647");
	printf("转换为short的结果为：%hd\n",(short)b);
	printf("转换为short的结果为：%x\n",(short)b);
	printf("转换为unsigned short的结果为：%hu\n",(unsigned short)b);
	printf("转换为unsigned short的结果为：%x\n",(unsigned short)b);
	printf("转换为unsigned int的结果为：%u\n",(unsigned int)b);
	printf("转换为unsigned int的结果为：%x\n",(unsigned int)b);
	printf("转换为float的结果为：%f\n",(float)b);
	puts("");
	float c=123456.789e5;
	puts("123456.789e5");
	printf("转换为double的结果为：%lf\n",(double)c);
	puts("");
	double d=123456.789e5;
	puts("123456.789e5");
	printf("转换成float的结果为：%f\n",(float)d);
	puts("移位操作");
	unsigned short us=-12345;
	short s=-12345;
	printf("%x\n",s);
	printf("short的-12345左移两位：%hd\n",s<<2);
	printf("short的-12345左移两位：%x\n",s<<2);
	printf("%x\n",us);
	printf("unsigned short的-12345左移两位：%hu\n",us<<2);
	printf("unsigned short的-12345左移两位：%x\n",us<<2);
	printf("short的-12345右移两位：%hd\n",s>>2);
	printf("short的-12345右移两位：%x\n",s>>2);
	printf("unsigned short的-12345右移两位：%hu\n",us>>2);
	printf("unsigned short的-12345右移两位：%x\n",us>>2);
	puts("");
	
	/*unsigned us=-12345;
	int s=-12345;
	printf("%x\n",s);
	printf("short的-12345左移两位：%d\n",s<<2);
	printf("short的-12345左移两位：%x\n",s<<2);
	printf("%x\n",us);
	printf("unsigned short的-12345左移两位：%u\n",us<<2);
	printf("unsigned short的-12345左移两位：%x\n",us<<2);
	printf("short的-12345右移两位：%d\n",s>>2);
	printf("short的-12345右移两位：%x\n",s>>2);
	printf("unsigned short的-12345右移两位：%u\n",us>>2);
	printf("unsigned short的-12345右移两位：%x\n",us>>2);
	puts("");*/ 
}
