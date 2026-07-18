# include <iostream>
# include <string>

void showBalance(double balance);
double deposit(double &balance, double amount);
double withdraw(double &balance, double amount);

int main(){
    double balance = 1000.0;
    showBalance(balance);
    balance = deposit(balance, 500.0);
    showBalance(balance);
    balance = withdraw(balance, 200.0);
    showBalance(balance);
    return 0;
}

void showBalance(double balance) {
    std::cout << "Current balance: $" << balance << std::endl;
} 

double deposit(double &balance, double amount) {
    balance += amount;
    std::cout << "Deposited: $" << amount << std::endl;
    return balance;
}

double withdraw(double &balance, double amount) {
    if (balance >= amount) {
        balance -= amount;
        std::cout << "Withdrew: $" << amount << std::endl;
    } else {
        std::cout << "Insufficient funds." << std::endl;
    }
    return balance;
}