#pragma once

using namespace System;
using namespace std;

class Solicitud {
public:
	int SupervisorID;
	int vegetariano;
	int regular;
	int dieta;
	Solicitud(int ID, int vege, int r, int d) : SupervisorID(ID), vegetariano(vege), regular(r), dieta(d) {};
	String^ MostrarString() {
		return String::Format("Supervisor ID: {0}, Vegetariano: {1}, Regular: {2}, Dieta: {3}", SupervisorID, vegetariano, regular, dieta);
	}
};
