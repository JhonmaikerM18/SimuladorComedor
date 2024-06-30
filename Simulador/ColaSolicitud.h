#include <iostream>

// Definici�n de la clase Nodo
class Nodo {
public:
	int dato;
	Nodo* siguiente;

	Nodo(int valor) : dato(valor), siguiente(nullptr) {}
};

// Definici�n de la clase Cola
class Cola {
private:
	Nodo* primero;
	Nodo* ultimo;

public:
	Cola() : primero(nullptr), ultimo(nullptr) {}

	// M�todo para agregar un elemento a la cola
	void encolar(int valor) {
		Nodo* nuevoNodo = new Nodo(valor);

		if (ultimo == nullptr) {
			// La cola est� vac�a, el nuevo nodo es el primero y el �ltimo
			primero = nuevoNodo;
			ultimo = nuevoNodo;
		}
		else {
			// Agregar el nuevo nodo al final de la cola
			ultimo->siguiente = nuevoNodo;
			ultimo = nuevoNodo;
		}
	}

	// M�todo para leer y eliminar un elemento de la cola
	int desencolar() {
		if (primero == nullptr) {
			std::cerr << "La cola est� vac�a." << std::endl;
			return -1; // Valor sentinela para indicar cola vac�a
		}

		int valor = primero->dato;
		Nodo* temp = primero;
		primero = primero->siguiente;

		if (primero == nullptr) {
			// La cola qued� vac�a despu�s de eliminar el nodo
			ultimo = nullptr;
		}

		delete temp;
		return valor;
	}
};
