#include <iostream>
using namespace std;
class BankAccount {
    private:
        string accountNumber;
        string accountHolder;
        double balance;
    public:
        BankAccount(string accountNumber="", string accountHolder="", double balance=0.0) {
            this->accountNumber = accountNumber;
            this->accountHolder = accountHolder;
            this->balance = balance;
        }
        
        double getBalance() const {
            return balance;
        }

        string getAccountHolder() const {
            return accountHolder;
        }
};
int main() {
    BankAccount account1("PK45ABPA01234567890", "ELON MUSK", 1.2415E20);
    cout << "User " << account1.getAccountHolder() << " has balance: " << account1.getBalance() << endl;
    return 0;
}
