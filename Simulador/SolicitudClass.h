#pragma once
#include <iostream>
#include <queue>

using namespace std;
class Solicitud {
public:
	int SupervisorID;
	int vegetariano;
	int regular;
	int dieta;
	Solicitud(int ID, int vege, int r, int d) : SupervisorID(ID), vegetariano(vege), regular(r), dieta(d) {}
};

//// Clase para la cola de solicitudes
//class ColaSolicitudes {
//private:
//	struct Nodo {
//		Solicitud solicitud;
//		Nodo* siguiente;
//	};
//	Nodo* frente;
//	Nodo* fin;
//public:
//	ColaSolicitudes() : frente(nullptr), fin(nullptr) {}
//
//	bool estaVacia() {
//		return frente == nullptr;
//	}
//
//	void encolar(const Solicitud& solicitud) {
//		Nodo* nuevoNodo = new Nodo{ solicitud, nullptr };
//		if (estaVacia()) {
//			frente = nuevoNodo;
//			fin = nuevoNodo;
//		}
//		else {
//			fin->siguiente = nuevoNodo;
//			fin = nuevoNodo;
//		}
//	}
//
//	Solicitud desencolar() {
//		if (estaVacia()) {
//			return Solicitud(-1, -1, -1, -1);
//		}
//
//		Nodo* nodoAEliminar = frente;
//		frente = frente->siguiente;
//		Solicitud solicitud = nodoAEliminar->solicitud;
//		delete nodoAEliminar;
//		return solicitud;
//	}
};
