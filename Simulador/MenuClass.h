#pragma once
public ref class MenuClass
{
private:
	int vegetariano;
	int regular;
	int dieta;
	//..
public:
	MenuClass::MenuClass(int a, int b, int c) {
		vegetariano = a;
		regular = b;
		dieta = c;
	}
	MenuClass::~MenuClass() {
	}
	int get_Vegetariano() {
		return vegetariano;
	}
	int get_Regular() {
		return regular;
	}
	int get_Dieta() {
		return dieta;
	}

	void set_Menus(int _Vege, int _Regu, int _Dieta) {
		vegetariano = _Vege;
		regular = _Regu;
		dieta = _Dieta;
	}
};
