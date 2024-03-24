#include<cstdio>

float ExpenseSequence(int year)
{
	return 3*year+2;

}

float IncomeSequence(int year)
{
	return year * year + 1;
}

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

int main(void)

{
	int count;
	printf("Number of years: ");
	scanf("%d",&count);

	printf("Total Expenses: %.2f \n", ExpenseSequenceSum(count));
	printf("Total Expenses: %.2f \n",  IncomeSequenceSum(count));

	return 0;
}




















