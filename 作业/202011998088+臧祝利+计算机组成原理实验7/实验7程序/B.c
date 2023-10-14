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
	double run_time,dqFreq;  //����ʱ��ͼ�ʱ��Ƶ�� 
	LARGE_INTEGER time_start,time_over,f;	//��ʼʱ�䡢����ʱ�䡢��ʱ��Ƶ�� 
	QueryPerformanceFrequency(&f);
	dqFreq=(double)f.QuadPart;
	QueryPerformanceCounter(&time_start);	//��ʱ��ʼ
	Assign_array_cols();
	QueryPerformanceCounter(&time_over);	//��ʱ����
	run_time=1000000*(time_over.QuadPart-time_start.QuadPart)/dqFreq;//����Ϊ΢�� 
	printf("\nrun_time��%fus\n",run_time);
	/*end=clock();
	printf("time=%fms\n",(double)(end-start)*1000/CLK_TCK);*/
} 
