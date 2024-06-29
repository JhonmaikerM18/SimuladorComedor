#pragma once
#include <string>
#include "MenuClass.h"
//#include <msclr/marshal_cppstd.h> // Necesario para convertir System::String^ a std::string
#define MAX_SIZE 10 // Tamaño máximo de la cola

using namespace std;

// Estructura para el nodo de solicitud
//struct Nodo {
//	string Nombre;
//	string Apellido;
//	int Menu_Vegetariano;
//	int Menu_Regular;
//	int Menu_Dieta;
//	Nodo* siguiente;
//};

class Cola {
private:
	int elementos[MAX_SIZE];
	int frente; // Índice del frente de la cola
	int fin;    // Índice del final de la cola

public:
	Cola() {
		frente = -1;
		fin = -1;
	}

	bool estaVacia() {
		return frente == -1;
	}

	bool estaLlena() {
		return (frente == 0 && fin == MAX_SIZE - 1) || (frente == fin + 1);
	}

	void encolar(int elemento) {
		if (estaLlena()) {
			cout << "La cola está llena. No se puede encolar más elementos." << endl;
			return;
		}

		if (frente == -1) {
			frente = 0;
		}

		fin = (fin + 1) % MAX_SIZE;
		elementos[fin] = elemento;
	}

	int desencolar() {
		if (estaVacia()) {
			cout << "La cola está vacía. No se puede desencolar." << endl;
			return -1;
		}

		int elemento = elementos[frente];
		if (frente == fin) {
			frente = -1;
			fin = -1;
		}
		else {
			frente = (frente + 1) % MAX_SIZE;
		}

		return elemento;
	}
};

//int main() {
//    Cola miCola;
//
//    miCola.encolar(10);
//    miCola.encolar(20);
//    miCola.encolar(30);
//
//    std::cout << "Elemento desencolado: " << miCola.desencolar() << std::endl;
//    std::cout << "Elemento desencolado: " << miCola.desencolar() << std::endl;
//
//    return 0;
//}
//
//	void procesarSolicitudes(System::Windows::Forms::ProgressBar^ progress_bar, System::Windows::Forms::Label^ label, MenuClass^ menu) {
//		int vegetariano = menu->get_Vegetariano();
//		int regular = menu->get_Regular();
//		int dieta = menu->get_Dieta();
//		if (progress_bar->Value <= 100) {
//			progress_bar->Value++;
//		}
//		else progress_bar->Value = 0;
//		//..
//		if (progress_bar->Value > 0)
//			label->Text = "Procesando solicitud";
//		else if (progress_bar->Value == 33)
//			label->Text = "Fueron entregado " + vegetariano + " vegetarianos";
//		else if (progress_bar->Value == 66)
//			label->Text = "Fueron entregado " + regular + " vegetarianos";
//		else if (progress_bar->Value == 99)
//			label->Text = "Fueron entregado " + dieta + " vegetarianos";
//		else {
//			while (frente != nullptr) {
//				// Realizar la entrega del menú correspondiente
//				// (puedes implementar esta parte según tus necesidades)
//				Nodo* temp = frente;
//				frente = frente->siguiente;
//			}
//			final = nullptr; // Reiniciar el puntero al final
//		}
//	}