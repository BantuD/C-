import banking.*;
import exceptions.IllegalTransferException;
import exceptions.InsufficentFundsException;

public class BankProgram {
    public static void main(String[] args){
        var Rajul = banker.OpenCurrentAccount();
        Rajul.deposit(20000);
        var Benson = banker.OpenSavingsAccount();
        Benson.deposit(25000);

        try{
            Benson.transfer(31000, Rajul);
            System.out.println("Transfer Successful...!!!");
        }
        catch(IllegalTransferException e){
            System.out.println("Transfer failed due to both Account being Same...!!");
        }
        catch(InsufficentFundsException e){
            System.out.println("Transfer Failed due to Insufficient Funds...!!");
        }
        catch(Exception e){
            System.out.println("Something is wrong -> " + e);
        }
    }
}
