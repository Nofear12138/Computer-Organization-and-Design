#include <stdio.h>
#include <time.h>
#include <windows.h>
#define M 10
#define N 100000
int a[M][N];
int i,j;
void Assign_array_rows(){
	for (i=0;i<M;i++){
		for (j=0;j<N;j++){
			a[i][j]=i+j;
		}
	}
}
int main(){
	/*clock_t start,end;
	start=clock();*/
	double run_time,dqFreq;  //运行时间和计时器频率 
	LARGE_INTEGER time_start,time_over,f;	//开始时间、结束时间、计时器频率 
	QueryPerformanceFrequency(&f);
	dqFreq=(double)f.QuadPart;
	QueryPerformanceCounter(&time_start);	//计时开始
	Assign_array_rows();
	QueryPerformanceCounter(&time_over);	//计时结束
	run_time=1000000*(time_over.QuadPart-time_start.QuadPart)/dqFreq;//精度为微秒 
	printf("run_time：%fus\n",run_time);
	/*end=clock();
	printf("time=%fms\n",(double)(end-start)*1000/CLK_TCK);*/
} 
