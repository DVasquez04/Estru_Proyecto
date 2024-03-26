#include "LinkedStack.h"
LinkedStack::LinkedStack() {
	topNode = NULL;
}

void LinkedStack::push(Dato* alumno) {
	Nodo* nodo = new Node(alumno);
	if (topNode = nullptr)
		topNode = nodo;
	else {
		topNode->setPrior(nodo);
		nodo->setNext(topNode);
		topNode = topNode->getPrior();
	}
	size++;
}

Dato* LinkedStack::pop() {
	if (size != 0) {
		Nodo* Aretornar = topNode;
		Dato* n = topNode->getObj()->copy();
		topNode = topNode->getNext();
		if (topNode)topNode->setPrior(NULL);
		Aretornar->setNext(NULL);
		delete Aretornar;
		size--;
		return n;
	}
	else {
		return NULL;
	}
}

Dato* LinkedStack::top() {
	if (size != 0)
		return topNode->getObj();
	return NULL;
}

bool LinkedStack::isEmpty() {
	if (size != 0)
		return false;
	return true;
}

void LinkedStack::clear() {
	delete topNode;
	topNode = NULL;
	size = 0;
}

void LinkedStack::print() {
	Nodo* temp = NULL;
	for (int i = 0; i < size; i++) {
		if (!i) temp = topNode;
		else temp = temp->getNext();
		cout << "[" << temp->getObj()->toString() << "]\n";
	}
	cout << "\n";
}

LinkedStack::~LinkedStack() {
	if (topNode) delete topNode;
}