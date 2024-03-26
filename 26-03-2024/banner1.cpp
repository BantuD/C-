class Banner
{
	public:  // access control block 
		//Constructor of a class initializes its new instance.
		//it is a function  whose name matches with the name of
		//the class
		//and it is declared without a return type
		//A constructor declared without any parameter or all
		//optional 
		//parameters is called a default constructor and such 
		//a constructor is automatically defined for a class 
		//which does not explicityly define any constructor 
		Banner()
		{
			width=20;
			height=5;
			triangular=false;
		}
	

	private:   // will not be visible out side of the class
		
		float widht,height;  // now no one can interact with 
				     // these because they are private
				     // we hide them from the others
		bool triangular;



}
