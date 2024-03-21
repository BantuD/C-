#include<cstdio>
#include<cmath>

int compute(int upper)
	{
		puts("Performing simple computation....");
		return upper*(upper+1)/2;

	}
double compute(int upper, float degree) // overloaded funtion
	 {
	 	double result =0;
		puts("Performing complex computation...");
		for(int value=1;value<=upper; ++value){
			result += pow(value,degree);
		}
		return result;
	 }
/*
void compute(float upper){
	{
		printf("float compute is called: %f",upper);
	}
void compute(double upper){
        {
                printf("float compute is called: %f",upper);
        }
*/
int main(void)
	{
		int count;
		printf("Count: ");
		scanf("%d", &count);
		printf("Result = %d\n",compute(count));
		
		float level;
		printf("Level: ");
		scanf("%f", &level);
		printf("Result = %lf\n",compute(count,level));
	
	}
