#include <cstdio>

int main(){
	int num;
	printf("Enter a nummber to reverse: ");
	scanf("%d",&num);
        int newNum=0;
	while(num>0){
		newNum*=10;
		newNum+=num%10;
		num=num/10;
		
	}

	printf("New number is: %d\n",newNum);
	return 0;
}
