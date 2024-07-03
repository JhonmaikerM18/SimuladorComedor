#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>
#define MAX_SOLICITUDES 10

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace System::IO;

class Solicitud {
public:
	string datos;
	int SupervisorID;
	// Datos Personales
	string Nombre;
	string Apellido;
	// Datos de Trabajo
	string AreaTrabajo;
	string Jerarquia;
	int Trabajadores;
	int vegetariano;
	int regular;
	int dieta;

	Solicitud(int id, string nombre, string apellido, string Area, string Jerar, int trbajs, int v, int r, int d)
		: SupervisorID(id), Nombre(nombre), Apellido(apellido), AreaTrabajo(Area), Jerarquia(Jerar),
		Trabajadores(trbajs), vegetariano(v), regular(r), dieta(d) {}

	void Mostrar_DGV(DataGridView^ Data, int x) const {
		x = Data->Rows->Add();
		//Convierte a String
		String^ Datos1 = msclr::interop::marshal_as<System::String^>(Nombre);
		String^ Datos2 = msclr::interop::marshal_as<System::String^>(Apellido);
		String^ Datos3 = msclr::interop::marshal_as<System::String^>(AreaTrabajo);
		String^ Datos4 = msclr::interop::marshal_as<System::String^>(Jerarquia);
		//Asignación al DataGridView
		Data->Rows[x]->Cells[0]->Value = Convert::ToString(SupervisorID);
		Data->Rows[x]->Cells[1]->Value = Datos1;
		Data->Rows[x]->Cells[2]->Value = Datos2;
		Data->Rows[x]->Cells[3]->Value = Datos3;
		Data->Rows[x]->Cells[4]->Value = Datos4;
		Data->Rows[x]->Cells[5]->Value = Convert::ToString(Trabajadores);
		Data->Rows[x]->Cells[6]->Value = Convert::ToString(vegetariano);
		Data->Rows[x]->Cells[7]->Value = Convert::ToString(regular);
		Data->Rows[x]->Cells[8]->Value = Convert::ToString(dieta);
		Data->Rows[x]->Cells[9]->Value = Convert::ToString(vegetariano + regular + dieta);
	}

	void fichero_leer() {
		if (!File::Exists("Supervisores.txt")) {
			StreamWriter^ archivo = gcnew StreamWriter("Supervisores.txt");
			archivo->Close();
		}
		else {
			StreamReader^ archivo = gcnew StreamReader("Supervisores.txt");
			while (!archivo->EndOfStream) {
				String^ id_S = archivo->ReadLine();
				String^ name = archivo->ReadLine();
				String^ apellido = archivo->ReadLine();
				String^ edad = archivo->ReadLine();
				String^ sexo = archivo->ReadLine();
				String^ jrqa = archivo->ReadLine();
				String^ area = archivo->ReadLine();
				String^ trabajadores = archivo->ReadLine();
				//DGV_Supervisores->Rows->Add();
			}

			archivo->Close();
		}
	}

	/* Convierte a String^ - String^ Datos1 = msclr::interop::marshal_as<System::String^>(datos);*/
	static void fichero_guardar(DataGridView^ Data, int x) {
		StreamWriter^ archivo = gcnew StreamWriter("Supervisores.txt", true);
		archivo->WriteLine(Data->Rows[x]->Cells[0]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[1]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[2]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[3]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[4]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[5]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[6]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[7]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[8]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[9]->Value->ToString());
		archivo->Close();
	}static void fichero_ultimas10(DataGridView^ Data, int x) {
		StreamWriter^ archivo = gcnew StreamWriter("Supervisores.txt", true);
		archivo->WriteLine(Data->Rows[x]->Cells[0]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[1]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[2]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[3]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[4]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[5]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[6]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[7]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[8]->Value->ToString());
		archivo->WriteLine(Data->Rows[x]->Cells[9]->Value->ToString());
		archivo->Close();
	}
};
//// Agregar una nueva solicitud a las últimas 10
//void AgregarNuevaSolicitud(Solicitud nuevaSolicitud) {
//	if (numSolicitudes < MAX_SOLICITUDES) {
//		Ultimas_10_facturas[numSolicitudes].Solicitudes = nuevaSolicitud;
//		numSolicitudes++;
//	}
//	else {
//		// Eliminar la solicitud más antigua
//		for (int i = 0; i < MAX_SOLICITUDES - 1; i++) {
//			Ultimas_10_facturas[i] = Ultimas_10_facturas[i + 1];
//		}
//		Ultimas_10_facturas[MAX_SOLICITUDES - 1].Solicitudes = nuevaSolicitud;
//	}
//}
//
//// Guardar las ultimas 10 solicitudes en el archivo
//static void GuardarUltimasSolicitudes(DataGridView^ Data, int x) {
//	StreamWriter^ archivo = gcnew StreamWriter("Ultimas 10 facturas.txt", false); // Sobreescribir el archivo
//	for (int i = 0; i < numSolicitudes; i++) {
//		Solicitud solicitud = Ultimas_10_facturas[i].Solicitudes;
//		String^ Superior = String::Format("Factura Generada el dia {0} a las {1}\n\n",
//			System::DateTime::Now.ToLongDateString(), System::DateTime::Now.ToShortTimeString());
//
//		String^ S_ID = (Data->Rows[x]->Cells[0]->Value->ToString());
//		String^ S_Nombre = (Data->Rows[x]->Cells[1]->Value->ToString());
//		String^ S_Apellido = (Data->Rows[x]->Cells[2]->Value->ToString());
//		String^ S_Area = (Data->Rows[x]->Cells[3]->Value->ToString());
//		String^ S_Jerarquia = (Data->Rows[x]->Cells[4]->Value->ToString());
//		String^ S_Trabajadores = (Data->Rows[x]->Cells[5]->Value->ToString());
//		String^ S_Vegetariano = (Data->Rows[x]->Cells[6]->Value->ToString());
//		String^ S_Regular = (Data->Rows[x]->Cells[7]->Value->ToString());
//		String^ S_Dieta = (Data->Rows[x]->Cells[8]->Value->ToString());
//		String^ S_Total = (Data->Rows[x]->Cells[9]->Value->ToString());
//
//		String^ InformacionFactura = String::Format(
//			"ID {0} del Supervisor {1} {2} del área de {3} (con jerarquía de {4}) con {5} a su cargo solicitó:\n" +
//			"- {6} vegetarianos\n" +
//			"- {7} regulares\n" +
//			"- {8} dieta\n" +
//			"- {9} TOTAL\n" +
//			"--------------------------------------------------------------------------------------\n\n",
//			S_ID, S_Nombre, S_Apellido, S_Area, S_Jerarquia, S_Trabajadores, S_Vegetariano, S_Regular, S_Dieta, S_Total);
//	}
//	archivo->Close();
//}