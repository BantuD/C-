public class Employee{
    private static double hours;
    private static double rate;

    public Employee(double h, double r){
        hours = h;
        rate = r;
    }
    public Employee(){
        this(100,20.5);
    }

    public double income(){
        return hours * rate;
    }
    public void setHours(double h) {
        hours = h;
    }

    public void setRate(double r){
        rate = r;
    }

    public static double getHours(){
        return hours;
    }
    public static double getRate(){
        return rate;
    }
}
