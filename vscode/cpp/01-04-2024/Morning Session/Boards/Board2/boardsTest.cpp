#include <iostream>
#include "boards2.h"
using namespace std;

int main(void){
    RectangularBoard r1(25, 8);
    CircularBoard c1(12);
    cout << "Area of Rectangular Board: " << r1.Area() << endl;
    cout << "Area of Circular Board: " << c1.Area() << endl;
    DiscoBoard d1(26, 10);
    cout << "Area of Disco Board: " << d1.Area() << endl;
    cout << "Price of Disco Board: " << d1.Price() << endl;
}
