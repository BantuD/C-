package banking;

import exceptions.InsufficentFundsException;

final class SavingsAccount extends Account{
    
    static final double MIN_BAL = 5000;
    
    SavingsAccount(){
        balance = MIN_BAL;
    }

    public void deposit(double amount){
        balance += amount;
    }

    public void withdraw(double amount) throws InsufficentFundsException{
        if (balance - amount < MIN_BAL){
            throw new InsufficentFundsException();
        }
        balance -= amount;
    }
}
