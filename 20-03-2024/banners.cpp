#include<stdio.h>

int main(void)
{
	float width,height;
	short count;

	printf("Dimensions of Banner: ");
	scanf("%f%f",&width,&height);
	printf("\nNumber of Banners: ");
	scanf("%d",&count);

	double area = width*height;

	if(width>height)
	{
		  printf("\nYou'll have to pay: %.2f",count*(width*height*0.8));  
	}
	
	else{
	   printf("\nYou'll have to pay: %.2f",count*(width*height*0.5));
	}

	puts("\nGoodbye.");
}


