#pragma once
#include <cstddef>
using namespace std;
typedef int Info;

struct Elem
{
	Info info;
	Elem* link;
};

class List
{
protected:
	Elem* list = NULL;
public:
	virtual Elem* getList() = 0;
	virtual void Insert(Elem*& first, Elem*& last, Info value) = 0;
	virtual  void Remove(Elem*& L) = 0;
};

