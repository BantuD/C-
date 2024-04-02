#include <cstdio>
Template<typename T>
T sum(T x,T y){

    return x+y;
}

int main(void){

    int k= sum<int>(3,4);
    printf("%d",k);
}