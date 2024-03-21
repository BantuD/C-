#include<cstdio>

extern "C" int is_prime(int);

int count_prime(int lower,int upper){
	int count=0;
	for(int i=lower;i<=upper;i++){
		if(is_prime(i))
		{
			++count;
		}
	    
	}
	//printf("%d",count);
	return count;
}

int main(void){
	int lower,upper;
	printf("Enter upper limit and lower limt: ");
	scanf("%d%d",&lower,&upper);

	printf("\nCount of prime numbers between: %d and %d is %d\n",lower,upper,count_prime(lower,upper));
}
	
	

