#include<cstdio>

extern long compute(int,int,short = 1);

int main(void){

	int l,u;
	short s;
	
	printf("Lower and upper limits: ");
	scanf("%d%d",&l,&u);

	try
	 {	
	  printf("First computation with default result: %ld\n",compute(l,u));
          printf("second computation without default result: %ld\n",compute(l,u,2));
         }

	catch(int e)
	{
		printf("\nError - Invalid upper limit: %d\n",e);
	}
	puts("Goodbye...");
}
