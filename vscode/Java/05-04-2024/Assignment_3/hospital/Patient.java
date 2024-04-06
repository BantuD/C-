package hospital;
public class Patient{
   
    //States
    private static int patientId = 0;
    private String patientName;
    private BedOptions bedType;
    private int noOfDays;

    //Constructor
    public Patient(){
        patientId += 1;
    }
    //Setters
    public void setName(String str){
      
        patientName=str;
    }
    public void setDays(int d){
        noOfDays=d;
    }
    public void setBed(BedOptions bt ){

        switch (bt) {
            case ECONOMICAL:
                bedType = BedOptions.ECONOMICAL;
                break;
            case SPECIAL:
                bedType = BedOptions.SPECIAL;
                break;
            case EXECUTIVE:
                bedType = BedOptions.EXECUTIVE;
            default:
                System.exit(0);
                break;
        }
    }

    //Getters
    public static int getId(){
        return patientId;
    } 
    public String getName(){
        return patientName;
    }
    public BedOptions getBedType(){
        return bedType;
    }

    public double getPricePerDay(){
        switch(getBedType()){
            case ECONOMICAL:
                return Double.valueOf(500);
            case SPECIAL:
                return Double.valueOf(350);
            case EXECUTIVE:
                return Double.valueOf(200);
            default:
                System.exit(0);
        }

        return Double.valueOf(0);
    }

    public int getDays(){
        return noOfDays;
    }

    public double getBillAmount(){

        return getDays()*getPricePerDay();
    }

}

