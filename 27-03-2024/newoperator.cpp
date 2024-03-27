#include "banner3.h"
#include <cstdio>

int main(void){

	Banner a; // activating object on the stack using default constructor

	printf("Price of first banner: %.2f\n",a.Price());
	
	Banner* b = new Banner(30,8); //activating object on the heap

	printf("Price of second banner: %.2f \n",b->Price());

	delete b;

}
