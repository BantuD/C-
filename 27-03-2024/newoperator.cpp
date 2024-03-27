#include "banner3.h"
#include <cstdio>

int main(void){


	{
	Banner a; // activating object on the stack using default constructo
	printf("Price of first banner: %.2f\n",a.Price());
	
	
	} // this will deativate the object as soon as the curly brances gets closed
	  
	Banner* b = new Banner(30,8); //activating object on the heap

	printf("Price of second banner: %.2f \n",b->Price());

	delete b;

	int n;
	printf("Number of other Nammers: ");
	scanf("%d",&n);
	
	//dyanmically activating (using default constructor) instances in
	//an array using new[] object which return the address of the first instance 
	//
	Banner *other = new Banner[n]; //default constructor is going to be used
				      
	for(int i=0;i<n;++i){
	
		other[i].Resize(20+3*i,5+2*i);

	//	printf("%d\t %.2f\n",i+1,other[i].Price());
		printf("%d\t %.2f\n",i+1,(other+i)->Price());
	}

	//delete other;
	
	// will give you the warning that you delcared array with[] but other will contain only first instance so when you delete here you will only delete the first one 
	// So you have to say here 
	delete[] other;



}
