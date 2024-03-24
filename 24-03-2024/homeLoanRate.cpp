#include<cstdio>

float HomeLoanRate(double amount, int period)
{
	return amount<1000000?8.5:8;
}

float CarLoanRate(double amount,int period)
{
	return period<4?12:13.5;
}

double HomeLoanInstalment 
