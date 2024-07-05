#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace System::IO;

//vector<SolicitudEntrega> solicitudes;
//vector<SolicitudEntrega> entregas;

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
};
