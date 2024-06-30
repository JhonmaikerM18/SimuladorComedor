#include <iostream>

// Definición de la clase Nodo
class Nodo {
public:
	int dato;
	Nodo* siguiente;

	Nodo(int valor) : dato(valor), siguiente(nullptr) {}
};

// Definición de la clase Cola
class Cola {
private:
	Nodo* primero;
	Nodo* ultimo;

public:
	Cola() : primero(nullptr), ultimo(nullptr) {}

	// Método para agregar un elemento a la cola
	void encolar(int valor) {
		Nodo* nuevoNodo = new Nodo(valor);

		if (ultimo == nullptr) {
			// La cola está vacía, el nuevo nodo es el primero y el último
			primero = nuevoNodo;
			ultimo = nuevoNodo;
		}
		else {
			// Agregar el nuevo nodo al final de la cola
			ultimo->siguiente = nuevoNodo;
			ultimo = nuevoNodo;
		}
	}

	// Método para leer y eliminar un elemento de la cola
	int desencolar() {
		if (primero == nullptr) {
			std::cerr << "La cola está vacía." << std::endl;
			return -1; // Valor sentinela para indicar cola vacía
		}

		int valor = primero->dato;
		Nodo* temp = primero;
		primero = primero->siguiente;

		if (primero == nullptr) {
			// La cola quedó vacía después de eliminar el nodo
			ultimo = nullptr;
		}

		delete temp;
		return valor;
	}
};
