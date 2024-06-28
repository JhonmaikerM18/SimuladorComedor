#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace std;

ref class Supervisor
{
private:
	// Datos NO Modificables
	int SupervisorID;
	// Datos Personales
	String^ Nombre;
	String^ Apellido;
	// Datos de Trabajo
	String^ AreaTrabajo;
	String^ NivelJerarquico;
	int CantidadTrabajadores;
	// COMIDAS - MENÚS
	int MenuVegetariano;
	int MenuRegular;
	int MenuDieta;

public:
	Supervisor(int, String^, String^, String^, String^, int, int, int, int); //Constructor
	~Supervisor(); //Destructor
	void guardar();
	void leer();
};

Supervisor::Supervisor(int a, String^ b, String^ c, String^ d, String^ e, int f, int g, int h, int i)
{
	SupervisorID = a;
	Nombre = b;
	Apellido = c;
	AreaTrabajo = d;
	NivelJerarquico = e;
	CantidadTrabajadores = f;
	MenuVegetariano = g;
	MenuRegular = h;
	MenuDieta = i;
}
Supervisor::~Supervisor() {
	SupervisorID = 0;
	Nombre = "";
	Apellido = "";
	AreaTrabajo = "";
	NivelJerarquico = "";
	CantidadTrabajadores = 0;
	MenuVegetariano = 0;
	MenuRegular = 0;
	MenuDieta = 0;
}

void Supervisor::guardar()
{
	String^ rutaArchivo = "Supervisores.txt";
	try
	{
		StreamWriter^ escritor = gcnew StreamWriter(rutaArchivo, true); // true para agregar al archivo existente, osea se pone debajo del que ya este

		String^ linea = String::Format("{0}|{1}|{2}|{3}|{4}|{5}|{6}|{7}|{8}",
			SupervisorID, Nombre, Apellido, AreaTrabajo, NivelJerarquico, CantidadTrabajadores,
			MenuVegetariano, MenuRegular, MenuDieta);

		escritor->WriteLine(linea);
		escritor->Close();

		Console::WriteLine("Datos guardados correctamente en el archivo.");
	}
	catch (Exception^ ex)
	{
		Console::WriteLine("Error al guardar los datos: " + ex->Message);
	}
}

void Supervisor::leer()
{
	String^ rutaArchivo = "Supervisores.txt";

	try
	{
		StreamReader^ lector = gcnew StreamReader(rutaArchivo);

		while (!lector->EndOfStream)
		{
			String^ linea = lector->ReadLine();
			array<String^>^ campos = linea->Split('|');

			if (campos->Length == 9)//9 porque son la cantidad de variable de la clase
			{
				SupervisorID = Convert::ToInt32(campos[0]);
				Nombre = campos[1];
				Apellido = campos[2];
				AreaTrabajo = campos[3];
				NivelJerarquico = campos[4];
				CantidadTrabajadores = Convert::ToInt32(campos[5]);
				MenuVegetariano = Convert::ToInt32(campos[6]);
				MenuRegular = Convert::ToInt32(campos[7]);
				MenuDieta = Convert::ToInt32(campos[8]);
			}
		}

		lector->Close();
	}
	catch (Exception^ ex)
	{
		Console::WriteLine("Error al leer los datos: " + ex->Message);
	}
}