#include <iostream>
#include <stdexcept>

class Account //base Class
{
protected:
    double accountBalance;

public:
    Account(double);
    ~Account();
    void setAcountBalance(double);
    double getAcountBalance();
    void Credit(double );
    bool Debit(double );
    double getBalance();
};

class SavingsAccount : public Account //derived class 1
{
private:
    double interestRate;

public:
    SavingsAccount(double , double );
    ~SavingsAccount();
    void setIterestRate(double );
    double getInterestRate();
    double calculateInterest();

};

class CheckingAccount : public Account //derived class 2
{
private:
    double feePerTransaction;

public:
    CheckingAccount(double, double);
    ~CheckingAccount();
    void setFeePerTransaction(double);
    double getFeePerTransaction();
    void Credit(double );
    bool Debit(double );
};

int main()
{
    Account Account1(34002.2);
    SavingsAccount SavingAccount1(43534.4, 453.2);
    CheckingAccount CheckingAccount1(78236.2, 322);

    std::cout << "Checking All member Functions." << std::endl;
    Account1.Credit(123.2);
    std::cout << "Interest rate is : " << SavingAccount1.calculateInterest() << std::endl;
    SavingAccount1.Credit(3122.1);
    Account1.Debit(3232.2);

    std::cout << std::endl;

    std::cout << "Getter Functions when constructor is initilized." << std::endl;
    std::cout << "Account Balance : " << Account1.getAcountBalance() << std::endl;
    std::cout << "Interest Rate : " << SavingAccount1.getInterestRate() << std::endl;
    std::cout << "Fee per Transaction : " << CheckingAccount1.getFeePerTransaction() << std::endl;

    std::cout << std::endl;

    std::cout << "Getter Functions when passing values to setter functions." << std::endl;
    Account1.setAcountBalance(1234.1);
    SavingAccount1.setAcountBalance(1344.2);
    //SavingAccount1.setInterestRate(424.3);
    CheckingAccount1.setFeePerTransaction(313.2);

    std::cout << std::endl;

    std::cout << Account1.getAcountBalance() << std::endl;
    std::cout << SavingAccount1.getAcountBalance() << std::endl;
    std::cout << SavingAccount1.calculateInterest() << std::endl;
    std::cout << CheckingAccount1.getFeePerTransaction() << std::endl;


    return 0;
}

//definition of Base Class
Account::Account(double AB)
{
    if (accountBalance >= 0)
    {
        accountBalance = AB;
    }
    else
    {
        std::cout << "Iitial Balance was Invalid..." << std::endl;
    }
}

Account::~Account()
{
}

void Account::setAcountBalance(double AB)
{
    if (accountBalance >= 0.0)
    {
        accountBalance = AB;
    }
    else
    {
        std::cout << "Iitial Balance was Invalid..." << std::endl;
    }
}

double Account::getAcountBalance()
{
    return accountBalance;
}

void Account::Credit(double credit)
{
    if(credit >= 0.0)
    {
        accountBalance += credit;
        std::cout << "Balance After Credit is : " << accountBalance << std::endl;
    }
    else
    {
        std::cout << "Invalid Amount." << std::endl;
    }
}

bool Account::Debit(double debit)
{
    if(accountBalance > debit)
    {
        accountBalance -= debit;
        std::cout << "Balance After Dedit is : " << debit << std::endl;
        return true;
    }
    else
    {
        std::cout << "Insufficient Balance..." << std::endl;
        std::cout << "Available Balance is : " << getAcountBalance() << std::endl;
        return false;
    }
}

double Account::getBalance()
{
    return getBalance();
}


//Derived Class 1
SavingsAccount::SavingsAccount(double AB, double IR)
:Account(AB)
{
    if (IR >= 0)
    {
        interestRate = IR;
    }
    else
    {
        std::cout << "Enter correct Interest rate...!" << std::endl;
    }
}

SavingsAccount::~SavingsAccount()
{
}

void SavingsAccount::setIterestRate(double IR)
{
    if (IR >= 0)
    {
        interestRate = IR;
    }
    else
    {
        std::cout << "Enter correct Interest rate...!" << std::endl;
    }
}

double SavingsAccount::getInterestRate()
{
    return interestRate;
}

double SavingsAccount::calculateInterest()
{
    return getInterestRate() * getAcountBalance();
}


//Derived Class 2
CheckingAccount::CheckingAccount(double AB, double fee)
    : Account(AB)
{
    if (fee >= 0)
    {
        feePerTransaction = fee;
    }
    else
    {
        std::cout << "Invalid Ammount..." << std::endl;
        std::cout << "Enter correct Amount." << std::endl;
    }
}

CheckingAccount::~CheckingAccount()
{
}

void CheckingAccount::setFeePerTransaction(double fee)
{
    if (fee >= 0)
    {
        feePerTransaction = fee;
    }
    else
    {
        std::cout << "Invalid Ammount..." << std::endl;
        std::cout << "Enter correct Amount." << std::endl;
    }
}
double CheckingAccount::getFeePerTransaction()
{
    return feePerTransaction;
}

void CheckingAccount::Credit(double credit)
{
    if(credit >= 0.0)
    {
        Account::Credit(credit - feePerTransaction);
    }
    else
    {
        std::cout << "Invalid Amount." << std::endl;
    }
}

bool CheckingAccount::Debit(double debit)
{
    if(accountBalance > debit)
    {
        accountBalance -= debit;
        std::cout << "Balance After Dedit is : " << debit << std::endl;
        return true;
    }
    else
    {
        std::cout << "Insufficient Balance..." << std::endl;
        std::cout << "Available Balance is : " << getAcountBalance() << std::endl;
        return false;
    }
}


