#include<cstdio>

long qube(int value){
	if (value<=0)
		throw value;
	return value*value*value;
}

long square(int value){
	if(value<=0)
		throw value;
	return value*value;
}

long powerSum(int value,long(*fun)(int),int k)
{
	long sum=0;
	if(k<=0)
	 throw k;	
	for(int i=0;i<k;++i){
		sum+=fun(value+i);
	}

	return sum;
}

int main(void){
	int value,k;
	printf("Enter the value and K: ");
	scanf("%d%d",&value,&k);
	try{
	printf("Sum of squares till %d is: %ld\n",k,powerSum(value,square,k));

	printf("Sum of qubes till %d is: %ld\n",k,powerSum(value,qube,k));

	}

	catch(int){
		printf("*******Invalid Input:*******\n");
	}
}
