#include "Nodo.h"
Nodo::Nodo() {
}

Nodo:: Nodo(Dato* par) {
	this->nodeObj = par;
}

Nodo::~Nodo() {
	if (nodeObj) delete nodeObj;
	if (siguiente) delete siguiente;
	anterior = NULL;
}

void Nodo::setNext(Node* nodo) {
	this->siguiente = nodo;
}

void Nodo::setPrior(Node* nodo) {
	this->anterior = nodo;
}

Dato* Nodo::getObj() {
	if (nodeObj) return nodeObj;
	return NULL;
}

void Nodo::setObj(Dato* newObj) {
	if (nodeObj) delete nodeObj;
	nodeObj = newObj;
}

Node* Nodo::getPrior() {
	if (anterior) return anterior;
	return NULL;
}

Node* Nodo::getNext() {
	if (siguiente) return siguiente;
	return NULL;
}