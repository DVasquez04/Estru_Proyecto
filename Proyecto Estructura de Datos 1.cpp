#include "iostream"
#include "Alumno.h";
#include "ArrayQueue.h"
#include "Nodo.h"
#include "ArrayList.h"
#include "LinkedList.h"
#include "ArrayStack.h"

using namespace std;

// menu para operaciones de listas
/*void menulista(int opcion) {
    int opcion2, pos;
    string nombre, cuenta;
    ArrayList* array = new ArrayList();
    Dato* alumno = new Alumno();

    switch (opcion) {
    case 1:
            cout << "Operaciones de Listas \n"
                "1. Insertar Elemento \n"
                "2. Imprimir Elementos \n"
                "3. Buscar Elemento \n"
                "4. Borrar Elemento \n"
                "5. Ver si est� vac�a \n"
                "6. Obtener Elemento por Posici�n \n"
                "7. Obtener Siguiente \n"
                "8. Obtener Anterior \n"
                "9. Borrar todos los Elementos(Anula) \n"
                "10. Regresar al Men� Anterior \n";
            cin >> opcion2;
            switch (opcion2) {
            case 1: {
                int continuar = 0;
                    cout << "Inserte la posici�n en la que desea insertar el objeto:" << endl;
                    cin >> pos;
                    cin.ignore();
                    cout << "Ingrese el nombre del alumno: " << endl;
                    getline(cin, nombre);
                    cout << "Ingrese la cuenta: " << endl;
                    getline(cin, cuenta);
                    bool inserta = array->inserta(alumno = new Alumno(nombre, cuenta), pos);
                    if (inserta == true) {
                        cout << "Se ingres� el alumno con �xito!" << endl;
                        cout << "Desea ingresar otro alumno? 1.Si 2.No" << endl;
                        cin >> continuar;
                        while (continuar != 1 || continuar != 2) {
                            cout << "El numero que ingreso no es valido\n"
                                << "Vuelva a ingresar un numero valido";
                            cin >> continuar;
                        }
                    }
                    else
                        cout << "Algo fall� en el programa :(" << endl;
            }
                  break;

            case 2: {
                array->imprime();
            }
                  break;

            case 3: {
                cin.ignore();
                cout << "Ingrese la cuenta: " << endl;
                getline(cin, cuenta);
                array->localiza2(cuenta);
            }
                  break;

            case 4: {
                cout << "Ingrese la posici�n a eliminar: " << endl;
                cin >> pos;
                bool suprime = array->suprime(pos);
                if (suprime)
                    cout << "La eliminaci�n fue exitosa!" << endl;
                else
                    cout << "La eliminaci�n no fue exitosa :(" << endl;
            }
                  break;

            case 5: {
                int size = array->getSize();
                if (size == 0)
                    cout << "La lista esta vacia" << endl;
                else
                    cout << "La lista no esta vacia\n"
                    << "El tama�o de la lista es de: " << size << endl;
            }
                  break;

            case 6: {
                cout << "Ingrese una posici�n: " << endl;
                cin >> pos;
                alumno = array->recupera(pos);
                if (pos > 0 && pos <= array->getSize())
                    cout << alumno->toString() << endl;
                else
                    cout << "la posici�n no existe" << endl;
            }
                  break;

            case 7: {
                cout << "Ingrese una posici�n: " << endl;
                cin >> pos;
                alumno = array->siguiente(pos);
                if (pos > 0 && pos + 1 <= array->getSize())
                    cout << alumno->toString() << endl;
                else
                    cout << "el espacio siguiente est� vac�o " << endl;
            }
                  break;

            case 8: {
                cout << "Ingrese una posici�n: " << endl;
                cin >> pos;
                alumno = array->anterior(pos);
                if (pos - 1 > 0 && pos <= array->getSize())
                    cout << alumno->toString() << endl;
                else
                    cout << "el espacio anterior est� vac�o " << endl;
            }
                  break;

            case 9: {
                array->anula();
            }
                  break;

            }

        break;

    case 2: {
        cout << "Operaciones de Listas \n"
            "1. Insertar Elemento \n"
            "2. Imprimir Elementos \n"
            "3. Buscar Elemento \n"
            "4. Borrar Elemento \n"
            "5. Ver si est� vac�a \n"
            "6. Obtener Elemento por Posici�n \n"
            "7. Obtener Siguiente \n"
            "8. Obtener Anterior \n"
            "9. Borrar todos los Elementos(Anula) \n"
            "10. Regresar al Men� Anterior \n";
        cin >> opcion2;
        switch (opcion2) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        }
        break;
    }
    }
}*/
// Menu que sirve para las operaciones de Pilas
    void menupila(int opcion) {
        int opcion2;
        switch (opcion) {
        case 1: {
            cout << "Operaciones de Pilas \n"
                "1. �Empujar� (push) \n"
                "2. �Sacar�(pop) \n"
                "3. Ver Tope(top) \n"
                "4. Verificar si est� vac�a \n"
                "5. Imprimir elementos \n"
                "6. Borrar todos los elementos \n"
                "7. Regresar al Men� Anterior \n";
            cin >> opcion2;
            switch (opcion2) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            }
            break;
        }

        case 2: {
            cout << "Operaciones de Pilas \n"
                "1. �Empujar� (push) \n"
                "2. �Sacar�(pop) \n"
                "3. Ver Tope(top) \n"
                "4. Verificar si est� vac�a \n"
                "5. Imprimir elementos \n"
                "6. Borrar todos los elementos \n"
                "7. Regresar al Men� Anterior \n";
            cin >> opcion2;
            switch (opcion2) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            }
            break;
        }
        }
}

        //menu para las operaciones de cola
        void menucola(int opcion) {
            int opcion2;
            switch (opcion) {
            case 1:
                cout << "Operaciones de Colas \n"
                    "1. �Encolar�(queue) \n"
                    "2. �Desencolar�(dequeue) \n"
                    "3. Ver Frente(peek) \n"
                    "4. Verificar si est� vac�a \n"
                    "5. Imprimir elementos \n"
                    "6. Borrar los elementos \n"
                    "7. Regresar al Men� Anterior \n";
                cin >> opcion2;
                switch (opcion2) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                }
                break;

            case 2:
                cout << "Operaciones de Colas \n"
                    "1. �Encolar�(queue) \n"
                    "2. �Desencolar�(dequeue) \n"
                    "3. Ver Frente(peek) \n"
                    "4. Verificar si est� vac�a \n"
                    "5. Imprimir elementos \n"
                    "6. Borrar los elementos \n"
                    "7. Regresar al Men� Anterior \n";
                cin >> opcion2;
                switch (opcion2) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                }
                
            }
        }
    

