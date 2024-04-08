package taxation;

public interface TaxPayer {
    double annualIncome();

    default double incomeTax(){
        double amount = annualIncome();
        return amount > 120000 ? 0.15 * (amount - 120000) : 0;
    }
}
