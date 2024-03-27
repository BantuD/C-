#include<cstdio>

enum Geometry {Rectangular, Triangular, Elliptical};

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
		
		
		//* this is default constructor also
		Banner()
		{
			width=20;
			height=5;
			triangular=false;
			shape = Geometry::Rectangular;
		}
		//Banner::Resize(Banner* this, float w,float h)
		
	void Resize(float w, float h)
		{
			width=w; //this[0].width = w;
			height=h; // this[0].height = h;
		}

		void Triangulate(bool yes)
		{
			shape = yes ? Geometry::Triangular : Geometry::Rectangular;
		   //	printf("the value of shape is: %d",shape);
		}
		// a const method does not change the state of the
		// object on which it is called i.e it treats the instance addressed 

		//by this argument as read-only
		
		void reshape(Geometry g){
			
			shape = g;
		}
		double Price()  const

		
		{	
			
			//float k=triangular ? 0.5 : 1.0;
			float rate=width <= height?0.75:0.80;

			float k;

			switch(shape)
			{
				case Geometry::Triangular:
					k=0.5;
					break;
				case Geometry:: Elliptical:
					k=0.785;
					break;
				default:
					k=1.0;
			};

			return k*width*height*rate;
		}

	


	private:   // will not be visible out side of the class
		
		float width,height;  // now no one can interact with 
				     // these because they are private
				     // we hide them from the others
		bool triangular;
		Geometry shape;
		


};
