#include "corrente.h"

Corrente::Corrente(int accountNumber,
		   double initialBalance,
		   double discount) : Account(accountNumber,
					initialBalance) {

  this->discount = ( discount < 0.0 ) ? 0.0 : discount;
}


void Corrente::setAccountNumber(int a){
		this->accountNumber = a;
}

void Corrente::credit(double amount) {
  Account::credit(amount);
	chargeFee();
}

void Corrente::debit(double amount) {
	Account::debit(amount);
	chargeFee();
}

void Corrente::chargeFee() {
	setBalance(getBalance() - this->discount);
}
