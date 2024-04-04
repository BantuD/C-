#include<cstdio>
 
class Myclass1{
    private:
        int val1;
        int val2;

    public:
        void setVal1(int val){
            val1=val;
        }
        void setVal2(int val){
            val2=val;
        }
        int getVal1(){
            return val1;
        }
        int getVal2(){
            return val2;
        }
    
};

// class Myclass2{
//     private:
//         int val1;
//         int val2;

//     public:
//         void setVal1(int val){
//             val1=val;
//         }

//         void setVal2(int val){
//             val2=val;
        
//         }

//         int getVal1(){
//             return val1;
//         }

//         int getVal2(){
//             return val2;
//         }
    
// }

int main(void){
    Myclass1 m1; // Class 1
    m1.setVal1(10);
    m1.setVal2(20);


    Myclass1 m2; // Class 1
    m2.setVal1(0);
    m2.setVal2(0);

    m2=m1;
    
    m1.setVal1(20);
     printf("hello world %d  \n",m2.getVal1());


}