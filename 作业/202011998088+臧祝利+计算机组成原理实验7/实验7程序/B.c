#include <stdio.h>
#include <time.h>
#include <windows.h>
#define M 100000
#define N 10
int a[M][N];
int i,j;
void Assign_array_cols(){
	for (j=0;j<N;j++){
		for (i=0;i<M;i++){
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
	Assign_array_cols();
	QueryPerformanceCounter(&time_over);	//计时结束
	run_time=1000000*(time_over.QuadPart-time_start.QuadPart)/dqFreq;//精度为微秒 
	printf("\nrun_time：%fus\n",run_time);
	/*end=clock();
	printf("time=%fms\n",(double)(end-start)*1000/CLK_TCK);*/
} 
