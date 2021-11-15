#pragma once
#include "List.h"

using namespace std;

class Circular : public List
{
public:
	virtual void Insert(Elem*& first, Elem*& last, Info value)
	{
		Elem* tmp = new Elem;
		tmp->info = value;

		if (first != NULL)
		{
			Elem* T = first;
			while (T->link != first)
				T = T->link;
			T->link = tmp;
		}
		else
		{
			first = tmp;
		}

		tmp->link = first;
	}
	virtual  void Remove(Elem*& L)
	{
		Elem* T = L;
		while (T->link != L)
			T = T->link;
		Info value = L->info;

		if (T != L)
		{
			Elem* tmp = L->link;
			delete L;

			L = tmp;
			T->link = L;
		}
		else
		{
			delete L;
			L = NULL;
		}
	}

	virtual Elem* getList() { return list; };
};
