
import java.lang.Class;
import java.lang.reflect.*;
import java.lang.Exception;
public class Program{
    public static void reflecta(String className,String methodName) throws Exception {
        Class<?> c = Class.forName("bank.Employee"); // will search for class_name instance in Class method area
        
        // //Now we need to create the object of this class for this we need to call the constructor first then invoke newInstance()
        // //Parameter_less constructor we're calling now
         Object obj = c.getConstructor().newInstance();

        // //Now get the method object of the given name and parameters
         Method m =c.getMethod(methodName,int.class,int.class);
         double result = (double)m.invoke(obj,500000,5);
         System.out.println(result);
    }
    public static void main(String ars[]) throws Exception
    {
        reflecta("PersonalLoan","comm");
    }
}