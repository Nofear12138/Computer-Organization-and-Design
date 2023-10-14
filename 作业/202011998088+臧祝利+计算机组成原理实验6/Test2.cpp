#include <bits/stdc++.h>
using namespace std;
struct{
	int a;
	char b;
	short c;
}temp;

int main(){
	temp.a=0x00110110;
	temp.b=0x11;
	temp.c=0x1001;
	printf("%x\n",&temp);
	printf("%x\n",&temp.a);
	printf("%x\n",&temp.b);
	printf("%x\n",&temp.c);
}


