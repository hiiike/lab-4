#include "List.h"
#include "Node.h"
#include "Circular.h"
#include <iostream>

using namespace std;

void Print(Elem* L)
{
    while (L != NULL)
    {
        cout << L->info << " ";
        L = L->link;
    }
}

void PrintCircular(Elem* L)
{
    if (L == NULL)
        return;

    Elem* first = L;
    cout << L->info << " ";
    while (L->link != first)
    {
        L = L->link;
        cout << L->info << " ";
    }
}

int main()
{
    Node* A[1];
    Circular* B[1];
    A[0] = new Node;
    B[0] = new Circular;
    Elem* first = A[0]->getList();
    Elem* last = A[0]->getList();
    Elem* L = B[0]->getList();
    for (int i = 0; i <= 10; i++)
    {
        A[0]->Insert(first, last, i);
    }
    cout << endl << "Linear list" << endl;
    Print(first);
    A[0]->Remove(first);
    cout << endl << "Modified list" << endl;
    Print(first);
    cout << endl << endl;

    cout << "Circular list" << endl;
    for (int j = 0; j <= 10; j++)
    {
        B[0]->Insert(L, L, j);
    }
    PrintCircular(L);
    B[0]->Remove(L);
    cout << endl << "Modified list " << endl;
    PrintCircular(L);
    return 0;
}

