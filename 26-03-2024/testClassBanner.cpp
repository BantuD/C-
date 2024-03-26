#include "banner1.h"
#include<cstdio>

int main(void)
{
	/*
	Banner a;
	printf("Price of standard banner: %.2f\n",a.Price()); //binding happening
	*/						      //
	
	Banner b;
	float w,h;
	printf("Dimesions of custom banner: ");
	scanf("%f%f",&w,&h);
	b.Resize(w,h); // Banner: Resize(&b,w,h) // binding happening
	printf("Price of custom rectangular banner: %.2f\n",b.Price());
	b.Triangulate(true); // binding happening

	printf("Price of custom triangular banner : %.2f\n",b.Price()); // binding happening
	

	b.reshape(Geometry::Elliptical);
	printf("Price of custom Elliptical banner : %.2f\n",b.Price());
								
									
}

