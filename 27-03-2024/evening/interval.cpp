#include<cstdio>

class Interval{

	public:
		Interval(int m,int s){
		
			id = ++count;
			min = m + s / 60;
			sec = s % 60;
		
		}

		int Time() const // cuz not making any change to the fields
		{
		
			return 60 * min + sec;
		}

		void Reset()
		{
			int m = sec = 0;
		}
		
		void Print()
		{
			printf("Interval<%d> = %d:%02d\n",id,min,sec);

		}

		//overloading + operator
		Interval operator+(const Interval& rhs)  const // not changing the values thats why const
		{
			return Interval(min + rhs.min,sec+rhs.sec);
		}


		//Interval operator+(
	private:
		int id,min,sec;
		static int count; // static field value is not stored in the instance

};

//allocating memory for static member variable
int Interval::count=0;
