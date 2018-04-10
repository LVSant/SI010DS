/* 
 * File:   account.cpp
 * Author: devl
 * 
 * Created on March 28, 2018, 9:33 PM
 */

#include <iostream>
#include "account.h"

int Account::getAccountNumber() const {
    return accountNumber;
}

double Account::getBalance() const {
    return balance;
}

void Account::setBalance(double b) {
    this->balance = b;
}

void Account::credit(double amount) {
    if (amount <= 0) {
        this->balance += amount;
    }
}

void Account::debit(double amount) {
    if (balance >= amount) {
        setBalance(balance - amount);
    }
}

Account::Account(const Account &obj) {
    balance = obj.balance;
    accountNumber = obj.accountNumber;
}

int Account::getPriority() const {
    return balance;
}

//void Account::toString() const {
//    std::cout << " AccountNumber: " << accountNumber << " Balance: " << balance << std::endl;
//}

Account::Account(int accountNumber, double balance) {
    this->accountNumber = accountNumber;
    this->balance = balance;
}


