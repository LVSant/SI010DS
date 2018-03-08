/*
  Programa de testes para as classes de herança.
*/
#include <iostream>
#include <iomanip>

using namespace std;

#include "account.h" 
#include "poupanca.h" 
#include "corrente.h" 

int main() {
  Account  account1( 50.0      ) ; // Cria uma conta genérica
  Poupanca account2( 25.0, .03 ) ; // Cria uma conta corrente
  Corrente account3( 80.0, 1.0 ) ; // Cria uma conta poupança

  cout << fixed << setprecision( 2 );

  cout << "Valor de entrada para cada objeto"    << endl;
  cout << "account1: $" << account1.getBalance() << endl;
  cout << "account2: $" << account2.getBalance() << endl;
  cout << "account3: $" << account3.getBalance() << endl;

  cout << "\n Débito de $25.00 de account1." << endl;
  account1.debit( 25.0 ); 
  cout << "\n Débito de $30.00 de account2." << endl;
  account2.debit( 30.0 ); 
  cout << "\n Débito de $40.00 de account3." << endl;
  account3.debit( 40.0 ); 

  cout << "\naccount1: $" << account1.getBalance() << endl;
  cout << "account2: $"   << account2.getBalance() << endl;
  cout << "account3: $"   << account3.getBalance() << endl;

  cout << "\nCrédito de $40.00 para account1." << endl;
  account1.credit( 40.0 ); 
  cout << "\nCrédito de $65.00 para account2." << endl;
  account2.credit( 65.0 ); 
  cout << "\nCrédito de $20.00 para account3." << endl;
  account3.credit( 20.0 ); 

  cout << "\naccount1: $" << account1.getBalance() << endl;
  cout << "account2: $"   << account2.getBalance() << endl;
  cout << "account3: $"   << account3.getBalance() << endl;

  double earned = account2.calculateExtraIncome();
  cout << "\nAdicionando $" << earned << " de renda em account2." << endl;
  account2.credit( earned );
  cout << "\naccount2: $" << account2.getBalance() << endl;
  return 0;
} 
