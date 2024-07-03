#pragma once
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace System::IO;

ref class Supervisor
{
private:
	int SupervisorID;
	// Datos Personales
	String^ Nombre;
	String^ Apellido;
	// Datos de Trabajo
	String^ AreaTrabajo;
	String^ Jerarquia;
	int CantidadTrabajadores;
	int vegetariano;
	int regular;
	int dieta;
public:
	Supervisor::Supervisor(int a, String^ b, String^ c, String^ d, String^ e, int f, int g, int h, int i)
	{
		SupervisorID = a;
		Nombre = b;
		Apellido = c;
		AreaTrabajo = d;
		Jerarquia = e;
		CantidadTrabajadores = f;
		vegetariano = g;
		regular = h;
		dieta = i;
	}
	~Supervisor()
	{
	}
	void Mostrar_DGV(DataGridView^ Data, int x) {
		x = Data->Rows->Add();
		//Asignación al DataGridView
		Data->Rows[x]->Cells[0]->Value = Convert::ToString(SupervisorID);
		Data->Rows[x]->Cells[1]->Value = Convert::ToString(Nombre);
		Data->Rows[x]->Cells[2]->Value = Convert::ToString(Apellido);
		Data->Rows[x]->Cells[3]->Value = Convert::ToString(AreaTrabajo);
		Data->Rows[x]->Cells[4]->Value = Convert::ToString(Jerarquia);
		Data->Rows[x]->Cells[5]->Value = Convert::ToString(CantidadTrabajadores);
		Data->Rows[x]->Cells[6]->Value = Convert::ToString(vegetariano);
		Data->Rows[x]->Cells[7]->Value = Convert::ToString(regular);
		Data->Rows[x]->Cells[8]->Value = Convert::ToString(dieta);
		Data->Rows[x]->Cells[9]->Value = Convert::ToString(vegetariano + regular + dieta);
	}
	void fichero_guardar(int x, DataGridView^ Data) {
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

	void guardar_facturas(DataGridView^ Data, TextBox^ text) {
		StreamWriter^ archivo = gcnew StreamWriter(text + ".txt");
		for (int x = 0; x < Data->Rows->Count; x++) {
			if (x == 0) {
				String^ Superior = String::Format("Factura Generada el dia {0} a las {1}\n\n",
					System::DateTime::Now.ToLongDateString(), System::DateTime::Now.ToShortTimeString());
			}
			String^ S_ID = (Data->Rows[x]->Cells[0]->Value->ToString());
			String^ S_Nombre = (Data->Rows[x]->Cells[1]->Value->ToString());
			String^ S_Apellido = (Data->Rows[x]->Cells[2]->Value->ToString());
			String^ S_Area = (Data->Rows[x]->Cells[3]->Value->ToString());
			String^ S_Jerarquia = (Data->Rows[x]->Cells[4]->Value->ToString());
			String^ S_Trabajadores = (Data->Rows[x]->Cells[5]->Value->ToString());
			String^ S_Vegetariano = (Data->Rows[x]->Cells[6]->Value->ToString());
			String^ S_Regular = (Data->Rows[x]->Cells[7]->Value->ToString());
			String^ S_Dieta = (Data->Rows[x]->Cells[8]->Value->ToString());
			String^ S_Total = (Data->Rows[x]->Cells[9]->Value->ToString());

			String^ InformacionFactura = String::Format(
				"ID {0} del Supervisor {1} {2} del área de {3} (con jerarquía de {4}) con {5} a su cargo solicitó:\n" +
				"- {6} vegetarianos\n" +
				"- {7} regulares\n" +
				"- {8} dieta\n" +
				"- {9} TOTAL\n" +
				"--------------------------------------------------------------------------------------\n\n",
				S_ID, S_Nombre, S_Apellido, S_Area, S_Jerarquia, S_Trabajadores, S_Vegetariano, S_Regular, S_Dieta, S_Total);
		}
		archivo->Close();
	}
};