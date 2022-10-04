#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sum=0;
	int i,j;
	
	printf("input a number:");
	scanf("%d",&i);
	
	for(j=0;j<=i;j++)
	{
		sum=sum+j;
	}
	
	printf("The result is %d",sum);
	
	return 0;
}
