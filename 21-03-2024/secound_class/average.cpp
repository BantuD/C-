#include<cstdio>
double average(double first,double second,double deviation){
	
	deviation = first>second?(first-second)/2:(second-first)/2;
	return (first+second)/2;
}

int main(void){
	double a,b,c,d;
	
	printf("Enter two values: ");
	scanf("%lf%lf",&b,&c);

	a = average(b,c,d);
	printf("Average is %lf with a deviation of %lf\n",a,d);


}

