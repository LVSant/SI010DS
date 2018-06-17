#include <iostream>
#include <vector> 

// Vamos usar o vector da Standart Template
// Library. A classe Vector implementa um Array que
// aloca cada elemento dinamicamente.

/*
   Na aula passada, falamos de árvores binárias, um método eficiente
   para representar hierarquias. 

   1 - Se removermos a restrição de que cada nó deve ter no máximo
   dois filhos, então temos uma árvore convencional.

   2 - Se removermos a restrição de que cada nó (exceto a raiz) deve
   ter exatamente um pai, então temos um grafo.

   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% Assim,
   um grafo é formato como um conjunto G = {V, E}, onde V é um
   conjunto não vazio de vértices e E é um conjunto de arestas.
   
   Exemplo:
   - G = {V, E}.
 * V = {a, b, c, d}
 * E = { {a,b}, {a,d}, {b,c} }
   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   
   O conjunto de arestas descreve relacionamentos entre os
   vértices. Por exemplo, se os vértices representam cidades, então o
   conjunto de arestas pode representar as estradas que ligam uma
   cidade à outra. Dado que as estradas que ligam a cidade A à cidade
   B também ligam a cidade B à cidade A, então os grafos são não
   direcionados.

   Se as arestas representam vôos, então o fato de existir um vôo da
   cidade A para a cidade B não garante que existem vôos da cidade B
   para a cidade A. Nesse caso, o grafo é direcionado.

   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   Exemplo de grafo direcionado
   - G = {V, E}.
 * V = {a, b, c, d}
 * E = { (a,b), (a,d), (b,c) }
   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

   Para saber se podemos viajar de Belém para Campinas, procuramos por
   uma caminho entre as duas cidades, sendo a distância total
   determinada pela soma das distâncias entre cada cidade no caminho.

   Isso descreve minimamente um grafo, mas como implementamos? Existem
   duas maneiras, uma baseada em matrizes de adjacências e outra
   baseada em listas encadeadas. Vamos começar com a matriz de
   adjacência. O grafo G não direcionado seria representado da
   seguinte forma:

      a   b   c  d
   a  0   1   0  1
   b  1   0   1  0
   c  0   1   0  0 
   d  1   0   0  0
 */

class Vertex {
public:

    Vertex() {
        this->nome = "";
    }

    Vertex(std::string nome) {
        this->nome = nome;
    }

    std::string getNome() const {
        return nome;
    }
private:
    int ra;
    std::string nome;
};

class Graph {
private:

    int NULL_EDGE; /* Aqui nós diremos o que consideramos uma aresta
		    nula.  */
    int maxVertices; // Número máximo de vértices.

    int numVertices; // Número atual de vértices adicionados no grafo. 
    Vertex* vertices; // Array com todos os vértices.
    int edges[50][50]; // Matriz co todas as arestas.
    bool* marks; // marks[i] é um valor que marca o vertices[i]. // Define se o no ja foi visitado (verificar)

public:
    Graph();
    ~Graph();
    void MakeEmpty();
    bool IsEmpty() const;
    bool IsFull() const;

    /* 
       A operação addVertex adiciona o vértice que veio por parâmetro no
     próximo espaço livre. Como o novo vértice não possui nenhuma aresta
     ainda, você deverá inicializar a linha e acoluna referente a ele
     com um valor apropriado. Valor APropriado = 50 segundo a mayra > Ulises
     */
    void addVertex(Vertex);
    void zeraLinhaColunas(int i);


    /*
      A operação addEdge deve primeiramente localizar o vértice de
      origem e o vértice de destino. Nesse caso, você deverá conhecer os
      índices dos vértices dentro da árvore. Sabendo os índices, basta
      atribuir o peso que está no terceiro parâmetro para a Matriz.
     */
    void addEdge(Vertex, Vertex, int);

    /*
      A operação getWeight recebe dois vértices como parâmetros e busca
      na matriz de adjacências qual o peso entre esses dois vértices.
     */
    int getWeight(Vertex, Vertex);

    /*
     *    A
     * D     B
     * 
     * Adjacentes de A = D & B
     * AKK Nos vizinhos
     * 
      A última operação abaixo recebe um vértice como parâmetro e
      retorna uma lista encadeada de vértices adjacentes. Você
      provavelmente seguirá a abordagem de pesquisar na matriz a linha
      (ou coluna) correspondente ao vértice em questão e irá adicionar
      na lista encadeada os vértices que possuem algum peso diferente do
      valor nulo.
     */
    void getAdjacents(Vertex, std::vector<Vertex>&);

    /*
     USAREMOS QUANDO HOUVER BUSCA
      Para cada vértice, nós temos um booleano que chamamos de
      mark. Este mark é um auxiliar para fazer vários algoritmos
      funcionarem. Neste método, você irá simplesmente configurar todos
      os marks como falso.
     */
    void clearMarks();

    /*
      O método abaixo serve para marcar um vértice que está no
      grafo. Você irá simplesmente procurar o vértice e configurar a sua
      variável mark como true.
     */
    void markVertex(Vertex);

    /*
      O método abaixo serve apenas para verificar se um vértice está
      marcado ou não.
     */
    bool isMarked(Vertex);

    /*
      Imprima a matriz de adjacência usando o método abaixo para fins de
      depuração.
     */
    void printMatrix();
};