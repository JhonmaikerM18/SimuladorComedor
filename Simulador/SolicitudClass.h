#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>

using namespace System;
using namespace std;
using namespace System::IO; // Corregido: Cambiado "std" por "System::IO"

class Solicitud {
public:
	string datos; // Declaración correcta
	int vegetariano;
	int regular;
	int dieta;

	Solicitud(string datos, int v, int r, int d) : datos(datos), vegetariano(v), regular(r), dieta(d) {}

	String^ MostrarString() {
		String^ Datos1 = msclr::interop::marshal_as<System::String^>(datos);
		return Datos1;
	}
	void guardar()
	{
		String^ rutaArchivo = "Supervisores.txt";
		try
		{
			StreamWriter^ escritor = gcnew StreamWriter(rutaArchivo, true);

			// Convierte a String^
			String^ Datos1 = msclr::interop::marshal_as<System::String^>(datos);

			String^ linea = Datos1; // Corregido: Eliminado el paréntesis de cierre

			escritor->WriteLine(linea);
			escritor->Close();
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error al guardar los datos: " + ex->Message);
		}
	}
};
