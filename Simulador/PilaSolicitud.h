#include <iostream>
#include <string>

using namespace std;
// Definici�n de la clase Nodo
class Nodo_pila {
public:
	string texto; // Cambiamos de Solicitud a std::string
	Nodo_pila* siguiente;
	Nodo_pila(const std::string& contenido) : texto(contenido), siguiente(nullptr) {}
	string get_menu() {
		return texto;
	}
};

// Definici�n de la clase Pila
class Pila {
private:
	Nodo_pila* tope;

public:
	Pila() : tope(nullptr) {}

	// M�todo para apilar una cadena de texto
	void apilar(const string& contenido) {
		Nodo_pila* nuevoNodo = new Nodo_pila(contenido);
		nuevoNodo->siguiente = tope;
		tope = nuevoNodo;
	}

	// M�todo para desapilar una cadena de texto
	string desapilar() {
		if (tope == nullptr) {
			cerr << "La pila est� vac�a." << endl;
			return "";
		}

		string contenido = tope->texto;
		Nodo_pila* temp = tope;
		tope = tope->siguiente;
		delete temp;
		return contenido;
	}

	// M�todo para verificar si la pila est� vac�a
	bool pilaVacia() {
		return tope == nullptr;
	}
};