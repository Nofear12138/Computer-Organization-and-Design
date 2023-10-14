
#include <stdio.h>
int main(){
	float a = (1.0/3+100)-100; 
	double c=(1.0/3+100);
	float b=1.0/3+100;
	double d=(1.0/3+100)-100; 
	printf("%.20f\n",a);
	printf("%.20lf\n",c);
	printf("%.20lf\n",d);
	printf("%.20f\n",b);
	if (a==b){
		printf("Yes\n");
	}
	printf("%d\n",(a==b));
}
