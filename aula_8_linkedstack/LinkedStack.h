typedef char ItemType;

// Estrutura usada para guardar a informação e o endereço do próximo
// elemento. 

struct NodeType {
    ItemType info;
    NodeType* next;
};

class LinkedStack {
public:
    // Construtor da classe
    LinkedStack();

    // Destrutor: Esta função será chamada quando alguém usar o delete
    // neste objeto. Neste caso, serah preciso desalocar todas as
    // regiões de memória que alocamos dinamicamente.
    ~LinkedStack();

    // Inserir e remover elementos da nossa pilha.
    void push(ItemType);
    ItemType pop();

    bool isEmpty() const;
    bool isFull() const;

private:
    NodeType* topPtr;
};