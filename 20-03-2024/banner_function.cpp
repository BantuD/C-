#include<cstdio>
double banner(int width,int height,int count){
   
        double area = width*height;
	float rate=count<10?0.80:0.75;

	int result;
	
        	if(width>height)
        	 {
         		result = count*(width*height*rate);}

    	        else{

      			 result = count*((width+1)*(height+1)*rate);}

    return result;
}

int main(void)
{
	float width,height;
	short count;

	printf("Dimensions of Banner: ");
	scanf("%f%f",&width,&height);
	printf("\nNumber of Banners: ");
	scanf("%hd",&count);
	printf("it will cost you: %.2lf\n",banner(width,height,count));
	puts("\nGoodbye.");
}


