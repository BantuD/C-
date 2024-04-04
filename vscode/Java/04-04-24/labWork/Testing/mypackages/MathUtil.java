package mypackages;
public class MathUtil
{
   private static int number1;
   private static int number2;

   MathUtil(int n1,int n2){
    number1 = n1;
    number2=n2;
   }
   
    public static void countPrimes(int n1,int n2){
        number1=n1;
        number2=n2;
        boolean t=false;
        for(;number1<number2;number1++){
        
            if(number1==2 || number1==3 || number1==5){
                System.out.println(number1);
                continue;
            }
        
            if(number1%2==0 || number1%3==0 || number1%5==0){
                continue;
            }

            for(int i=5;i<=number1/2;i+=6){
                if(number1%i==0){
                    t=true;
                    break;
                }
                if(t)
                    break;
                    
                System.out.println(number1);
                
            }
            
        
        }
   }

}