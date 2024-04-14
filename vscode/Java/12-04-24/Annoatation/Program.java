import mypackage.*;
import java.lang.annotation.*;
import java.lang.reflect.*;
class AnnotationDemo{
   
   @MyAnnotation
   public int x = 5;

   @MyAnnotation
    public void testLife(){
       
        
    
       
        System.out.println("Programming Life");

    }

    public void display(){
        System.out.println("See this world");
    }
}
public class Program{
    
    
    public static void main(String args[]) throws Exception{
        Object obj = new AnnotationDemo();
       Class<?> c = obj.getClass();
        System.out.println(c.getName());
        Method[] m = c.getMethods();
        Method nm=null;
        for(Method i:m){
            if(i.getName().equals("testLife")){
                 nm = c.getMethod(i.getName());
                break;
            }
        }
        MyAnnotation ma = null;
         if(nm.isAnnotationPresent(MyAnnotation.class))
             {
                System.out.println("Hello world");
                ma = nm.getAnnotation(MyAnnotation.class);
             }
             System.out.println(ma.value());
        

    }
}