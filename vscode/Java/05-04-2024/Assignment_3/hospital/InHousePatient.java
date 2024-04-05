package hospital;

public class InHousePatient extends Patient {
    //Overridding GetBillAmount Method
    public double getBillAmount(){
        double billAmount = super.getBillAmount();
        if(super.getBillAmount()>5000){
                return billAmount-(billAmount*0.05);
            }
        return billAmount;
    }
}
