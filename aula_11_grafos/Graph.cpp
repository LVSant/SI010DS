#include <iostream>
#include "Graph.h"


Graph::Graph() {
/*
  Aloque arrays de tamanho maxVertices dinamicamente para marks e
  vertices. Você deverá inicalizar numVertices com zero, dado que
  nenhum vértice foi ainda inserido.  Além disso, o nosso tipo
  abstrato irá considerar que qualquer número igual a zero significa
  que não há aresta entre dois vértices, ou seja NULL_EDGE deve ser
  configurado de acordo. Para maxVertices, coloque o valor 50.
 */
    NULL_EDGE = 0; /* Aqui nós diremos o que consideramos uma aresta
		    nula.  */
    maxVertices = 50; // Número máximo de vértices.

    numVertices = 0; // Número atual de vértices adicionados no grafo.
    vertices = new Vertex[maxVertices]; // Array com todos os vértices.
    for (int row=0; row<maxVertices; row++){
        for (int col=0; col<maxVertices; col++){
            edges[row][col];
        }
    }
    marks = new bool[maxVertices];      // marks[i] é um valor que marca o vertices[i].
}


Graph::~Graph() {
// Desaloque os arrays vertices e marks.
delete [] vertices;
delete [] marks;
}


void Graph::addVertex(Vertex vertex){
/*
  Adicione o nove vértice, garanta que a linha e a coluna do novo
 vértice tenha apenas valores NULL_EDGE.
*/
    if(numVertices>maxVertices)
        return;
    vertices[numVertices] = vertex;
    numVertices++;
}

int index(Vertex vertex, Vertex* vertices){
    int index = 0;
	while(!(vertex.getNome() == vertices[index].getNome()))
		index++;

	return index;
}

void Graph::addEdge(Vertex fromVertex, Vertex toVertex, int weight){
  /*
     O valor de weight é adicionado em Edge[fromVertex, toVertex]
  */
    edges[index(fromVertex, vertices)][index(toVertex, vertices)] = weight;
}


int Graph::getWeight(Vertex fromVertex, Vertex toVertex){
  /*
    Retorna o peso associado à aresta Edge(fromVertex, toVertex).
  */
    return edges[index(fromVertex, vertices)] [index(toVertex, vertices)];
}

void Graph::getAdjacents(Vertex vertex, std::vector<Vertex>& adjVertices){
/*
  Retorna uma lista encadeada de vértices adjacentes ao vértice de
  origem.
*/
}

void Graph::clearMarks(){
  /*
    Atribua false para todos os elementos de marks.
   */
    for(int i=0; i<maxVertices; i++)
        marks[i] = false;
}


void Graph::markVertex(Vertex vertex){
  /*
    Atribua true para o vertex no vetor marks.
   */
  marks[index(vertex, vertices)] = true;
}

bool Graph::isMarked(Vertex vertex){
  /*
    Retorne a marcação de vertex no vetor mark.
   */
    return marks[index(vertex, vertices)];
}


void Graph::printMatrix(){
    for(int i = 0; i < numVertices; i++){
        for(int j = 0; j < numVertices; j++){
            std::cout << edges[i][j] << " - ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
