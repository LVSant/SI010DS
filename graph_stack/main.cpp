#include <iostream>
using namespace std;


// 1 ->2 
// 1->4
// 2 ->3
// 4->3
// 4 -> 5
// Adjacency list
// 1->2->3-null
// 2->3->null
//4->5->null;

// Structure of a vertex

struct vertex {
    int i;
    struct node *list;
    struct vertex *next;
};
typedef struct vertex * VPTR;

// Struct of adjacency list

struct node {
    struct vertex * n;
    struct node *next;
};

typedef struct node * NODEPTR;

class Graph {
public:
    // list of nodes chained together
    VPTR V;

    Graph() {
        V = NULL;
    }
    void addEdge(int, int);
    VPTR addVertex(int);
    VPTR existVertex(int i);
    void listVertex();
};

// If vertex exist, it returns its pointer else returns NULL

VPTR Graph::existVertex(int i) {
    VPTR temp = V;
    while (temp != NULL) {
        if (temp->i == i) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}
// Add a new vertex to the end of the vertex list

VPTR Graph::addVertex(int i) {
    VPTR temp = new(struct vertex);
    temp->list = NULL;
    temp->i = i;
    temp->next = NULL;

    VPTR *curr = &V;
    while (*curr) {
        curr = &(*curr)->next;
    }
    *curr = temp;
    return temp;
}

// Add a node from vertex i to j. 
// first check if i and j exists. If not first add the vertex
// and then add entry of j into adjacency list of i

void Graph::addEdge(int i, int j) {

    VPTR v_i = existVertex(i);
    VPTR v_j = existVertex(j);
    if (v_i == NULL) {
        v_i = addVertex(i);
    }
    if (v_j == NULL) {
        v_j = addVertex(j);
    }

    NODEPTR *temp = &(v_i->list);
    while (*temp) {
        temp = &(*temp)->next;
    }
    *temp = new(struct node);
    (*temp)->n = v_j;
    (*temp)->next = NULL;
}
// List all the vertex.

void Graph::listVertex() {
    VPTR temp = V;
    while (temp) {
        cout << temp->i << " ";
        temp = temp->next;
    }
    cout << "\n";

}

// Client program

int main() {
    Graph G;
    G.addEdge(1, 2);
    G.addEdge(2, 1);
    G.addEdge(1, 4);
    G.addEdge(1, 3);
    G.addEdge(3, 2);
    G.listVertex();

}