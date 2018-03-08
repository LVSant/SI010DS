#include "poupanca.h"

  /*
    Aqui nós estamos usando o construtor da classe mão para
    inicializar tanto o número da conta quanto valor em dinheiro que
    lá existia. A sintaxe para inicializar a base class é mostrada
    abaixo. Observe que você é obrigado a invocar o construtor da
    BaseClass, a não ser que esta tenha algum construtor default sem
    parâmetros.
  */

Poupanca::Poupanca(int accountNumber,
		   double initialBalance,
		   double rate) : Account(accountNumber, initialBalance)

{
  /*
    Abaixo, estamos configurando a taxa. Se o usuário inserir algum
    valor negativo nesse parâmetro, então vamos atribuir zero. Observe
    atentamente a sintaxe desse if-then-else resumido.
   */
  this->rate = ( rate < 0.0 ) ? 0.0 : rate;
}


/*
  Implemente a função abaixo. Lembre que não podemos acessar
  diretamente os atributos privados da classe base.
 */
double Poupanca::calculateExtraIncome()
{
  // ToDo: implemente o corpo deste método.
} 

/*
  O atributo "accountNumber" tem acessibilidade protected. Nesse caso,
  podemos acessar diretamente.
 */
void Poupanca::setAccountNumber(int a){
  // ToDo: implemente o corpo deste método.
}
