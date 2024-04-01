#include <cstdio>
class Employee
{
    public:
        virtual void  display1() const = 0;

};

class Agent
{
    public:
        virtual void display2() const = 0;

};

class SalesPerson : public Employee,public Agent
{

    public:
        void display1() const{
            printf("Printing from display-1");
        }
        void display2() const{
            printf("Printing from display-2");
        }
        void display3(){
            printf("Printing from display-3");
        }
    private:
        int k=0;
};