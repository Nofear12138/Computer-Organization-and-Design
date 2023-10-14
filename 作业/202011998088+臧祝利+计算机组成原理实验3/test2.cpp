#include <iostream>
#include <cstdio>
#define u unsigned
using namespace std;
int main(){
	int a1=0;
	u a2=0;
	cout<<(a1==a2)<<endl;
	int a3=-1;
	cout<<(a3<a1)<<endl;
	cout<<(a3<a2)<<endl;
	int a4=2147483647,a5=-2147483647;
	cout<<(a4>a5-1)<<endl;
	u a6=2147483648;
	cout<<(a6>a5-1)<<endl;
	cout<<"************"<<endl;
	cout<<(a4>(int)a6)<<endl;
	int a7=-1,a8=-2;
	cout<<(a7>a8)<<endl;
	cout<<((u)a7>a8)<<endl;
} 
