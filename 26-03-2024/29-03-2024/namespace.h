namespace Series
{
	class Sequence
	{
		public:
		
		virtual double Next() = 0;
		// equal to Zero means its pure virtual
		
		protected:
			double current:
	
	};
	
	//A class derived from an ADT must override pure virtual function
	class LinearSequence : public Sequence
	{
		public:
			LinearSequence(double, double);
			double Next();
		private:
			double step;

	
	};

	class PowerSequence : public Sequence{
	

		public: 
		       
			PowerSequence(double, double);
	       	       	double Next();

		private:
			double step;	

	};

}

// By the second law of 
