package folder1;

public class MathUtil {

    private int num1;
    private int num2;

    public MathUtil(int n, int m){
        num1 = n;
        num2 = m;
    }

    public int countPrime(){

        int count = 0;

        for(int i = num1; i < num2; i++){
            if(isPrime(i)){
                count++;
            }
        }
        return count;
    }

    private boolean isPrime(double n){
        if (n == 0 || n == 1){
            return false;
        }
        if (n == 2 || n == 3 || n == 5){
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0){
            return false;
        }
        for (double i = 5; i < n/2; i += 6){
            if (n%i==0){
                return false;
            }
        }
        return true;
    }

    public int add(){
        return num1 + num2;
    }

    public int subtract(){
        return num1 - num2;
    }

    public int multiply(){
        return num1 * num2;
    }
}
