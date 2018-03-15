#include <iostream>
#include <iomanip>
#include "account.h"
using namespace std;


Account::Account(int no, double b) : accountNumber(no), balance(b) { }

/*
  Traga os métodos implementados na primeira aula para esta posição do
  código.
 */
 /*
   A função print também já está implementada.
  */
 void Account::print() const {
   cout << fixed << setprecision(2);
   cout << "A/C no: " << accountNumber << " Balance=R$" << balance << endl;
 }


 int Account::getAccountNumber() const {
   return accountNumber;
 }


 double Account::getBalance() const {
   return balance;
 }


 void Account::setBalance(double b) {
   this->balance = b;
 }

 /*
   Não esqueça que amount deve ser positivo.
  */

 void Account::credit(double amount) {
   if(amount <= 0){
     this->balance += amount;
   }
 }

 /*
   Não esqueça que a nossa conta corrente não pode ficar negativa.
  */
 void Account::debit(double amount) {
   if(balance >= amount){
     setBalance(balance-amount);
   }
 }

/*
  Implemente uma função de hash que apenas devolve um valor no
  intervalo 0 .. max_number.
 */
 int Account::getHash(int max_number) const{
  return accountNumber % max_number;
}


/*
  O construtor de cópia precisa apenas copiar os atributos.
 */
Account::Account(const Account &obj) {
    balance = obj.balance;
    accountNumber = obj.accountNumber;
}
