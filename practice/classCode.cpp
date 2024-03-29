#include <cstdio>

class Employee
{

	public:
		Employee()
		{
		
			id = ++count;
			hours = 100;
			rate = 100;

			puts("Employee instance created");
		
		}

		Employee(double hh, double rr)
		{
		
			id = ++count;
			hours = hh;
			rate = rr;
		
		}

		static int EmployeeCount()
		{
		
			return count;
		
		}

		 double Income()
		{
		
			return rate * hours;
		}

	protected:
		int id;
		double hours;
		double rate;
		static int count;


};


class SalesPerson : public Employee
{

	public:
		SalesPerson() : Employee()
		{
		
			comm = 25000;
			puts("Salesperson Activated");
		}

		SalesPerson(double hh,double rr, double cc) : Employee(hh,rr)
		{
		
			 comm = cc;
			 puts("SalesPerson Activated");
		
		}

		double Income()
		{
		
			double i = Employee :: Income() + (0.25 * comm);
			return i;
			
		}

	private:
		double comm;

};

int Employee :: count = 100;

double Tax(Employee& emp)
{

	double income = emp.Income();
	if(income < 10000)
		return 0;

	return (income - 10000)*.10;
}

int main(void)
{

	Employee a(200,100);
	SalesPerson b(100,100,12000);
	
	printf("Income for employee A is  %.2lf ",a.Income());
	printf("And tax is %lf \n",Tax(a));


	printf("Income for Sales Person is : %.2lf ",b.Income());
	printf("and Tax is %lf \n",Tax(b));




}
