#include <stdio.h>
int main(){
	short a=-12345;
	printf("-12345\n");
	printf("תΪint�Ľ��Ϊ��%d\n",(int)a);
	printf("תΪint�Ľ��Ϊ��%x\n",(int)a);
	printf("תΪunsigned short�Ľ��Ϊ��%hu\n",(unsigned short)a);
	printf("תΪunsigned short�Ľ��Ϊ��%x\n",(unsigned short)a);
	printf("תΪunsigned int�Ľ��Ϊ��%u\n",(unsigned int)a);
	printf("תΪunsigned int�Ľ��Ϊ��%x\n",(unsigned int)a);
	printf("תΪfloat�Ľ��Ϊ��%f\n",(float)a);
	//printf("תΪfloat�Ľ��Ϊ��%x\n",(float)a);
	puts("");
	int b=2147483647;
	puts("2147483647");
	printf("ת��Ϊshort�Ľ��Ϊ��%hd\n",(short)b);
	printf("ת��Ϊshort�Ľ��Ϊ��%x\n",(short)b);
	printf("ת��Ϊunsigned short�Ľ��Ϊ��%hu\n",(unsigned short)b);
	printf("ת��Ϊunsigned short�Ľ��Ϊ��%x\n",(unsigned short)b);
	printf("ת��Ϊunsigned int�Ľ��Ϊ��%u\n",(unsigned int)b);
	printf("ת��Ϊunsigned int�Ľ��Ϊ��%x\n",(unsigned int)b);
	printf("ת��Ϊfloat�Ľ��Ϊ��%f\n",(float)b);
	puts("");
	float c=123456.789e5;
	puts("123456.789e5");
	printf("ת��Ϊdouble�Ľ��Ϊ��%lf\n",(double)c);
	puts("");
	double d=123456.789e5;
	puts("123456.789e5");
	printf("ת����float�Ľ��Ϊ��%f\n",(float)d);
	puts("��λ����");
	unsigned short us=-12345;
	short s=-12345;
	printf("%x\n",s);
	printf("short��-12345������λ��%hd\n",s<<2);
	printf("short��-12345������λ��%x\n",s<<2);
	printf("%x\n",us);
	printf("unsigned short��-12345������λ��%hu\n",us<<2);
	printf("unsigned short��-12345������λ��%x\n",us<<2);
	printf("short��-12345������λ��%hd\n",s>>2);
	printf("short��-12345������λ��%x\n",s>>2);
	printf("unsigned short��-12345������λ��%hu\n",us>>2);
	printf("unsigned short��-12345������λ��%x\n",us>>2);
	puts("");
	
	/*unsigned us=-12345;
	int s=-12345;
	printf("%x\n",s);
	printf("short��-12345������λ��%d\n",s<<2);
	printf("short��-12345������λ��%x\n",s<<2);
	printf("%x\n",us);
	printf("unsigned short��-12345������λ��%u\n",us<<2);
	printf("unsigned short��-12345������λ��%x\n",us<<2);
	printf("short��-12345������λ��%d\n",s>>2);
	printf("short��-12345������λ��%x\n",s>>2);
	printf("unsigned short��-12345������λ��%u\n",us>>2);
	printf("unsigned short��-12345������λ��%x\n",us>>2);
	puts("");*/ 
}
