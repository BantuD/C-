#include <iostream>
using namespace std;

template<typename T, typename J>
class TestingPerson
{
    public:
        TestingPerson(const T& f,const J& s):first(f),second(s)
        {

        }

        void display(){
            cout<<"Value of first: "<<first<<endl;
            cout<<"Value of second: "<<second<<endl;
        }
    private:
        T first;
        J second;
};


template<typename T>
class TestingPerson<int, T>
{
    public:
        TestingPerson(const T& s): second(s)
        {
            static int c;
            first = ++c;
        }

        void display() const
        {
            cout<<"Value of first   : "<< first <<endl;
            cout<<"Value of second  : "<< second.getValue() <<endl;
        }
    private:
    
        int first;
        T second;
};


class myClass{
    private:
        int value;
    
    public:
        void setValue(int val){
            this->value=val;
        }
        virtual int getValue() const{
            return this->value;
        }
};

int main(){

myClass m;
// myClass2 m2;
m.setValue(10);

// m2.setValue(20);

// TestingPerson<int, int>T1(12, 12);
// T1.display();

TestingPerson<int, myClass>yy(m);
yy.display();
//TestingPerson<myClass1,myClass2> T1 (m1,m1); -> will give you error


// TestingPerson<myClass2> T2 (123,m2); // Partial Specialization templating 
// T2.display();
}