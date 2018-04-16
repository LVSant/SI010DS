#include <iostream>
#include "heap.h"
#include "account.h"

using namespace std;

int main() {
    Heap heap;
    heap.print();

    int numbers [7] = {12704, 31300, 1234, 49001, 52202, 65606, 91234};
    double balances[7] = {10, 100, 1000, 5, 15, 20, 25};

    //    int numbers [7] = {12704, 31300, 1234, 49001, 52202, 65606, 91234};
    //    double balances[7] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 7; i++) {
        Account* account = new Account(numbers[i], balances[i]);
        heap.enqueue(account);
    }

    heap.print();

    cout << "------------------------------" << endl;

    /*
      Vamos agora obter a conta que está no topo. Essa é a conta
      corrente com mais dinheiro.
     */
    Account* account1 = heap.dequeue();
    cout << account1->getAccountNumber() << " -> " << account1->getBalance() << endl;
    cout << "------------------------------" << endl;
    heap.print();

    Account* account2 = heap.dequeue();
    cout << account2->getAccountNumber() << " -> " << account2->getBalance() << endl;
    cout << "------------------------------" << endl;
    heap.print();
    cout << "Fim Original" << endl;
}