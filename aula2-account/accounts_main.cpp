/*
  Programa de testes para as classes de herança.
*/
#include <iostream>
#include <iomanip>

using namespace std;

#include "account.h"
#include "poupanca.h"
#include "corrente.h"

/*
  Arrays são estruturas de dados que contêm itens de dados de um mesmo
  tipo. Essas estruturas permanecem do mesmo tamanho desde o momento
  em que são criadas. Isso ocorre porque os arrays ocupam grupos
  consecutivos de região de memória. Para acessar um determinado
  grupo, basta o endereço inicial do array e o índice da posição que
  queremos.
 */

/*
  Neste curso, SEMPRE utilizaremos arrays de ponteiros por facilitar a
  implementação das estruturas de dados, ao invés de criar arrays de
  objetos. Este código exemplifica esse conceito criando um array de
  ponteiros para objetos Account. Note que podemos adicionar tanto
  instâncias de uma classe quanto instâncias de uma classe derivada.
 */

void printAccounts(Account** account, int size) {
  for (int i = 0; i < size; i++) {
    cout <<  "Numero " << account[i]->getAccountNumber() << endl;
  }
}


void debitAccounts(Account** account, int size, int debit) {
  for (int i = 0; i < size; i++) {
    account[i]->debit(size);
  }
}

void deleteAccounts(Account** account, int size){
  for(int i = 0; i < size; i++){
    delete account[i];
  }

    /*
    ToDo: invoque a palavra reservada delete para todos os objetos.
   */
}

int main() {
  int NUM_ACCOUNTS = 3;
  Account* accounts[NUM_ACCOUNTS];


  /*
    O código a seguir permite que se insira qualquer um dos tipos de
    conta corrente. Leia o código e entenda o que está acontecendo. No
    futuro, você irá escrever códigos parecidos.
   */
  cout << "Vamos adicionar "<<NUM_ACCOUNTS<<" contas" << endl;
  for (int i =0; i < NUM_ACCOUNTS; i++) {
    int tipo, numero, balance;

    cout << "Tipo: (0: account, 1: poupanca, 2: corrente): ";
    cin  >> tipo;
    cout << "Número: ";
    cin  >> numero;
    cout << "Valor Inicial: ";
    cin  >> balance;

    if (tipo == 1) {
      int rate;
      cout << "Taxa de Acréscimo: ";
      cin  >> rate;
      // Assim que se instancia.
      accounts[i] = new Poupanca(numero, balance, rate);
    } else if (tipo == 2) {
      int debito;
      cout << "Débito por Operação: ";
      cin  >> debito;
      // Assim que se instancia.
      accounts[i] = new Corrente(numero, balance, debito);
    } else {
      // Assim que se instancia.
      accounts[i] = new Account(numero, balance);
    }
    cout << endl;
  }

  printAccounts(accounts, NUM_ACCOUNTS);
  cout << endl << "APLICANDO DÉBITO: " << 30 << endl << endl;
  debitAccounts(accounts, NUM_ACCOUNTS, 30);
  printAccounts(accounts, NUM_ACCOUNTS);
  deleteAccounts(accounts, NUM_ACCOUNTS);

  return 0;
}


/*
  No arquivo account.h nós colocamos a palavra reservada "virtual" nos
  métodos debit e credit. O seu objetivo agora é executar este código
  com e sem esse palavra reservada para ver se resultados diferentes
  são obtidos.

  O motivo da diferença é que quando um método é chamado em um objeto
  da classe derivada a partir de um ponteiro da classe básica, o
  método da classe básica é derivada! Isso ocorre porque o binding
  ocorreu em tempo de compilação.

  Caso você coloque a palavra virtual, o binding muda para tempo de
  execução. Nesse caso, o método da classe derivada será chamado mesmo
  que o apontador seja um ponteiro para a classe básica.

  Em resumo, com funções virtuais:

     1 - O tipo do objeto para o qual se está apontando, não o tipo do
     handler, determina que versão de uma função virtual deve ser
     invocada.

     2 - Isso é conhecida como vinculação tardia (binding em tempo de
     execução).

     3 - Permite que o programa decida em tempo de execução (e não em
     tempo de compilação) que função deve ser usada.
 */
