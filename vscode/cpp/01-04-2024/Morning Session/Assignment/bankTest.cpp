#include "classes.h"
#include <iostream>
using namespace std;
using namespace bank;

int main(void){
    PersonalLoan p1(10);
    p1.SetPeriod(10);

    cout << "EMI: " << p1.GetEMI() << endl;
    
}