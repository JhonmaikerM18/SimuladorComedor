#include <iostream>
#include "SolicitudClass.h"

// Definici?n de la clase Nodo
class Nodo {
public:
	Solicitud Solicitando;
	Nodo* siguiente;
	Nodo(Solicitud solicitud) : Solicitando(solicitud), siguiente(nullptr) {}
};

// Definici?n de la clase Cola
public class Cola {
private:
	Nodo* primero;
	Nodo* ultimo;

public:
	Cola() : primero(nullptr), ultimo(nullptr) {}

	// M?todo para obtener el inicio de la cola
	static Nodo* obtenerInicio(Cola& cola) {
		return cola.primero;
	}
	// M?todo para agregar un elemento a la cola
	void encolar(Solicitud solicitando) {
		Nodo* nuevoNodo = new Nodo(solicitando);

		if (ultimo == nullptr) {
			// La cola est? vac?a, el nuevo nodo es el primero y el ?ltimo
			primero = nuevoNodo;
			ultimo = nuevoNodo;
		}
		else {
			// Agregar el nuevo nodo al final de la cola
			ultimo->siguiente = nuevoNodo;
			ultimo = nuevoNodo;
		}
	}

	// M?todo para leer y eliminar un elemento de la cola
	Solicitud desencolar() {
		if (primero == nullptr) {
			std::cerr << "La cola está vacía." << std::endl;
			return Solicitud("-1", -1, -1, -1); // Valor sentinela para indicar cola vac?a
		}

		Solicitud solicitud = primero->Solicitando;
		Nodo* temp = primero;
		primero = primero->siguiente;

		if (primero == nullptr) {
			// La cola qued? vac?a despu?s de eliminar el nodo
			ultimo = nullptr;
		}

		delete temp;
		return solicitud;
	}
	// M?todo para verificar si la cola est? vac?a
	bool colaVacia() {
		return primero == nullptr;
	}
};
