#include "SearchTree.h"

int main() {
    // Untemplated queue of char
    // Templated heap
    SearchTree searchTree;

    int ras[7] = {12704, 31300, 1234, 49001, 52202, 65606, 91234};
    std::string nomes[7] = {"Pedro", "Raul", "Paulo", "Carlos", "Lucas", "Maria", "Samanta"};

    Aluno aluno;
    aluno = Aluno(186468, "Renan");
    searchTree.insertAluno(aluno);
    aluno = Aluno(168746, "Giovanni");
    searchTree.insertAluno(aluno);
    aluno = Aluno(102312, "Filipi");
    searchTree.insertAluno(aluno);
    aluno = Aluno(178482, "Leonardo");
    searchTree.insertAluno(aluno);
    aluno = Aluno(157645, "Alexandre");
    searchTree.insertAluno(aluno);
    aluno = Aluno(118395, "Pedro");
    searchTree.insertAluno(aluno);
    aluno = Aluno(176378, "Ranieri");
    searchTree.insertAluno(aluno);
    aluno = Aluno(145577, "Caique");
    searchTree.insertAluno(aluno);
    aluno = Aluno(176519, "Rebecca");
    searchTree.insertAluno(aluno);
    aluno = Aluno(183414, "Marcos");
    searchTree.insertAluno(aluno);
    aluno = Aluno(177650, "Kauí");
    searchTree.insertAluno(aluno);
    aluno = Aluno(145352, "Ariadne");
    searchTree.insertAluno(aluno);
    aluno = Aluno(175356, "Odair");
    searchTree.insertAluno(aluno);
    aluno = Aluno(155859, "Jefferson");
    searchTree.insertAluno(aluno);
    aluno = Aluno(173574, "Marcelo");
    searchTree.insertAluno(aluno);
    aluno = Aluno(173742, "Guilherme");
    searchTree.insertAluno(aluno);
    aluno = Aluno(187064, "Sérgio");
    searchTree.insertAluno(aluno);
    aluno = Aluno(101334, "Alex");
    searchTree.insertAluno(aluno);
    aluno = Aluno(184214, "Matheus");
    searchTree.insertAluno(aluno);
    aluno = Aluno(188308, "Vitor");
    searchTree.insertAluno(aluno);
    aluno = Aluno(177691, "Kelwin");
    searchTree.insertAluno(aluno);
    aluno = Aluno(119322, "Dionys");
    searchTree.insertAluno(aluno);
    aluno = Aluno(171257, "Felipe");
    searchTree.insertAluno(aluno);
    aluno = Aluno(165484, "Amadeu");
    searchTree.insertAluno(aluno);
    aluno = Aluno(188655, "Weslley");
    searchTree.insertAluno(aluno);
    aluno = Aluno(187583, "Thiago");
    searchTree.insertAluno(aluno);
    aluno = Aluno(168878, "Gregory");
    searchTree.insertAluno(aluno);
    aluno = Aluno(183711, "Mariana");
    searchTree.insertAluno(aluno);
    aluno = Aluno(188110, "Vinicius");
    searchTree.insertAluno(aluno);
    aluno = Aluno(171225, "Felipe");
    searchTree.insertAluno(aluno);
    aluno = Aluno(159776, "Jonatas");
    searchTree.insertAluno(aluno);
    aluno = Aluno(177779, "Lais");
    searchTree.insertAluno(aluno);
    aluno = Aluno(159825, "Leonardo");
    searchTree.insertAluno(aluno);
    aluno = Aluno(179870, "Alexandre");
    searchTree.insertAluno(aluno);
    aluno = Aluno(156748, "Matheus");
    searchTree.insertAluno(aluno);
    aluno = Aluno(135729, "Fernando");
    searchTree.insertAluno(aluno);
    aluno = Aluno(167786, "Gabriel");
    searchTree.insertAluno(aluno);
    aluno = Aluno(184082, "Mateus");
    searchTree.insertAluno(aluno);
    aluno = Aluno(172095, "Leonardo");
    searchTree.insertAluno(aluno);

    searchTree.printTree();

    std::cout << std::endl;


    aluno = Aluno(159776, "Jonatas");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(173742, "Guilherme");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(171225, "Felipe");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(179870, "Alexandre");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(165484, "Amadeu");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(177779, "Lais");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(183711, "Mariana");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(186468, "Renan");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(171257, "Felipe");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(188110, "Vinicius");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(159825, "Leonardo");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(172095, "Leonardo");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(177691, "Kelwin");
    searchTree.deleteAluno(aluno);
    aluno = Aluno(155859, "Jefferson");
    searchTree.deleteAluno(aluno);
    searchTree.printTree();
    std::cout << std::endl;
}