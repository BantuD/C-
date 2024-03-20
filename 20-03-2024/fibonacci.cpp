#include<cstdio>
int fab(int x){
	if(x==1)
		return 1;
	if(x==0)
		return 0;


	return (fab(x-1)+fab(x-2));
}

int main(void)
{
	int x;
	printf("Enter the number till where you want to print series: ");
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	    {	
               printf("%d  ",fab(i));
	    }
	printf("\n");
 return 0;
 }
