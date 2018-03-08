/*
  Herança permite que desenvolvedores criem classes derivadas para
  reutilizar código presente na classe base. Nesse caso, evita-se que
  uma mesma funcionalidade seja duplicada em várias classes indicando
  que uma classe deve "herdar" código de outra. Isso economiza tempo e
  previne a propagação de erros, o que facilita a manutenção do
  código, dado que um possível erro ficará concentrado em apenas um
  lugar.
 */


/*
  A classe Account modela uma conta corrente. Ela já foi vista na aula
  anterior. Vamos supor nesta aula que o nosso banco possui outros
  tipos de conta para podermos usar herança.
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
/*
  Membros privados estão escondidos na classe onde foram criados e são
  acessíveis fora dela por meio dos métodos públicos ou protegidos. O
  acesso "protegido" permite que classes derivadas (apenas as
  derivadas) manipulem um membro sem a necessidade de acessar os
  métodos da classe base.  

  Se um membro da classe base é privado, então as classes derivadas
  precisarão acessá-los por intermédio dos membros públicos. O
  programador deve decidir o custo-benefício e encontrar um
  compromisso entre:

  1 - Deixar o membro privado, forçando a escrita de códigos menos
  enxutos na classe derivada, além de uma pequena perda de desempenho
  com as chamadas de função.

  2 - Deixar o membro protegido, permitindo a perda de consistência,
  caso a classe derivada inadvertidamente faça (ou deixe de fazer)
  alguma operação.
 */  
 private:
  double balance;

 protected :
  int accountNumber;
  
 public:
  Account(int accountNumber = 0.0, double balance = 0.0);
  int getAccountNumber() const;
  double getBalance() const;
  void setBalance(double balance);
  void credit(double amount);
  void debit(double amount);
  void print() const;
};

#endif

/*
  A sua implementação feita na aula anterior deve funcionar na aula de
  hoje.
 */
