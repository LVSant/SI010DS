#ifndef POUPANCA_H
#define POUPANCA_H

/*
  Para herdar de uma classe, precisamos ter acesso a ela. Nesse caso,
  precisamos incluir o arquivo onde ela foi declarada.
 */
#include "account.h" 

/*
  A sintaxe para herdar de uma classe é bem simples, acrescentamos ":"
  e informamos o o nome da classe base. Podemos também colocar uma
  restrição na visibilidade dos membros que serão herdados. No nosso
  caso, não faremos nenhuma modificação na visibilidade desses
  membros.
 */
class Poupanca : public Account {  
  /*
    Neste exemplo, só precisamos adicionar um novo atributo, que é a
    taxa de rendimento da caderneta de poupança. Vamos assumir que
    isso muda de uma conta para outra.
   */
 private :
  double rate;
 public:
  // Construtor inicializa todos os atributos, herdados ou não:
  
  Poupanca(int accountNumber, double balance = 0.0, double rate = 0.0);
  double calculateExtraIncome(); // Computa o valor ganho por meio dos
				 // rendimentos.

  /*
    Na nossa classe mãe não havia um método chamado setAccountNumber,
    vamos criar um aqui para exemplificar que podemos acessar
    diretamente os atributos "protected".
   */
  void setAccountNumber(int);
};

#endif
