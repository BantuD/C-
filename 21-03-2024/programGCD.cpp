#include<cstdio>
extern "C" long GCD(long, long); // this not going to be here it is some other module
			  
// called a function which is written in assembly 
// C functions are not mangled and assembly does not do it
//"C"  if you dont give "C" compiler will asume that it is mangled 
//and C language does not support name mangling so it will look for mangled name but the name will be not be in the mangled form thats why it won't be able to see the function 
//You can only call those assembly codes from C from which are following the calling convention 
//
// call compiler based programming languages like c,c++ follows calling convention
 
int main(void)
{
	long m,n;

	printf("Two positive Integers: ");
	scanf("%ld%ld", &m,&n);
	printf("G.C.D = %ld\n",GCD(m,n));
}
