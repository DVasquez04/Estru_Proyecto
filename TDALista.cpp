#include "TDALista.h"
int TDALista::getSize() {
	return size;
}

bool TDALista::isEmpty() {
	if (size == 0)
		return true;
	else 
		return false;
};