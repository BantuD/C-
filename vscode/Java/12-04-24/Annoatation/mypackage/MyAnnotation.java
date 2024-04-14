import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target({ElementType.METHOD,ElementType.FIELD})
public @interface MyAnnotation{
    
    int value() default 1;
    String name() default "Rajul";
}