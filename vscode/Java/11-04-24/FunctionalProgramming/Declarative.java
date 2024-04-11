import java.util.List;
import java.util.ArrayList;
record Student(String name,int age,String college){}
public class Declarative{

    public static void main(String args[]){
        List<Student> li = new ArrayList<>();
        li.add(new Student("Rajul",22,"UPES"));
        li.add(new Student("Bantu",25,"IIT Bombay"));
        li.add(new Student("Ashwani",31,"MET IIT"));
        li.add(new Student("Benson",25,"IISER"));
        li.add(new Student("Veshnavi",50,"BangloreUNI"));

        li.stream().filter(s->s.age()>30).map(s->s.name()).forEach(System.out::println);
    }

}