int main(){
    int opcion=0;
    while (opcion != 4) {
        cout << "Men\xA3\ Principal \n"
            "1. Trabajar con Listas \n"
            "2. Trabajar con Pilas \n"
            "3. Trabajar con�Colas \n"
            "4.�Salir \n";
        cin >> opcion;
        int opcion2;
        switch (opcion) {
            case 1:
                cout << "Men\xA3\ Tipo de Lista \n"
                        "1. Trabajar con ArrayList \n"
                        "2. Trabajar con Linked List \n"
                        "3. Regresar al Men\xA3\ Principal \n";
                cin >> opcion2;
                //menulista(opcion2);
                break;

            case 2:
                cout << "Men\xA3\ Tipo de Pila \n"
                        "1. Trabajar con ArrayStack \n"
                        "2. Trabajar con LinkedStack \n"
                        "3. Regresar al Men\xA3\ Principal \n";
                cin >> opcion2;
                menupila(opcion2);
                break;

            case 3:
                cout << "Men\xA3\ Tipo de Cola \n"
                        "1. Trabajar con ArrayQueue \n"
                        "2. Trabajar con LinkedQueue \n"
                        "3. Regresar al Men\xA3\ Principal \n";
                cin >> opcion2;
                menucola(opcion2);
                break;
        }
    }
}