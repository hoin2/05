#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char op;
	int i,j;
	int result;
	
	printf("enter the calculation:");
	scanf("%d,%c,%d",&i,&op,&j);
	
	if(op=='+')
	{
		result=i+j;
	}
	else if(op=='-')
	{
		result=i-j;
	}
	else if(op=='*')
	{
		result=i*j;
	}
	else
	{
		result=i/j;
	}
	
	printf("=%i\n",result);
	
	return 0;
}
