#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int sec1,sec2,min1,min2,hour1,hour2,time1,time2,time;
	printf("請輸入兩個時間\n");
	printf("時間1:");
	scanf("%d:%d:%d",&hour1,&min1,&sec1);
	printf("時間2:");
	scanf("%d:%d:%d",&hour2,&min2,&sec2);
	time1=(hour1*3600+min1*60+sec1);
	time2=(hour2*3600+min2*60+sec2);
	time=time1-time2;
	time=abs(time);		
	printf("秒:%d",time);
}

