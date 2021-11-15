#pragma once
#include "List.h"

using namespace std;

class Node : public List
{
public:

    virtual  void Insert(Elem*& first, Elem*& last, Info value)
    {
        Elem* tmp = new Elem;
        tmp->info = value;
        tmp->link = NULL;
        if (last != NULL)
            last->link = tmp;
        last = tmp;
        if (first == NULL)
            first = tmp;
    }

    virtual void Remove(Elem*& L)
    {
        Elem* ptr = L->link;

        L->link = ptr->link;

        delete ptr;
    }

    virtual Elem* getList() { return list; };

};
