#include<iostream>
#include<string>

using namespace std;

class BankAccount
{
    private :
    int accountNumber;
    
    public :
    double balance;

    void setAccountNumber(int num){accountNumber = num;}
    int getAccountNumber(){return accountNumber;}
    double getBalance(){return balance;}

    void depositMoney()
    {
        double amount_d;
        cout<<"How much do you want to deposite :";
        cin>>amount_d;
        balance = balance + amount_d;
    }
    void withdraw()
    {
        double amount_w;
        cout<<"How much do you want to withdraw :";
        cin>>amount_w;
       balance = balance - amount_w;

    }
    void displayAccountInformation(){
        cout<<"Account Info :"<<"\n"
            <<"Account Number :"<<getAccountNumber()<<"\n"
            <<"Balance :"<<getBalance()<<endl;
    }
  
};
class SavingsAccount : public BankAccount
{
    private :
    float interestRate;
    
    public :   
    void setInterestRate(float rate){ interestRate = rate; }
    float getInterestRate(){ return interestRate; }
    float postInterestRate()
     { 
       float interest = balance*(getInterestRate()/100);
        return interest;
     }
     void withdraw()
     {
        double amount;
        cout<<"How much do you want to withdraw :";
        cin>>amount;
         balance = balance - amount;


    }
     void displayAccountInformation()
     {
        cout<<"Account Info :"<<"\n"
            <<"Account Number :"<<getAccountNumber()<<"\n"
            <<"Balance :"<<getBalance()<<endl;
    }
    
    

};
int main(){
    
  SavingsAccount sAcc;
    sAcc.setAccountNumber(123456);
    sAcc.setInterestRate(2.5);
    sAcc.balance = 650000;
    cout << "Balance        : " << sAcc.getBalance() << endl;
    cout << "Interest rate  : " << sAcc.getInterestRate() << endl;
    cout << "Interest       : " << sAcc.postInterestRate() << endl;
    cout << "Account number : " << sAcc.getAccountNumber() << endl;
    sAcc.withdraw();
    sAcc.displayAccountInformation();  
    sAcc.SavingsAccount::withdraw(); 
 
    return 0;
}