#include "ArrayList.h"
ArrayList::ArrayList() {
	capacidad = 1000;
	array = new Dato * [1000];
}

ArrayList::~ArrayList() {
	for (int i = 0; i < size; i++) delete array[i];
	delete[] array;
}
bool ArrayList::inserta(Dato* obj, int pos) {
	if (pos == size + 1 && pos > capacidad) resize();
	if (pos > 0 && pos <= size + 1 && pos <= capacidad) {
		for (int i = size - 1; i >= pos - 1; i--)
			if (i != capacidad - 1) array[i + 1] = array[i];
		array[pos - 1] = obj;
		size++;
		return true;
	}
	else
		return false;


}

Dato* ArrayList::recupera(int pos) {
	if (pos > 0 && pos <= size)
		return array[pos - 1];
	else
		return NULL;
}

bool ArrayList::suprime(int pos) {
	if (!isEmpty()) {

		if (pos > 0 && pos <= size) {
			int movement = 0;
			for (int i = 0; i < size; i++) {
				if (pos - 1 == i) {
					delete array[i];
					movement++;

				}
				else {
					Dato* temporal = array[i];
					array[i] = NULL;
					array[i - movement] = temporal;
				}
			}
			size--;
			return true;

		}
		return false;
	}
	return false;
}

void ArrayList::imprime() {
	for (int i = 0; i < size; i++) cout << "[" << array[i]->toString() << "]\n";
	cout << "\n";
}

int ArrayList::localiza(Dato* obj) {
	for (int i = 0; i < size; i++) if (array[i]->equals(obj)) return i + 1;
	return -1;

}

Dato* ArrayList::siguiente(int par) {
	if (par > 0 && par <= size) return array[par];
	return NULL;
}

Dato* ArrayList::anterior(int par) {
	if (par > 0 && par - 2 <= size - 1 && par - 2 >= 0) return array[par - 2];
	return NULL;
}

void ArrayList::anula() {
	for (int i = 0; i < size; i++) delete array[i];
	size = 0;
}

void ArrayList::resize() {
	capacidad += 100;
	Dato** array2 = new Dato * [capacidad];
	for (int i = 0; i < size; i++) array2[i] = array[i];
	delete array;
	array = array2;
}


/*#include "ArrayList.h"
//duplica la capacidad del arraylist al doble de su tamaño
void ArrayList::resize()
{
	capacidad += (size * 2);
	Dato** array2 = new Dato * [capacidad];
	for (int i = 0; i < size; i++) array2[i] = array[i];
	delete[] array;
	array = array2;
}

ArrayList::ArrayList()
{
	capacidad = 100;
	array = new Dato * [capacidad];
	size = 0;
}

ArrayList::~ArrayList()
{
	for (int i = 0; i < size; i++) delete array[i];
	delete[] array;
}
//se valida la posicion a eliminar para luego insertar el objeto en esa posicion y hacer un corrimiento a la derecha
bool ArrayList::inserta(Dato* objeto, int pos) {
	if (pos < 1 || pos > size + 1) {
		return false;
	}
	if (size >= capacidad)
	{
		resize();
	}
	for (int i = size - 1; i >= pos; i--) {
		array[i + 1] = array[i];
	}
	array[pos - 1] = objeto;
	size++;
	return true;
}
//se valida la posicion a eliminar para luego eliminar el objeto en esa posicion y hacer un corrimiento a la izquierda
bool ArrayList::suprime(int pos)
{

	if (isEmpty() || (pos < 1 || pos > size)) {
		return false;
	}
	delete array[pos - 1];
	for (int i = pos; i < size; i++) {
		array[i - 1] = array[i];
	}
	array[size - 1] = nullptr;
	size--;
	return true;
}
//valida la posicion para luego retornar el dato de la siguiente posicion a la deseada
Dato* ArrayList::siguiente(int pos)
{
	if (pos < 1 || pos > size)
	{
		return nullptr;
	}
	else {
		return array[pos];
	}
}
//valida la posicion para luego retornar el dato de la anterior posicion a la deseada
Dato* ArrayList::anterior(int pos)
{
	if (pos > 1 && pos - 2 < size && pos - 2 >= 0) {
		return array[pos - 2];
	}
	return nullptr;
}
//borra todos los elementos dentro del arraylist
void ArrayList::anula()
{
	for (int i = 0; i < size; i++)
	{
		delete[] array[i];
	};
	size = 0;
}
//recive un dato y luego evalua si algun objeto dentro de la lista es igual al array y retorna su posición y si no lo es retorna -1
int ArrayList::localiza(Dato* objeto)
{
	for (int i = 0; i < size; i++)
	{
		if (objeto->equals(array[i]))
		{
			return i + 1;
		}
	}
	return -1;

}
//valida la posicion y retorna el objeto. Si no es valida retorna un puntero nulo
Dato* ArrayList::recupera(int pos)
{
	if (pos > 0 && pos <= size) {
		return array[pos - 1];
	}
	else {
		return nullptr;
	}
}
void ArrayList::localiza2(string cuenta)
{
	bool found = false;
	for (int i = 0; i < size; i++)
	{
		string cuenta2 = dynamic_cast<Alumno*>(array[i])->getCuenta();
		if (cuenta2 == cuenta) {
			cout << i + 1 << "." << "[ " << array[i]->toString() << " ]" << endl;
			found = true;
			break;
		}
	}
	if (found == false)
	{
		cout << "El alumno no fue encontrado" << endl;
	}
}
//retorna el tamaño
int ArrayList::getSize()
{
	return size;
}
//imprime todos los objetos dentro del arraylist
void ArrayList::imprime()
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "." << "[ " << array[i]->toString() << " ]" << endl;
	}
}
;*/