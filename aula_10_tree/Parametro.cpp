//#include <iostream>
//
//using namespace std;
//
//void pass_by_value(int* p) {
//    // Alocaremos uma nova região de memória e colocaremos o endereço na
//    // variável "p". Fora dessa função, o parâmetro continuará apontando
//    // para o endereço antigo.
//    p = new int;
//    *p = 7;
//}
//
//void pass_by_value_and_changing_pointed_location(int* p) {
//    // Não estamos alocando memória, estamos apenas alterando o inteiro
//    // que está na posição de memória para onde "p" está apontando.
//    *p = 8;
//}
//
//void pass_by_reference(int*& p) {
//    // Alocaremos uma nova região de memória e colocaremos o endereço na
//    // variável "p". Como o parâmetro foi passado por referência, fora
//    // da função o ponteiro apontará para a nova posição que foi alocada
//    // dentro desta função.
//    p = new int;
//    *p = 9;
//}
//
//int main() {
//    int a = 1;
//    int b = 2;
//    int c = 3;
//
//    int* p1 = &a;
//    int* p2 = &b;
//    int *p3 = &c;
//
//    cout << "Enderecos Antes:  " << p1 << "  " << p2 << "  " << p3 << endl;
//    cout << "Valores   Antes:  " << *p1 << "  " << *p2 << "  " << *p3 << endl;
//    cout << endl;
//
//    pass_by_value(p1); //Observe que não podemos alterar o ponteiro
//    //propriamente dito.
//    pass_by_value_and_changing_pointed_location(p2); // Observe que
//    // iremos alterar a
//    // posição de
//    // memória para onde
//    // o ponteiro
//    // aponta.
//    pass_by_reference(p3); // Observe que aqui nós iremos alterar o
//    // próprio ponteiro.
//
//    cout << "Enderecos Depois: " << p1 << "  " << p2 << "  " << p3 << endl;
//    cout << "Valores   Depois: " << *p1 << "  " << *p2 << "  " << *p3 << endl;
//    cout << "Valores   Depois: " << a << "  " << b << "  " << c << endl;
//
//    return 0;
//}