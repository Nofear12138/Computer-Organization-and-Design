#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a1=-2147483648;
	unsigned int a2=2147483648;
	cout<<"-2147483648==2147483648U���Ϊ��"<<(a1==a2)<<endl;
	cout<<"*********"<<endl;
	int a3=-2147483647;
	cout<<"-2147483648<-2147483647���Ϊ��"<<(a1<a3)<<endl;
	cout<<"*********"<<endl;
	unsigned int a4=2147483647U;
	cout<<"-2147483648<2147483647U���Ϊ��"<<(a1<a4)<<endl;
	cout<<"*********"<<endl;
	cout<<"-2147483648<2147483647���Ϊ��"<<(a1<-a3)<<endl;
	cout<<"*********"<<endl;
	cout<<"(unsigned)-2147483648<-2147483647���Ϊ��"<<((unsigned)a1<a3)<<endl;
	cout<<"*********"<<endl;
	cout<<"(unsigned)-2147483648<2147483647���Ϊ��"<<((unsigned)a1<-a3)<<endl;
	cout<<"*********"<<endl;
} 
