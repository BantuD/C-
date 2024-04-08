import taxation.*;

class Program {
    
    static class Auditor {
    
        public Auditor() {
            System.out.println("Auditor: acquiring files....");
        }

        public void audit(String id, TaxPayer person){
            if(id.length() < 4){
                throw new IllegalArgumentException("Invalid Id");
            }
            double payment = person.incomeTax() + 500;
            System.out.println("Total Tax Payment: " + payment);
        }
    }
}
