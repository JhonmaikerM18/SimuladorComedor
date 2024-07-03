#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace System::IO;

class Solicitud {
public:
	string datos;
	int vegetariano;
	int regular;
	int dieta;

	int get_Vegetariano() const {
		return vegetariano;
	}
	int get_Regular() const {
		return regular;
	}
	int get_Dieta() const {
		return dieta;
	}

	Solicitud(string datos, int v, int r, int d) : datos(datos), vegetariano(v), regular(r), dieta(d) {}

	String^ MostrarString() {
		String^ Datos1 = msclr::interop::marshal_as<System::String^>(datos);
		return Datos1;
	}
	String^ MostrarString_completo() {
		String^ Datos1 = msclr::interop::marshal_as<System::String^>(datos);
		return Datos1;
	}
	void guardar(String^ Datos1)
	{
		String^ rutaArchivo = "Supervisores.txt";
		try
		{
			StreamWriter^ escritor = gcnew StreamWriter(rutaArchivo, true);

			String^ linea = Datos1; // Corregido: Eliminado el paréntesis de cierre

			escritor->WriteLine(linea);
			escritor->Close();
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error al guardar los datos: " + ex->Message);
		}
	}
	/* Convierte a String^ - String^ Datos1 = msclr::interop::marshal_as<System::String^>(datos);*/
};
