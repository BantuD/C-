#include<cstdio>
#include<cmath>

int compute(int upper)
	{
		puts("Performing basic computation....");
		return upper*(upper+1)/2;

	}


int main(void)
	{
		int count;
		printf("Count: ");
		scanf("%d", &count);
		printf("Result = %d\n",compute(count));

	
	}
