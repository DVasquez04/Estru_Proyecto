#pragma once
#include <iostream>
#include "Dato.h"
#include <string>
using namespace std;

class Alumno : public Dato {

private:
	string Nombre;
	string Cuenta;

public:
	Alumno();
	Alumno(string, string);
	~Alumno();
	virtual string toString() override;
	virtual bool equals(Dato*) override;
	virtual Dato* copy() override;
	string getNombre();
	string getCuenta();
	void setNombre(string);
	void setCuenta(string);
};