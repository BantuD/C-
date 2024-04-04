package folder1;

public class MathUtil {
    public static int countPrime(int n1, int n2){

        int count = 0;

        for(int i = n1; i < n2; i++){
            if(isPrime(i)){
                count++;
            }
        }
        return count;
    }

    private static boolean isPrime(double n){
        if (n == 0 || n == 1){
            return false;
        }
        if (n == 2 || n == 3 || n == 5){
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0){
            return false;
        }
        for (int i = 5; i < n/2; i += 6){
            if (n%i==0){
                return false;
            }
        }
        return true;
    }

    public static int add(int n1, int n2){
        return n1 + n2;
    }

    public static int subtract(int n1, int n2){
        return n1 - n2;
    }

    public static int multiply(int n1, int n2){
        return n1 * n2;
    }
}
