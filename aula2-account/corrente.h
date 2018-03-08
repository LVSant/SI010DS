#ifndef CORRENTE_H
#define CORRENTE_H
/*
  Para herdar de uma classe, precisamos ter acesso a ela. Nesse caso,
  precisamos incluir o arquivo onde ela foi declarada.
 */
#include "account.h" 


class Corrente : public Account {  
  /*
    Neste exemplo, só precisamos adicionar um novo atributo, que é o
    desconto por cada operação. Vamos assumir que isso muda de uma
    conta para outra.
   */
 private :
  double discount;
  void chargeFee(); // Um método privado. Esse método deve ser
		    // acionado sempre que o usuário fizer uma
		    // operação.
 public:
  // Construtor inicializa todos os atributos, herdados ou não:
  Corrente(int accountNumber, double balance = 0.0, double discount = 0.0);

  /*
    Nesta classe, vamos redefinir alguns métodos da classe mãe.
   */
  void credit(double amount);
  void debit(double amount);   
  
  /*
    Na nossa classe mãe não havia um método chamado setAccountNumber,
    vamos criar um aqui para exemplificar que podemos acessar
    diretamente os atributos "protected".
   */
  void setAccountNumber(int);
};

#endif
