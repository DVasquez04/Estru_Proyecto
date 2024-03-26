#pragma once
#include "TDALista.h"
#include "Alumno.h"
class ArrayList :TDALista
{
private:
	Dato** array;
	int capacidad;
	
public:
	void resize() override;
	ArrayList();
	~ArrayList();
	bool inserta(Dato*, int) override;
	bool suprime(int) override;
	Dato* siguiente(int) override;
	Dato* anterior(int) override;
	void anula() override;
	int localiza(Dato*) override;
	Dato* recupera(int)override;
	void localiza2(string);
	int getSize();
	void imprime() override;

};