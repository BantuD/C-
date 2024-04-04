
// class MyClass{

//     static private int i;
//     static private int j;

//     static void setI(int v1){
//         i=v1;
//     }
//     static void setJ(int v2){
//         j=v2;
//     }
//     static int getI(){
//         return i;
//     }
//     static int getJ(){
//         return j;
//     }

// }
// public class testPackages {
//     public static void main(String args[]){

//         MyClass.setI(10);
//         MyClass.setJ(20);
//         MyClass obj1 = new MyClass();
//         MyClass obj2 = new MyClass();
    
//         System.out.println("Value  of i: "+MyClass.getI());
//         System.out.println("value of j: "+MyClass.getJ());

//         System.out.println("Value  of i: "+MyClass.getI());
//         System.out.println("value of j: "+MyClass.getJ());



//     }
// }

import mypackages.*;

public class testPackages 
{  
    public static void main(String args[]){
        MathUtil.countPrimes(1,20);
    }
}