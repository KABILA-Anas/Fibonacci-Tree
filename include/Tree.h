#ifndef TREE_H
#define TREE_H
#include <Pair.h>

template <class T>
struct Node
{
    T value;
    int height;
    Node<T> *left;
    Node<T> *right;

    Node()
    {
        height = 1;
        left = nullptr;
        right = nullptr;
    }
};

template <class T>
class Tree
{
    public:
        Tree();
        virtual ~Tree();
        Node<T>* getNoeud();
        void inserer(T);
        void prefixe(Node<T>*);
        bool recherche(T, T&);
        void print2D();
        long long Fibonacci(int nbr);

    private:
        Node<T> *R;
        Node<T>* inserer(Node<T>*, T);
        bool recherche(Node<T>*, T, T&);
        void print2DUtil(Node<T>*, int);
        int getHeigth(Node<T>*);
        Node<T>* Equilibrer(Node<T>*);
        int hauteur(Node<T>*);
        Node<T>* rotateLeft(Node<T>* N);
        Node<T>* rotateRight(Node<T>* N);
        T getMax();
};


#endif // TREE_H
