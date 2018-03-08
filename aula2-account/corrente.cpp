#include "corrente.h"

  /*
    Aqui nós estamos usando o construtor da classe mão para
    inicializar tanto o número da conta quanto valor em dinheiro que
    lá existia. A sintaxe para inicializar a base class é mostrada
    abaixo. Observe que você é obrigado a invocar o construtor da
    BaseClass, a não ser que esta tenha algum construtor default sem
    parâmetros.
  */
Corrente::Corrente(int accountNumber,
		   double initialBalance,
		   double discount) : Account(accountNumber,
					initialBalance) {
  /*
    Abaixo, estamos configurando a taxa a ser cobrada por
    transação. Se o usuário inserir algum valor negativo nesse
    parâmetro, então vamos atribuir zero. Observe atentamente a
    sintaxe desse if-then-else resumido.
  */
  this->discount = ( discount < 0.0 ) ? 0.0 : discount;
}



/*
  O atributo "accountNumber" tem acessibilidade protected. Nesse caso,
  podemos acessar diretamente.
*/
void Corrente::setAccountNumber(int){
  // ToDo: implemente o corpo deste método.
}

/*
  As funções abaixo já existiam na classe mãe! Estamos sobrescrevendo
  essas funções. Eu já escrevi a primeira linha de código do método
  "credit", escreva a segunda.  Sobre o método "debit", faça sozinho.
*/

void Corrente::credit(double amount) {
  /*
    A primeira linha de código está invocando o método "credit" da
    classe mãe.
   */
  Account::credit(amount);
  // ToDo: implemente o método
}

/*
  Não esqueça que a nossa conta corrente não pode ficar negativa. 
*/
void Corrente::debit(double amount) {
  // ToDo: implemente o método
}


/*
  Implemente a função abaixo. Esta função realiza um débito nos
  atributos locais.
*/
void Corrente::chargeFee()
{
  // ToDo: implemente o corpo deste método.
} 
