import hr.*;
import sales.*;
class EmpEngine1 {
    public static void main(String[] args){
        //hr.Employee e1 = new hr.Employee(100,20.5);
        //sales.Employee e2 = new sales.Employee(100,20.5);
        //e2.setHours(200);
        //e2.setRate(25);
        // sales.Employee.setHours(200);
        // sales.Employee.setRate(25);
        new sales.Employee();
        System.out.println(sales.Employee.income());
        //System.out.println(sales.Employee.income());
    }
}