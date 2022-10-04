#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num=0;
	char j;
	
	printf("input a string:");
	
	while((j=getchar())!='\n')
	{
		if('0'<=j&&j<='9')
			num=num+1;
	}
	
	printf("the number of digits is %i",num);
	
	return 0;
}
