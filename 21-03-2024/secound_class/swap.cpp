#include<cstdio>

void swap(long* first,long* second)
	{
	/*
          first = first+second;
	  second = first-second;
	  first=first-second;
        
       
	 printf("First is: %ld",first);
	 printf("Second is: %ld",second);	 
	*/
         int temp = *first;
	 *first=*second;
	 *second=temp;
	 }


int main(void)
{      
	long first,second;
	printf("Enter first and second values: ");
	scanf("%ld%ld",&first,&second);

	swap(&first,&second);
        
	printf("\nFirst is: %ld",first);
        printf("\nSecond is: %ld\n",second);


}
