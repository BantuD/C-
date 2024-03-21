#include<cstdio>
double rectangle(float length, float breadth,float *perimeter){
		
	perimeter[0] = 2*(length+breadth);
	printf("small fucntion");
	return length*breadth;
}
double Rectangle(float length, float breadth,float *perimeter){

        perimeter[0] = 2*(length+breadth);
        printf("Capital function");
	return length*breadth;
}

int main(void)
{
	float perimeter;
	double area;

	area=rectangle(19.5,6.8,&perimeter);

	printf("There are of rectangle: %lf\n",area);
	printf("Perimeter of rectangle: %f\n",perimeter);

	return 0;
}
