namespace bank{

    class Taxable{
    public:
        virtual float GetTax()=0;

};

class Loan{
    private:
        double principle;
        float period;
    
    public:

        double GetPrinciple(){

            return principle;
        }

        void SetPrinciple(double  amount){
            this -> principle = amount;
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
        // virtual double getLimit()=0;

};

class PersonalLoan : public Loan
{

    public:

        float GetRate() 
            {
                return GetPrinciple() <= 500000 ? 0.15 : 0.16;
            } 

        float GetTax(){
                return GetPrinciple()>1000000?GetPrinciple()*0.05:0;
            }
        

};
class HomeLoan : public Loan
{
    private:
            int limit; 
    public:
                HomeLoan(){

                        limit = 1500000;

                }
         float GetRate() 
            {
               float rate = GetPrinciple()<= 20 ? 0.1 : 0.11;
               rate += GetPrinciple() >= limit ? 0.01 : 0;

                
                // return  GetPrinciple()<=20?0.1:.11;
                return rate;
            }
            
            // float GetTax(){

            //         return GetPrinciple()>(double)1400000?GetPrinciple()*0.03:0;
            //         return 0.0;

            // }
    
    };



// double HomeLoan::limit=1500000;

// class IncRateLoans{  //Asbstract Class
//     public:
//         virtual void setLimit()=0;
//         virtual double getLimit()=0;
    
//     private:
//         float limit;
// };

}
