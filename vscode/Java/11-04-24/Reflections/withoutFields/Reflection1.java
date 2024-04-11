import java.util.*;
import java.lang.reflect.Field;
import java.lang.Exception;
record Student(String name,int age,String college){
    Student(String nm,int a){
        this(nm,a,null);
    }
};
public class Reflection1{
    static void xmpPrint(Object obj)throws NullPointerException{
        Class<?> c = obj.getClass(); 
        System.out.printf("<%s>%n",c.getName());
        for(Field i : c.getDeclaredFields()){
            System.out.printf(" <%s>",i.getName());
            System.out.printf(" </%s>",i.getName());
            System.out.println();
        }
    }
    public static void main(String args[]){
        var S = new Student("Rajul",22,"hello");
        var li = new ArrayList<Student>();
        li.add(new Student("Rajul",22,"UPES"));
        li.add(new Student("Bantu",25,"IIT Bombay"));
        li.add(new Student("Ashwani",31,"MET IIT"));
        li.add(new Student("Benson",25,"IISER"));
        li.add(new Student("Veshnavi",50));
        try{
        xmpPrint(S);
        }
        catch(Exception e){
            System.out.println("Exception encountered");
        }
    }

}