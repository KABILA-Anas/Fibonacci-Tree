#include <iostream>
#include <Tree.h>
#include <Pair.h>
#include <../src/Tree.cpp>

using namespace std;

int main()
{
    Tree<Pair> *A = new Tree<Pair>();

    long long int nb;

    while(true)
    {
        cout << ".................................................................................................." << endl;
        cout << "Entrer un nombre : ";
        cin >> nb;
        cout << "Fibonacci(" << nb << ") = " << A->Fibonacci(nb) << endl;
    }

    return 0;
}
