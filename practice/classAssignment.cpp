#include <cstdio>

class Employee{

        private: 
		int id;
		int hours;
		float rate;
		//static int count =100;

		Employee(int hour,int rate){
		
			this->hours=hour;
			this->rate=rate;
		
		
	        		
		static int count;		
	

};

int Employee :: count = 100;

class Salesman : public Employee
{
	private:
		float comm=0; // by default 0
	
	public:
		Salesman :: employee;
		Salesman(int hour,int rate,float c){

			this->hours = hour;
			this->rate = rate;	
			this->comm = c;
			this->count = ++count;
		}

		void setValue(int hour,int rate,float c){

                        this->hours = hour;
                        this->rate = rate;
                        this->comm = c;
                        this->count = ++count;
                }
		
		
		double Inc() const
		{
		
			return (hours*rate+(comm*0.10*hours));
		}
		int getId(){
		
			return count;
		
		}

				

};

int main(void){

	int hour=10;
	float rate = 2.5;
	float comm = 1800;
	srand(time(0));

	//Salesman* a = new Salesman(hour,rate,comm);
	//double result = a -> Inc();

	Salesman sm = new Salesman[20];

	printf("hello world");
	//printf("\n %d Income is: %.2lf\n",a->getId(),result);

}
