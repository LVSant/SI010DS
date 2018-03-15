#include <iostream>
#include <cstddef> // Para usar o NULL
#include "account.h"
#include "hash.h"


/*
  O construtor já foi feito para você, apenas memorize a sintaxe de
  alocação de um array. Observe que a chamada "new Account[size]" vai
  gerar novos objetos Account
 */
Hash::Hash(int size) {
  MAX_ITEMS = size;
  cadastro  = new Account*[size];

  /*
     É sempre interessante garantir que os valores serão inicializados com NULL.
   */
  for (int i = 0; i < size; i++) {
    cadastro[i] = NULL;
  }
  length    = 0;
}

int Hash::getLength() const {
  return length;
}

void Hash::retrieveItem(Account& account, bool& found)
{
  int location = account.getHash(MAX_ITEMS);
   //obtendo valor do ponteiro
  // Account aux  = *cadastro[location];
  if (cadastro[location]==NULL) {
    found      = false;
  } else {
    found      = true;
    account    = *cadastro[location];
  }
}


/*
  Agora use explicitamente o copy constructor para colocar o elemento
  que veio por parâmetro na posição correta.
 */
void Hash::insertItem(Account account)
{
  int location = account.getHash(MAX_ITEMS);
  cadastro[location] =  new Account(account);
  length++;
  //nao usar &account
  //bugaria um `for` pois ao fazer &account uma posicao de memoria e alocada
}

void Hash::deleteItem(Account account)
{
  int location = account.getHash(MAX_ITEMS);
  delete cadastro[location];
  cadastro[location] = NULL;
  length--;
  // ToDo: implemente o método.
}


/*
  O método print já foi implementado para você.
 */
void Hash::print() const {
  std::cout << "INI" << std::endl;
  for (int i = 0; i < MAX_ITEMS; i++) {
    Account* acc = cadastro[i];
    if (acc != NULL) {
	std::cout << i << ":" << acc->getAccountNumber() <<", "  <<acc->getBalance() << std::endl;
      }
  }
  std::cout << "FIM" << std::endl;
}
