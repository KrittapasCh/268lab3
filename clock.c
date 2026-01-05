#include<stdio.h>

int main(){
	int h,m,s,add,eh;
	scanf("%d:%d:%d",&h,&m,&s);
	printf("Hour:%d\nMinute:%d\nSecond:%d\n",h,m,s);
	printf("Next Minute:\n");
	scanf("%d",&add);
	
	m += add;
	eh = m/60;
	m  = m% 60;
	h  = (h+eh)%24;
	
	printf("Hour:%d\nMinute:%d\nSecond:%d",h,m,s);
	
	return 0;
	
}