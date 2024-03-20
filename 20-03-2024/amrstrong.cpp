#include<cstdio>
#include<cmath>
int main(void){
	int number,sum=0,temp;
	
	printf("Enter the number: ");
	scanf("%d",&number);
        temp=number;
	while(number>0){
		sum+=pow(number%10,3);
		number/=10;
	}
        if(sum==temp){
		printf("It is a amrstrong number\n");
	}
	else{
		printf("Not an amrstrong number\n");
	}
	return 0;
}
