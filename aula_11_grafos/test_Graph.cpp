#include "Graph.h"
#include <iostream>

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


    std::cout << std::endl;
}