#include <cstdio>


int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	if(num%2==0 || num%3==0 || num%5==0){
		printf("Not a Prime number");
		return 0;
	}
	
	for(int i=5;i<num/2;i+=6){
		if(num%i==0){
			printf("Number is not prime");
			return 0;
		 }
	}
	
	printf("Number is prime");

	return 0;
}

