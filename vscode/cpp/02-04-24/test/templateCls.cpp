#include <iostream>
#include "classes.h"
using namespace bank;
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
            cout<<"Value of second  : "<< second.GetRate() <<endl;
        }
    private:
    
        int first;
        T second;
};

int main(void){

// TestingPerson<int, int>T1(12, 12);
// T1.display();

HomeLoan h;
h.SetPeriod(12);
h.SetPrinciple(120000);

TestingPerson<int, HomeLoan>T(h);
T.display();

}