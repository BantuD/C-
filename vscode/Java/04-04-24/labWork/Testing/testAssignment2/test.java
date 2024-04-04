import folder1.*;

public class test {
    public static void main(String[] args){

        MathUtil m1 = new MathUtil(24, 46);

        System.out.println("Total Number of Primes: " + m1.countPrime());
        System.out.println("Addition is: " + m1.add());
        System.out.println("Subtraction is: " + m1.subtract());
        System.out.println("Multiplication is: " + m1.multiply());
    }
}
