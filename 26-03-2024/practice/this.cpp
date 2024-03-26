#include<cstdio>

class Banner{
	private: 
		int width=10;
		int hight=15;
	
	public:
		Banner(int width,int hight){
	//	this->width=width;
	//	this->hight=hight;
	
		width = this->width;
		hight = this->hight;	
		}


		void display(){
		
			printf("value of width: %d\n",width);
			printf("value of hight: %d\n",hight);
		
		}

};

class Banner2{
       private:
                int width=10;
                int hight=15;

        public:
                Banner(int width,int hight){
        //      this->width=width;
        //      this->hight=hight;

                width = this->width;
                hight = this->hight;
                }


                void display(){

                        printf("value of width: %d\n",width);
                        printf("value of hight: %d\n",hight);

                }

};


int main(void){
Banner B(3,5);
B.display();

}
