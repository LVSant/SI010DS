#include "SearchTree.h"

bool SearchTree::isEmpty() const {

}

bool SearchTree::isFull() const {
    NodeAluno* location;
    try {
        location = new NodeAluno;
        delete location;
        return false;
    } catch (std::bad_alloc exception) {
        return true;
    }
}

void SearchTree::destroyTree(NodeAluno*& tree) {
}

void SearchTree::retrieveAluno(NodeAluno* tree, Aluno& aluno, bool& found) const {
    if (tree == NULL)
        found = false;
    else if (aluno.getRa() < tree->aluno.getRa())
        retrieveAluno(tree->esquerda, aluno, found);
    else if (aluno.getRa() > tree->aluno.getRa())
        retrieveAluno(tree->direita, aluno, found);
    else {
        aluno = tree->aluno;
        found = true;
    }
}

void SearchTree::insertAluno(NodeAluno*& tree, Aluno aluno) {
}

void SearchTree::deleteAluno(NodeAluno*& tree, Aluno aluno) {
}

void SearchTree::deleteNodeAluno(NodeAluno*& tree) {
}

void SearchTree::getSuccessor(NodeAluno* tree, Aluno& data) {
//    while(){
//    }
}

void SearchTree::printPreOrder(NodeAluno* tree) const {
    if (tree == NULL)
        return;
    printf("%d ", tree->aluno);
    printPreOrder(tree->esquerda);
    printPreOrder(tree->direita);
}

void SearchTree::printInOrder(NodeAluno* tree) const {
    if (tree == NULL)
        return;
    printInOrder(tree->esquerda);
    printf("%d ", tree->aluno);
    printInOrder(tree->direita);
}

void SearchTree::printPostOrder(NodeAluno* tree) const {
    if (tree == NULL)
        return;
    printPreOrder(tree->esquerda);
    printPreOrder(tree->direita);
    printf("%d ", tree->aluno);
}