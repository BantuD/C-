#include "classes.h"
using namespace MyClasses;

void dynamo(Parent1 *ptr1){

    ptr1->displayNames();

}

int main(void){

    Child1 ch1;
    dynamo(&ch1);

}