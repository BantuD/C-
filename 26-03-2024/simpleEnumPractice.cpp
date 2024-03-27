#include<cstdio>


enum COLOR {RED,BLACK,ORANGE};
class TellColor{
private:
    int color=0; // by default its 0

public:
    TellColor(COLOR var){
        color=var;
    }
    void setColor(COLOR var){
        
        this->color=var;
    }
    
    void displayColor(){
        
        printf("\n%d\n",color);
        switch(color){
          case COLOR::RED:
            printf("RED Color");
            break;
          case COLOR::BLACK:
            printf("Black Color");
            break;
          case COLOR::ORANGE:
            printf("Color is Orange");
            break;
          default:
            printf("No color");
        };
    }
    
};

int main()
{
    TellColor tc(COLOR::ORANGE);
    tc.displayColor();
    return 0;
}
