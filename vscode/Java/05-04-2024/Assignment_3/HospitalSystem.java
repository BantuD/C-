import java.lang.*;
import hospital.BedOptions;
import hospital.InHousePatient;
import hospital.Patient;
import java.util.*;


public class HospitalSystem{
    public static  Scanner sc = new Scanner(System.in);

    static Patient patientSelection(Patient patientType){
        String name;
        int days;
        BedOptions bed;
        
        System.out.println("\n***********Enter the name of the patient:************");
        // name = sc.next();
        name = sc.next();
        System.out.println("***************Enter The Days************");
        System.out.print(">>");
        days = sc.nextInt();
        
        System.out.println("*********Select Bed Type*************");
        System.out.println("1.ECONOMICAL \n2.SPECIAL \n3.EXECUTIVE");
        System.out.print(">>");
        int temp = sc.nextInt();
        switch (temp) {
            case 1:
                patientType.setBed(BedOptions.ECONOMICAL);
                break;
            case 2:
                patientType.setBed(BedOptions.SPECIAL);
                break;
            case 3:
                patientType.setBed(BedOptions.EXECUTIVE);
            default:
                System.exit(0);
                break;
        }
        return patientType;
    }
    public static void main(String args[]){

        System.out.println("Please Select the patient Type: \n(1).Noraml Patient\n(2). In House Patient");
        System.out.print(">>");
        int opt = sc.nextInt();
        Patient obj=null;
        switch (opt) {
            case 1:
                obj = patientSelection(new Patient());
                System.out.println("Executed case 1");
                break;
            case 2:
                obj = patientSelection(new InHousePatient());
                System.out.println("Executed case 1");
            default:
                break;
        }
        System.out.println("**********Details of the patient***********");
        System.out.print("Name: "+obj.getName());

        // var p = new InHousePatient();
        // p.setName("Benson");
        // p.setBed(BedOptions.SPECIAL);
        // System.out.println(p.getId());
        // System.out.println(p.getBedType());
    

    }

    
}