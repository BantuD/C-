namespace bank{

class Loan{
    private:
        double principle;
        float period;
    
    public:
        double GetPrinciple(){

            return principle;
        }
        void SetPrinciple(double  amount){
            this->principle=amount;
        }
        float GetPeriod(){
            return period;
        }
        void SetPeriod(float pr){
            this->period=pr;
        } 

        virtual float GetRate() = 0;

        double GetEMI(){                                                                                   
      
         return (principle*(1+ GetRate()*period/100 )/(12*period));
            
        } 


};

class PersonalLoan : public Loan
{

    public:

        float GetRate() 
            {
                return GetPrinciple()<=500000?0.15:0.16;
            } 
         

};
class HomeLoan : public Loan{

    public:
        
         float GetRate() 
            {
                return GetPrinciple()<=20?.1:.11;
            } 
    };
}
