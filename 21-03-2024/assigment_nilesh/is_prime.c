int is_prime(int x)
{
	if(x==2||x==3||x==5)
		return 1;

         if(x%2==0||x%3==0||x%5==0)
		 return 0;

	 for(int i=5;i<x/2;i+=6){
		 if(x%i==0)
			 return 0;
	 }

	 return 1;
}
                           
	

