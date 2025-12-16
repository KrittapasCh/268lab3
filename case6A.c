#include <stdio.h>

int main(){
	int score;
	scanf("%d",&score);
	if(score>=0&&score<=100){
		if (score>= 68){
			if (score>=80)
				printf("A");
			else if(score>=75)
				printf("B");
			else
				printf("C %d",75-score);		
		}
		else {
			if (score>=55)
				printf("D");
			else
				printf("F");
		}
	}
	else
		printf("error score");
	return 0;
}


