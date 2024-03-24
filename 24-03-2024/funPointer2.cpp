#include<cstdio>

float ExpenseSequence(int year)
{
	return 3*year+2;

}

float IncomeSequence(int year)
{
	return year * year + 1;
}
/*
double ExpenseSequenceSum(int years)
{

	double total=0;
	for(int year=1;year<=years;++year)
	{
		double amount =  ExpenseSequence(year);

		total += amount;
	}

	return total;
}


double IncomeSequenceSum(int years){
	double total = 0;
	for(int year = 1;year<=years;++year)
	{
		double amount = IncomeSequence(year);
		total += amount;
	}

	return total;
}
*/

//secound parameter (seq) is of function pointer type which
//addresses code of any function with one paramter of int type
//and float as its return type 
double CommonSequenceSum(int years, float (*seq)(int))
{
	double total = 0;
	for(int yr=1;yr<=years;++yr){
	double amount = seq(yr); // calling function addresed by seq
	total += amount;

	}

	return total;

}
int main(void)

{
	int count;
	printf("Number of years: ");
	scanf("%d",&count);

	printf("Total Expenses: %.2f \n", CommonSequenceSum(count,&ExpenseSequence));
	printf("Total income: %.2f \n",   CommonSequenceSum(count,&IncomeSequence));

	return 0;
}




















