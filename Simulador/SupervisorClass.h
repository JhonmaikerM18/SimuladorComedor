#pragma once
using namespace System;
using namespace System::IO;
using namespace std;

public ref class Supervisor
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

public:
	Supervisor::Supervisor(int a, String^ b, String^ c, String^ d, String^ e, int f)
	{
		SupervisorID = a;
		Nombre = b;
		Apellido = c;
		AreaTrabajo = d;
		NivelJerarquico = e;
		CantidadTrabajadores = f;
	}
	~Supervisor()
	{
	}

	void Supervisor::guardar(/*Solicitud menu*/)
	{
		String^ rutaArchivo = "Supervisores.txt";
		try
		{
			StreamWriter^ escritor = gcnew StreamWriter(rutaArchivo, true); // true para agregar al archivo existente, osea se pone debajo del que ya este

			String^ linea = String::Format("{0}|{1}|{2}|{3}|{4}|{5}|{6}|{7}|{8}",
				SupervisorID, Nombre, Apellido, AreaTrabajo, NivelJerarquico, CantidadTrabajadores
			/*,menu->get_Vegetariano(), menu->get_Regular(), menu->get_Dieta()*/);

			escritor->WriteLine(linea);
			escritor->Close();
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error al guardar los datos: " + ex->Message);
		}
	}

	void Supervisor::leer(/*Solicitud menu*/)
	{
		String^ rutaArchivo = "Supervisores.txt";
		try
		{
			StreamReader^ lector = gcnew StreamReader(rutaArchivo);

			while (!lector->EndOfStream)
			{
				String^ linea = lector->ReadLine();
				cli::array<String^>^ campos = linea->Split('|');

				if (campos->Length == 9)//9 porque son la cantidad de variable de la clase
				{
					SupervisorID = Convert::ToInt32(campos[0]);
					Nombre = campos[1];
					Apellido = campos[2];
					AreaTrabajo = campos[3];
					NivelJerarquico = campos[4];
					CantidadTrabajadores = Convert::ToInt32(campos[5]);
					int _vegeta = Convert::ToInt32(campos[6]);
					int _regular = Convert::ToInt32(campos[7]);
					int _dieta = Convert::ToInt32(campos[8]);
					/*menu->set_Menus(_vegeta, _regular, _dieta);*/
				}
			}

			lector->Close();
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error al leer los datos: " + ex->Message);
		}
	}
};