#include<iostream>

using namespace std;
class Selector
{
    public:
        Selector(int s,int f):first(s),second(f)
        {

        }


    void display(){
        cout<<"value of first: "<<first<<endl;
        cout<<"value of second: "<<second<<endl;
    }
    private:
        int first;
        int second; 
};

int main(){

    Selector s(2,4);
    s.display();

}
