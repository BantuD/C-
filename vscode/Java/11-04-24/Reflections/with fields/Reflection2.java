import java.lang.reflect.Field;
import java.util.*;
record Student(String name,int age,String college){
        Student(String nm,int a){
        this(nm,a,null);
        }
}


public class Reflection2{
    static void printXml(Object obj) throws Exception
    {
        Class<?> c = obj.getClass();
        System.out.printf("<%s>%n",c.getName()); //Class Name
                
        for(Field f:c.getDeclaredFields()){
            f.setAccessible(true);
            System.out.printf("     <%s> ",f.getName());
            System.out.printf("%s",f.get(obj));
            System.out.printf("</%s>%n",f.getName());
        }
       System.out.printf("</%s>%n",c.getName()); //Class Name   
    }

    public static void main(String args[]){
        var li = new ArrayList<Student>();
        li.add(new Student("Rajul",22,"UPES"));
        li.add(new Student("Bantu",25,"IIT Bombay"));
        li.add(new Student("Ashwani",31,"MET IIT"));
        li.add(new Student("Benson",25,"IISER"));
        li.add(new Student("Veshnavi",50,"Bangalore IIT"));
        
        try{
            printXml(li.get(0));
        }catch(Exception e){
            System.out.println("Exception caught: "+e);
        }
    }
}