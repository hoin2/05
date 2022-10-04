#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int answer=59;
	int i;
	int trial=0;
	
	do
	{
		printf("Guess a number:");
		scanf("%d",&i);
		
		if(i<answer){
			printf("low!\n");
			trial=trial+1;
		}
		else if(i>answer){
			printf("high!\n");
			trial=trial+1;
		}
	}
	while(i!=answer);
	
	printf("Congratulation! trials:%i\n",trial);
	
	return 0;
}
