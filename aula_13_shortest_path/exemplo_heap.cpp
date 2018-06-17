#include "Graph.h"
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

/*
  Uma pergunta que podemos nos fazer é a distância de um nó para todos
  os outros nós no grafo. Por exemplo, se temos um grafo de cidades e
  as arestas são distâncias, podemos nos perguntar a distância mínima
  (do melhor caminho) para ir de Limeira até todas as outras
  cidades. Essa pergunta é respondida usando o famoso algoritmo de
  Dykstra para resolver o problema dos caminhos mínimos (Single-Source
  Shortest-Path Problem).
 
   O algoritmo funciona como uma busca gulosa, em a cada momento
   verificamos qual a cidade que possui o menor caminho de todas as
   existentes. Selecionamos essa cidade e computamos a distância dela
   para as outras existentes.

   Esse algoritmo usa uma fila de prioridade mínima para guardar as
   distâncias para as cidades próximas. Iterativamente, queremos saber
   qual a cidade com distância mínimo e é interessante obter esse
   valor de maneira rápida para o algoritmo fluir sem maiores
   problemas. Abaixo um pseudocódigo que você irá implementar. 

   Note a presença de um objeto do tipo ItemType que será o objeto que
   colocaremos na fila de prioridade. Esses objetos terão três
   informações: origem, destino, distância. 

   ShortestPath(graph, origem)
       1 - Limpar as flags do graph.
       2 - Criar uma fila de prioridade
       3 - Configurar o objeto ItemType inicial
          - item.toVertex = origem
          - item.fromVertex = origem
          - item.distance = 0
       4 - Adicionar o objeto ItemType inicial na fila de prioridade.
       5 - Faça os seguintes passos enquanto houver item na fila.
          5.1 - Retire o item de menor distância da fila
          5.2 - Marque o item 
          5.3 - Escreva a distância dele até a origem.
          5.4 - Para cada adjacente dele faça o seguinte.
              5.4.1 - Compute a distância da origem até o adjacente.
              5.4.2 - Crie um ItemType com essa distância.
              5.4.3 - Adicione na fila de prioridade.
 */

struct ItemType {
    Vertex fromVertex;
    Vertex toVertex;
    int distance; // Distância da origem até toVertex.
};

class CompareItemType {
public:

    bool operator()(ItemType& lItem, ItemType& rItem) {
        return lItem.distance > rItem.distance;
    }
};

void shortestPath(Graph& graph, Vertex origem) {



}

int main() {
    Graph graph;

    Vertex a = Vertex("a");
    Vertex b = Vertex("b");
    Vertex c = Vertex("c");
    Vertex d = Vertex("d");
    Vertex e = Vertex("e");
    Vertex f = Vertex("f");
    Vertex g = Vertex("g");
    Vertex h = Vertex("h");
    Vertex i = Vertex("i");

    graph.addVertex(a);
    graph.addVertex(b);
    graph.addVertex(c);
    graph.addVertex(d);
    graph.addVertex(e);
    graph.addVertex(f);
    graph.addVertex(g);
    graph.addVertex(h);
    graph.addVertex(i);

    graph.addEdge(a, b, 2);
    graph.addEdge(a, g, 4);
    graph.addEdge(b, c, 4);
    graph.addEdge(b, d, 2);
    graph.addEdge(b, g, 6);
    graph.addEdge(c, d, 3);
    graph.addEdge(d, e, 5);
    graph.addEdge(d, f, 3);
    graph.addEdge(e, f, 3);
    graph.addEdge(e, h, 4);
    graph.addEdge(f, g, 5);
    graph.addEdge(f, h, 4);
    graph.addEdge(g, i, 2);
    graph.addEdge(h, i, 3);

    graph.printMatrix();

    shortestPath(graph, a);
    std::cout << "Saindo" << std::endl;
}