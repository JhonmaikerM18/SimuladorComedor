#pragma once
#include <iostream>
//.....Menu
public ref class MenuClass
{
private:
	int vegetariano;
	int regular;
	int dieta;
public:
	MenuClass::MenuClass(int a, int b, int c) {
		vegetariano = a;
		regular = b;
		dieta = c;
	}
	MenuClass::~MenuClass() {
	}
	int get_Vegetariano() {
		return vegetariano;
	}
	int get_Regular() {
		return regular;
	}
	int get_Dieta() {
		return dieta;
	}

	void set_Menus(int _Vege, int _Regu, int _Dieta) {
		vegetariano = _Vege;
		regular = _Regu;
		dieta = _Dieta;
	}
};
//... Solicitud
class Solicitud {
public:
	int supervisorID;
	int menuID;
	int vegetariano;
	int regular;
	int dieta;
	Solicitud(int id, int menu) : supervisorID(id), menuID(menu), vegetariano(0), regular(0), dieta(0) {}
};

// Clase para la cola de solicitudes
class ColaSolicitudes {
private:
	struct Nodo {
		Solicitud solicitud;
		Nodo* siguiente;
	};
	Nodo* frente;
	Nodo* fin;
public:
	ColaSolicitudes() : frente(nullptr), fin(nullptr) {}

	bool estaVacia() {
		return frente == nullptr;
	}

	void encolar(const Solicitud& solicitud) {
		Nodo* nuevoNodo = new Nodo{ solicitud, nullptr };
		if (estaVacia()) {
			frente = nuevoNodo;
			fin = nuevoNodo;
		}
		else {
			fin->siguiente = nuevoNodo;
			fin = nuevoNodo;
		}
	}

	Solicitud desencolar() {
		if (estaVacia()) {
			std::cout << "La cola está vacía. No se puede desencolar." << std::endl;
			return Solicitud(-1, -1);
		}

		Nodo* nodoDesencolado = frente;
		frente = frente->siguiente;
		Solicitud solicitud = nodoDesencolado->solicitud;
		delete nodoDesencolado;
		return solicitud;
	}
};

//int main() {
//    ColaSolicitudes miCola;
//
//    // Ejemplo de uso
//    Solicitud solicitud1(1, 0); // Supervisor 1 solicita menú 0
//    Solicitud solicitud2(2, 1); // Supervisor 2 solicita menú 1
//
//    miCola.encolar(solicitud1);
//    miCola.encolar(solicitud2);
//
//    Solicitud solicitudAtendida = miCola.desencolar();
//    std::cout << "Solicitud atendida: Supervisor " << solicitudAtendida.supervisorID
//        << ", Menú " << solicitudAtendida.menuID << std::endl;
//
//    return 0;
//}
