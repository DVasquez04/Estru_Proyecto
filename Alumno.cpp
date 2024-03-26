#include "Alumno.h"
#include "Dato.h"
#include <string>
using namespace std;

Alumno::Alumno() {
}

Alumno::Alumno(string name, string account) {
	this->Nombre = name;
	this->Cuenta = account;
}


Alumno::~Alumno() {}

string Alumno::toString() {
	string info;
	info = "Nombre: " + this->Nombre + ", Cuenta: " + this->Cuenta;
	return info;
}

// Comparación de Alumnos
bool Alumno::equals(Dato* DatoAComparar) {
	if (dynamic_cast<Alumno*>(DatoAComparar)) {
		Alumno* AlumnoComparado = dynamic_cast<Alumno*>(DatoAComparar);
		if (AlumnoComparado != nullptr) {
			if (AlumnoComparado->Cuenta == this->Cuenta) {
				return true;
			}
		}
	}
	return false;
}

Dato* Alumno::copy() {
	return new Alumno(Nombre, Cuenta);
}

string Alumno::getCuenta() {
	return Cuenta;
}

string Alumno::getNombre() {
	return Nombre;
}

void Alumno::setNombre(string nombre) {
	this->Nombre = nombre;
}

void Alumno::setCuenta(string cuenta) {
	this->Cuenta  = cuenta;
}