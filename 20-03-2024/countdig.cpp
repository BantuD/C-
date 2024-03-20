#include<stdio.h>

int main(void)

{
	/*
	int num,count=0;
	printf("Enter the number: ");
	scanf("%d",&num);

	while(num>0){
		count++;
		num=num/10;
	}
	printf("\nThe number has: %d digits\n",count);
	*/

	long num;
	int mul=1,count=0;
	printf("Enter the number: ");
	scanf("%ld",&num);
	if(num<0)
		num=-num;
	
	/*
	while(mul<num){
		count++;
		mul=mul*10;
	}
	*/

	//Different logic with do-while loop
	
	do{
		mul=mul*10;
		count=count+1;
		
	}while(mul<=num);

        printf("\nThe number has: %d digits\n",count);	
}
