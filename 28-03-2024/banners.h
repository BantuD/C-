#include<cstdio>

enum Geometry {Rectangular, Triangular, Elliptical};

class Banner
{		
		public:

		Banner()
		{
			width=20;
			height=5;
			triangular=false;
			shape = Geometry::Rectangular;
		}
		
	void Resize(float w, float h)
		{
			width=w; //this[0].width = w;
			height=h; // this[0].height = h;
		}

		void Triangulate(bool yes)
		{
			shape = yes ? Geometry::Triangular : Geometry::Rectangular;
		}

		
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


class HardBanner : public Banner
{
	public:
	 	//the derived class constructor must caall a constructor of the base class so that
		//inherited fields are properly initialized      
		HardBanner(float length,float bradth, float hardness) : Banner(length,breadth){
		
		
			thickness = hardness;
		}

		double Price() const
		{
		
			return Banner::Price()*(1+0.5*thickness);
		
		}

	private: float thickness;

};


		 
