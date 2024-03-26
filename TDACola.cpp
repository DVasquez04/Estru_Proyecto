#include "TDACola.h"
TDACola::TDACola() {

}

int TDACola::getSize() {
	return size;
}

bool TDACola::isEmpty() {
	if (size == 0)
		return true;
	else 
		return false;
}