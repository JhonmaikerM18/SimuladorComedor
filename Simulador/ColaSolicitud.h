#pragma once
#include <string>
#include <msclr/marshal_cppstd.h> // Necesario para convertir System::String^ a std::string //Mediooooo dolorrr de cabeza esto <- :'(

using namespace std;

// Estructura para el nodo de solicitud
struct NodoSolicitud {
	string Nombre;
	string Apellido;
	int Menu_Vegetariano;
	int Menu_Regular;
	int Menu_Dieta;
	NodoSolicitud* siguiente;
};

// Clase para la cola de solicitudes
public class ColaSolicitudes {
private:
	NodoSolicitud* frente;
	NodoSolicitud* final;

public:
	ColaSolicitudes() : frente(nullptr), final(nullptr) {}

	// Método para agregar una solicitud a la cola
	void agregarSolicitud(System::String^ nombre, System::String^ apellido, int veg, int reg, int dieta) {
		// Convertir System::String ^ a std::string
		string nombreStd = msclr::interop::marshal_as<string>(nombre);
		string apellidoStd = msclr::interop::marshal_as<string>(apellido);

		NodoSolicitud* nuevoNodo = new NodoSolicitud;
		nuevoNodo->Nombre = nombreStd;
		nuevoNodo->Apellido = apellidoStd;
		nuevoNodo->Menu_Vegetariano = veg;
		nuevoNodo->Menu_Regular = reg;
		nuevoNodo->Menu_Dieta = dieta;
		nuevoNodo->siguiente = nullptr;
		if (final == nullptr) {
			frente = nuevoNodo;
		}
		else {
			final->siguiente = nuevoNodo;
		}
		final = nuevoNodo;
	}
	// Método para procesar las solicitudes en orden inverso
	void procesarSolicitudes() {
		while (frente != nullptr) {
			// Realizar la entrega del menú correspondiente
			// (puedes implementar esta parte según tus necesidades)
			NodoSolicitud* temp = frente;
			frente = frente->siguiente;
			delete temp;
		}
		final = nullptr; // Reiniciar el puntero al final
	}
};
