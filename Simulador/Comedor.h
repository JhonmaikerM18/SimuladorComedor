#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include "ColaSolicitud.h"

#define TIEMPO_MAX_SEGUNDOS_TEMPORIZADOR 120
#define TIEMPO_MAX_SEGUNDOS_CRONOMETRO 300
#define MIN_DE_DATOS 50
#define MAX_DE_DATOS 70
#define MAX_DE_MENUS 10
#define MAX_TRABAJADORES 300 // Esta constante tambi�n modifica la cantidad maxima de comida
#define TAMANO_SOLICITUD 10

//Solicitud Solicitando[TAMANO_SOLICITUD]; //Arreglo de solicitudes
Cola miCola;
namespace Simulador {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Comedor
	/// </summary>
	public ref class Comedor : public System::Windows::Forms::Form
	{
	public:
		Comedor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Comedor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ verde2;
	protected:
	private: System::Windows::Forms::TextBox^ text_Trabajadores;
	private: System::Windows::Forms::Label^ lbl_ID;
	private: System::Windows::Forms::TextBox^ text_ID;
	private: System::Windows::Forms::ComboBox^ combo_Nombre;
	private: System::Windows::Forms::Label^ lbl_Trabajadores;
	private: System::Windows::Forms::ComboBox^ combo_Apellido;
	private: System::Windows::Forms::PictureBox^ verde9;
	private: System::Windows::Forms::PictureBox^ verde8;
	private: System::Windows::Forms::PictureBox^ verde7;
	private: System::Windows::Forms::Label^ lbl_Temporizador;
	private: System::Windows::Forms::Label^ lbl_Tiempo;

	private: System::Windows::Forms::Label^ lbl_Num_Trabajadores;

	private:

	public:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ text_dieta;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	public: System::Windows::Forms::Timer^ Temporizador;
	private:
	private: System::Windows::Forms::Label^ lbl_Apellido;
	public:
	private: System::Windows::Forms::Label^ lbl_Nombre;
	private: System::Windows::Forms::TextBox^ text_regular;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lbl_Jerarquia;
	private: System::Windows::Forms::Label^ lbl_Area;
	private: System::Windows::Forms::ComboBox^ combo_Jerarquia;
	private: System::Windows::Forms::TextBox^ text_vegetariano;
	private: System::Windows::Forms::ComboBox^ combo_Area;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pic_Logo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbl_Control_Pause;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lbl_Cronometro;
	private: System::Windows::Forms::Button^ btn_pause;
	private: System::Windows::Forms::Label^ lbl_Tiempo_Cronometro;
	private: System::Windows::Forms::Button^ btn_imprimir;
	private: System::Windows::Forms::GroupBox^ group_Datos;
	private: System::Windows::Forms::PictureBox^ verde6;
	private: System::Windows::Forms::PictureBox^ verde5;
	private: System::Windows::Forms::PictureBox^ verde4;
	private: System::Windows::Forms::PictureBox^ verde3;
	private: System::Windows::Forms::PictureBox^ verde1;
	private: System::Windows::Forms::GroupBox^ groupMenu;
	private: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Timer^ Cronometro_Visible;
	private: System::Windows::Forms::PictureBox^ Logo_Superior_Derecha;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Timer^ Timer_Desencolar;
	private: System::Windows::Forms::ProgressBar^ barra_desencolar;
	private: System::Windows::Forms::Label^ barra_porcentaje;

	public:
	private:

	private:
	private: System::ComponentModel::IContainer^ components;
	public:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Comedor::typeid));
			this->verde2 = (gcnew System::Windows::Forms::PictureBox());
			this->text_Trabajadores = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ID = (gcnew System::Windows::Forms::Label());
			this->text_ID = (gcnew System::Windows::Forms::TextBox());
			this->combo_Nombre = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Trabajadores = (gcnew System::Windows::Forms::Label());
			this->combo_Apellido = (gcnew System::Windows::Forms::ComboBox());
			this->verde9 = (gcnew System::Windows::Forms::PictureBox());
			this->verde8 = (gcnew System::Windows::Forms::PictureBox());
			this->verde7 = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_Temporizador = (gcnew System::Windows::Forms::Label());
			this->lbl_Tiempo = (gcnew System::Windows::Forms::Label());
			this->lbl_Num_Trabajadores = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->text_dieta = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Temporizador = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbl_Apellido = (gcnew System::Windows::Forms::Label());
			this->lbl_Nombre = (gcnew System::Windows::Forms::Label());
			this->text_regular = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbl_Jerarquia = (gcnew System::Windows::Forms::Label());
			this->lbl_Area = (gcnew System::Windows::Forms::Label());
			this->combo_Jerarquia = (gcnew System::Windows::Forms::ComboBox());
			this->text_vegetariano = (gcnew System::Windows::Forms::TextBox());
			this->combo_Area = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pic_Logo = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Control_Pause = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl_Cronometro = (gcnew System::Windows::Forms::Label());
			this->btn_pause = (gcnew System::Windows::Forms::Button());
			this->lbl_Tiempo_Cronometro = (gcnew System::Windows::Forms::Label());
			this->btn_imprimir = (gcnew System::Windows::Forms::Button());
			this->group_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->verde6 = (gcnew System::Windows::Forms::PictureBox());
			this->verde5 = (gcnew System::Windows::Forms::PictureBox());
			this->verde4 = (gcnew System::Windows::Forms::PictureBox());
			this->verde3 = (gcnew System::Windows::Forms::PictureBox());
			this->verde1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupMenu = (gcnew System::Windows::Forms::GroupBox());
			this->Logo_Superior_Derecha = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Cronometro_Visible = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Timer_Desencolar = (gcnew System::Windows::Forms::Timer(this->components));
			this->barra_desencolar = (gcnew System::Windows::Forms::ProgressBar());
			this->barra_porcentaje = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_Logo))->BeginInit();
			this->panel1->SuspendLayout();
			this->group_Datos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde1))->BeginInit();
			this->groupMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo_Superior_Derecha))->BeginInit();
			this->SuspendLayout();
			//
			// verde2
			//
			this->verde2->Enabled = false;
			this->verde2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verde2.Image")));
			this->verde2->Location = System::Drawing::Point(215, 123);
			this->verde2->Name = L"verde2";
			this->verde2->Size = System::Drawing::Size(29, 28);
			this->verde2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->verde2->TabIndex = 15;
			this->verde2->TabStop = false;
			this->verde2->Visible = false;
			//
			// text_Trabajadores
			//
			this->text_Trabajadores->BackColor = System::Drawing::Color::White;
			this->text_Trabajadores->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_Trabajadores->Enabled = false;
			this->text_Trabajadores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->text_Trabajadores->Location = System::Drawing::Point(15, 439);
			this->text_Trabajadores->Name = L"text_Trabajadores";
			this->text_Trabajadores->Size = System::Drawing::Size(192, 29);
			this->text_Trabajadores->TabIndex = 13;
			//
			// lbl_ID
			//
			this->lbl_ID->AutoSize = true;
			this->lbl_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ID->Location = System::Drawing::Point(19, 21);
			this->lbl_ID->Name = L"lbl_ID";
			this->lbl_ID->Size = System::Drawing::Size(103, 20);
			this->lbl_ID->TabIndex = 6;
			this->lbl_ID->Text = L"Identificación";
			//
			// text_ID
			//
			this->text_ID->BackColor = System::Drawing::Color::White;
			this->text_ID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_ID->Enabled = false;
			this->text_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_ID->Location = System::Drawing::Point(15, 58);
			this->text_ID->Name = L"text_ID";
			this->text_ID->Size = System::Drawing::Size(192, 29);
			this->text_ID->TabIndex = 12;
			//
			// combo_Nombre
			//
			this->combo_Nombre->BackColor = System::Drawing::Color::White;
			this->combo_Nombre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_Nombre->Enabled = false;
			this->combo_Nombre->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->combo_Nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_Nombre->FormattingEnabled = true;
			this->combo_Nombre->Items->AddRange(gcnew cli::array< System::Object^  >(40) {
				L"María", L"Carmen", L"Antonio", L"Manuel",
					L"Francisco", L"David", L"Juan", L"Javier", L"Daniel", L"Alejandro", L"Carlos", L"Miguel", L"Pablo", L"Rafael", L"Sergio", L"Ángel",
					L"Pedro", L"Fernando", L"José ", L"Susej", L"Antonia", L"Blanca", L"Luis", L"Alberto", L"Adrián", L"Juan ", L"Carlos", L"Diego",
					L"Iván", L"Óscar", L"Enrique", L"Martín", L"Hugo", L"Mateo", L"Leo", L"Lucas", L"Daniel", L"Alejandro", L"Pablo", L"Enzo"
			});
			this->combo_Nombre->Location = System::Drawing::Point(15, 123);
			this->combo_Nombre->Name = L"combo_Nombre";
			this->combo_Nombre->Size = System::Drawing::Size(192, 28);
			this->combo_Nombre->TabIndex = 1;
			//
			// lbl_Trabajadores
			//
			this->lbl_Trabajadores->AutoSize = true;
			this->lbl_Trabajadores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Trabajadores->Location = System::Drawing::Point(20, 407);
			this->lbl_Trabajadores->Name = L"lbl_Trabajadores";
			this->lbl_Trabajadores->Size = System::Drawing::Size(102, 20);
			this->lbl_Trabajadores->TabIndex = 11;
			this->lbl_Trabajadores->Text = L"Trabajadores";
			//
			// combo_Apellido
			//
			this->combo_Apellido->BackColor = System::Drawing::Color::White;
			this->combo_Apellido->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_Apellido->Enabled = false;
			this->combo_Apellido->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->combo_Apellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_Apellido->FormattingEnabled = true;
			this->combo_Apellido->Items->AddRange(gcnew cli::array< System::Object^  >(40) {
				L"García", L"González", L"Rodríguez", L"Fernández",
					L"López", L"Martínez", L"Sánchez", L"Pérez", L"Gómez", L"Martín", L"Jiménez", L"Ruiz", L"Hernández", L"Díaz", L"Moreno", L"Muñoz",
					L"Álvarez", L"Romero", L"Alonso", L"Gutiérrez", L"Navarro", L"Torres", L"Domínguez", L"Vázquez", L"Ramos", L"Gil", L"Ramírez",
					L"Serrano", L"Blanco", L"Molina", L"Morales", L"Suárez", L"Ortega", L"Delgado", L"Castro", L"Ortiz", L"Rubio", L"Marín", L"Sanz",
					L"Núñez"
			});
			this->combo_Apellido->Location = System::Drawing::Point(15, 204);
			this->combo_Apellido->Name = L"combo_Apellido";
			this->combo_Apellido->Size = System::Drawing::Size(192, 28);
			this->combo_Apellido->TabIndex = 2;
			//
			// verde9
			//
			this->verde9->Enabled = false;
			this->verde9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verde9.Image")));
			this->verde9->Location = System::Drawing::Point(670, 52);
			this->verde9->Name = L"verde9";
			this->verde9->Size = System::Drawing::Size(23, 26);
			this->verde9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->verde9->TabIndex = 31;
			this->verde9->TabStop = false;
			this->verde9->Visible = false;
			//
			// verde8
			//
			this->verde8->Enabled = false;
			this->verde8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verde8.Image")));
			this->verde8->Location = System::Drawing::Point(427, 52);
			this->verde8->Name = L"verde8";
			this->verde8->Size = System::Drawing::Size(23, 26);
			this->verde8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->verde8->TabIndex = 30;
			this->verde8->TabStop = false;
			this->verde8->Visible = false;
			//
			// verde7
			//
			this->verde7->Enabled = false;
			this->verde7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verde7.Image")));
			this->verde7->Location = System::Drawing::Point(192, 52);
			this->verde7->Name = L"verde7";
			this->verde7->Size = System::Drawing::Size(23, 26);
			this->verde7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->verde7->TabIndex = 21;
			this->verde7->TabStop = false;
			this->verde7->Visible = false;
			//
			// lbl_Temporizador
			//
			this->lbl_Temporizador->AutoSize = true;
			this->lbl_Temporizador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Temporizador->ForeColor = System::Drawing::Color::Red;
			this->lbl_Temporizador->Location = System::Drawing::Point(528, 99);
			this->lbl_Temporizador->Name = L"lbl_Temporizador";
			this->lbl_Temporizador->Size = System::Drawing::Size(40, 20);
			this->lbl_Temporizador->TabIndex = 29;
			this->lbl_Temporizador->Text = L"2:00";
			//
			// lbl_Tiempo
			//
			this->lbl_Tiempo->AutoSize = true;
			this->lbl_Tiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Tiempo->Location = System::Drawing::Point(457, 99);
			this->lbl_Tiempo->Name = L"lbl_Tiempo";
			this->lbl_Tiempo->Size = System::Drawing::Size(65, 20);
			this->lbl_Tiempo->TabIndex = 28;
			this->lbl_Tiempo->Text = L"Tiempo:";
			//
			// lbl_Num_Trabajadores
			//
			this->lbl_Num_Trabajadores->AutoSize = true;
			this->lbl_Num_Trabajadores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_Num_Trabajadores->Location = System::Drawing::Point(11, 99);
			this->lbl_Num_Trabajadores->Name = L"lbl_Num_Trabajadores";
			this->lbl_Num_Trabajadores->Size = System::Drawing::Size(196, 20);
			this->lbl_Num_Trabajadores->TabIndex = 23;
			this->lbl_Num_Trabajadores->Text = L"Números de trabajadores: ";
			//
			// pictureBox1
			//
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			//
			// pictureBox2
			//
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(247, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(75, 66);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			//
			// text_dieta
			//
			this->text_dieta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_dieta->Enabled = false;
			this->text_dieta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_dieta->Location = System::Drawing::Point(578, 52);
			this->text_dieta->Name = L"text_dieta";
			this->text_dieta->Size = System::Drawing::Size(86, 26);
			this->text_dieta->TabIndex = 22;
			//
			// pictureBox3
			//
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(493, 23);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(75, 66);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			//
			// Temporizador
			//
			this->Temporizador->Interval = 1000;
			this->Temporizador->Tick += gcnew System::EventHandler(this, &Comedor::Temporizador_Tick);
			//
			// lbl_Apellido
			//
			this->lbl_Apellido->AutoSize = true;
			this->lbl_Apellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Apellido->Location = System::Drawing::Point(18, 168);
			this->lbl_Apellido->Name = L"lbl_Apellido";
			this->lbl_Apellido->Size = System::Drawing::Size(65, 20);
			this->lbl_Apellido->TabIndex = 8;
			this->lbl_Apellido->Text = L"Apellido";
			//
			// lbl_Nombre
			//
			this->lbl_Nombre->AutoSize = true;
			this->lbl_Nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Nombre->Location = System::Drawing::Point(17, 93);
			this->lbl_Nombre->Name = L"lbl_Nombre";
			this->lbl_Nombre->Size = System::Drawing::Size(65, 20);
			this->lbl_Nombre->TabIndex = 7;
			this->lbl_Nombre->Text = L"Nombre";
			//
			// text_regular
			//
			this->text_regular->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_regular->Enabled = false;
			this->text_regular->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_regular->Location = System::Drawing::Point(332, 52);
			this->text_regular->Name = L"text_regular";
			this->text_regular->Size = System::Drawing::Size(89, 26);
			this->text_regular->TabIndex = 21;
			//
			// label7
			//
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(90, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 24);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Vegetariano";
			//
			// lbl_Jerarquia
			//
			this->lbl_Jerarquia->AutoSize = true;
			this->lbl_Jerarquia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Jerarquia->Location = System::Drawing::Point(18, 333);
			this->lbl_Jerarquia->Name = L"lbl_Jerarquia";
			this->lbl_Jerarquia->Size = System::Drawing::Size(75, 20);
			this->lbl_Jerarquia->TabIndex = 10;
			this->lbl_Jerarquia->Text = L"Jerarquia";
			//
			// lbl_Area
			//
			this->lbl_Area->AutoSize = true;
			this->lbl_Area->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Area->Location = System::Drawing::Point(18, 254);
			this->lbl_Area->Name = L"lbl_Area";
			this->lbl_Area->Size = System::Drawing::Size(122, 20);
			this->lbl_Area->TabIndex = 9;
			this->lbl_Area->Text = L"Area de Trabajo";
			//
			// combo_Jerarquia
			//
			this->combo_Jerarquia->BackColor = System::Drawing::Color::White;
			this->combo_Jerarquia->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_Jerarquia->Enabled = false;
			this->combo_Jerarquia->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->combo_Jerarquia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_Jerarquia->FormattingEnabled = true;
			this->combo_Jerarquia->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Nivel Estratégico", L"Nivel Táctico", L"Nivel Operativo",
					L"Presidente", L"Vicepresidente"
			});
			this->combo_Jerarquia->Location = System::Drawing::Point(15, 366);
			this->combo_Jerarquia->Name = L"combo_Jerarquia";
			this->combo_Jerarquia->Size = System::Drawing::Size(192, 28);
			this->combo_Jerarquia->TabIndex = 4;
			//
			// text_vegetariano
			//
			this->text_vegetariano->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_vegetariano->Enabled = false;
			this->text_vegetariano->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_vegetariano->Location = System::Drawing::Point(94, 52);
			this->text_vegetariano->Name = L"text_vegetariano";
			this->text_vegetariano->Size = System::Drawing::Size(89, 26);
			this->text_vegetariano->TabIndex = 20;
			//
			// combo_Area
			//
			this->combo_Area->BackColor = System::Drawing::Color::White;
			this->combo_Area->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_Area->Enabled = false;
			this->combo_Area->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->combo_Area->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_Area->FormattingEnabled = true;
			this->combo_Area->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"Recursos humanos", L"Ventas y marketing", L"Finanzas y contabilidad",
					L"Operaciones y producción", L"Tecnología de la información", L"Gestión de proyectos y desarrollo", L"Abogacía", L"Arte y fotografía",
					L"Atención al cliente", L"Administración de bases de datos", L"Administración de subvenciones", L"Medicina", L"Arquitectura",
					L"Ingeniería", L"Diseño", L"Tecnología", L"Médico", L"Maestro", L"Diseñador gráfico", L"Hostelería y Restaurantes", L"Área de Finanzas",
					L"Logística y Distribución", L"Desarrollo de Software", L"Marketing Digital", L"Gestión de Proyectos"
			});
			this->combo_Area->Location = System::Drawing::Point(15, 292);
			this->combo_Area->Name = L"combo_Area";
			this->combo_Area->Size = System::Drawing::Size(192, 24);
			this->combo_Area->TabIndex = 3;
			//
			// label8
			//
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(345, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 24);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Regular";
			//
			// pic_Logo
			//
			this->pic_Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic_Logo.Image")));
			this->pic_Logo->Location = System::Drawing::Point(3, 493);
			this->pic_Logo->Name = L"pic_Logo";
			this->pic_Logo->Size = System::Drawing::Size(238, 229);
			this->pic_Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic_Logo->TabIndex = 43;
			this->pic_Logo->TabStop = false;
			//
			// panel1
			//
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->lbl_Control_Pause);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->lbl_Cronometro);
			this->panel1->Controls->Add(this->btn_pause);
			this->panel1->Controls->Add(this->lbl_Tiempo_Cronometro);
			this->panel1->Controls->Add(this->btn_imprimir);
			this->panel1->Location = System::Drawing::Point(272, 406);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(696, 79);
			this->panel1->TabIndex = 42;
			//
			// lbl_Control_Pause
			//
			this->lbl_Control_Pause->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lbl_Control_Pause->AutoSize = true;
			this->lbl_Control_Pause->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Control_Pause->Location = System::Drawing::Point(10, 44);
			this->lbl_Control_Pause->Name = L"lbl_Control_Pause";
			this->lbl_Control_Pause->Size = System::Drawing::Size(115, 29);
			this->lbl_Control_Pause->TabIndex = 35;
			this->lbl_Control_Pause->Text = L"Pausado";
			this->lbl_Control_Pause->Visible = false;
			//
			// button1
			//
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(154, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 34);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Detener";
			this->button1->UseVisualStyleBackColor = true;
			//
			// lbl_Cronometro
			//
			this->lbl_Cronometro->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->lbl_Cronometro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Cronometro->ForeColor = System::Drawing::Color::Red;
			this->lbl_Cronometro->Location = System::Drawing::Point(637, 46);
			this->lbl_Cronometro->Name = L"lbl_Cronometro";
			this->lbl_Cronometro->Size = System::Drawing::Size(45, 25);
			this->lbl_Cronometro->TabIndex = 31;
			this->lbl_Cronometro->Text = L"0:00";
			//
			// btn_pause
			//
			this->btn_pause->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btn_pause->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_pause->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pause->Location = System::Drawing::Point(250, 41);
			this->btn_pause->Name = L"btn_pause";
			this->btn_pause->Size = System::Drawing::Size(83, 34);
			this->btn_pause->TabIndex = 26;
			this->btn_pause->Text = L"Pausar";
			this->btn_pause->UseVisualStyleBackColor = true;
			this->btn_pause->Click += gcnew System::EventHandler(this, &Comedor::btn_pause_Click);
			//
			// lbl_Tiempo_Cronometro
			//
			this->lbl_Tiempo_Cronometro->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->lbl_Tiempo_Cronometro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_Tiempo_Cronometro->Location = System::Drawing::Point(469, 46);
			this->lbl_Tiempo_Cronometro->Name = L"lbl_Tiempo_Cronometro";
			this->lbl_Tiempo_Cronometro->Size = System::Drawing::Size(162, 25);
			this->lbl_Tiempo_Cronometro->TabIndex = 30;
			this->lbl_Tiempo_Cronometro->Text = L"Tiempo transcurido:";
			//
			// btn_imprimir
			//
			this->btn_imprimir->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btn_imprimir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_imprimir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_imprimir->Location = System::Drawing::Point(345, 41);
			this->btn_imprimir->Name = L"btn_imprimir";
			this->btn_imprimir->Size = System::Drawing::Size(86, 34);
			this->btn_imprimir->TabIndex = 27;
			this->btn_imprimir->Text = L"Imprimir";
			this->btn_imprimir->UseVisualStyleBackColor = true;
			//
			// group_Datos
			//
			this->group_Datos->Controls->Add(this->verde6);
			this->group_Datos->Controls->Add(this->verde5);
			this->group_Datos->Controls->Add(this->verde4);
			this->group_Datos->Controls->Add(this->verde3);
			this->group_Datos->Controls->Add(this->verde1);
			this->group_Datos->Controls->Add(this->verde2);
			this->group_Datos->Controls->Add(this->text_Trabajadores);
			this->group_Datos->Controls->Add(this->lbl_ID);
			this->group_Datos->Controls->Add(this->text_ID);
			this->group_Datos->Controls->Add(this->combo_Nombre);
			this->group_Datos->Controls->Add(this->lbl_Trabajadores);
			this->group_Datos->Controls->Add(this->combo_Apellido);
			this->group_Datos->Controls->Add(this->lbl_Jerarquia);
			this->group_Datos->Controls->Add(this->combo_Area);
			this->group_Datos->Controls->Add(this->lbl_Area);
			this->group_Datos->Controls->Add(this->combo_Jerarquia);
			this->group_Datos->Controls->Add(this->lbl_Apellido);
			this->group_Datos->Controls->Add(this->lbl_Nombre);
			this->group_Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->group_Datos->Location = System::Drawing::Point(5, 0);
			this->group_Datos->Name = L"group_Datos";
			this->group_Datos->Size = System::Drawing::Size(258, 485);
			this->group_Datos->TabIndex = 40;
			this->group_Datos->TabStop = false;
			this->group_Datos->Text = L"Datos necesarios";
			//
			// verde6
			//
			this->verde6->Enabled = false;
			this->verde6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verde6.Image")));
			this->verde6->Location = System::Drawing::Point(215, 439);
			this->verde6->Name = L"verde6";
			this->verde6->Size = System::Drawing::Size(29, 28);
			this->verde6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->verde6->TabIndex = 20;
			this->verde6->TabStop = false;
			this->verde6->Visible = false;
			//
			// verde5
			//
			this->verde5->Enabled = false;
			this->verde5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verde5.Image")));
			this->verde5->Location = System::Drawing::Point(215, 366);
			this->verde5->Name = L"verde5";
			this->verde5->Size = System::Drawing::Size(29, 28);
			this->verde5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->verde5->TabIndex = 19;
			this->verde5->TabStop = false;
			this->verde5->Visible = false;
			//
			// verde4
			//
			this->verde4->Enabled = false;
			this->verde4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verde4.Image")));
			this->verde4->Location = System::Drawing::Point(215, 288);
			this->verde4->Name = L"verde4";
			this->verde4->Size = System::Drawing::Size(29, 28);
			this->verde4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->verde4->TabIndex = 18;
			this->verde4->TabStop = false;
			this->verde4->Visible = false;
			//
			// verde3
			//
			this->verde3->Enabled = false;
			this->verde3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verde3.Image")));
			this->verde3->Location = System::Drawing::Point(215, 204);
			this->verde3->Name = L"verde3";
			this->verde3->Size = System::Drawing::Size(29, 28);
			this->verde3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->verde3->TabIndex = 17;
			this->verde3->TabStop = false;
			this->verde3->Visible = false;
			//
			// verde1
			//
			this->verde1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verde1.Image")));
			this->verde1->Location = System::Drawing::Point(215, 58);
			this->verde1->Name = L"verde1";
			this->verde1->Size = System::Drawing::Size(29, 28);
			this->verde1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->verde1->TabIndex = 16;
			this->verde1->TabStop = false;
			this->verde1->Visible = false;
			//
			// groupMenu
			//
			this->groupMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupMenu->Controls->Add(this->Logo_Superior_Derecha);
			this->groupMenu->Controls->Add(this->verde9);
			this->groupMenu->Controls->Add(this->verde8);
			this->groupMenu->Controls->Add(this->verde7);
			this->groupMenu->Controls->Add(this->lbl_Temporizador);
			this->groupMenu->Controls->Add(this->lbl_Tiempo);
			this->groupMenu->Controls->Add(this->lbl_Num_Trabajadores);
			this->groupMenu->Controls->Add(this->pictureBox1);
			this->groupMenu->Controls->Add(this->pictureBox2);
			this->groupMenu->Controls->Add(this->text_dieta);
			this->groupMenu->Controls->Add(this->pictureBox3);
			this->groupMenu->Controls->Add(this->text_regular);
			this->groupMenu->Controls->Add(this->label7);
			this->groupMenu->Controls->Add(this->text_vegetariano);
			this->groupMenu->Controls->Add(this->label8);
			this->groupMenu->Controls->Add(this->label9);
			this->groupMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupMenu->Location = System::Drawing::Point(267, 1);
			this->groupMenu->Name = L"groupMenu";
			this->groupMenu->Size = System::Drawing::Size(711, 130);
			this->groupMenu->TabIndex = 41;
			this->groupMenu->TabStop = false;
			this->groupMenu->Text = L"Selección de Menus";
			//
			// Logo_Superior_Derecha
			//
			this->Logo_Superior_Derecha->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo_Superior_Derecha.Image")));
			this->Logo_Superior_Derecha->Location = System::Drawing::Point(965, 11);
			this->Logo_Superior_Derecha->Name = L"Logo_Superior_Derecha";
			this->Logo_Superior_Derecha->Size = System::Drawing::Size(119, 113);
			this->Logo_Superior_Derecha->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Logo_Superior_Derecha->TabIndex = 32;
			this->Logo_Superior_Derecha->TabStop = false;
			//
			// label9
			//
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(600, 23);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 24);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Dieta";
			//
			// Cronometro_Visible
			//
			this->Cronometro_Visible->Interval = 1000;
			this->Cronometro_Visible->Tick += gcnew System::EventHandler(this, &Comedor::Cronometro_Visible_Tick);
			//
			// listBox1
			//
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->BackColor = System::Drawing::Color::White;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(269, 140);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(709, 260);
			this->listBox1->TabIndex = 44;
			//
			// Timer_Desencolar
			//
			this->Timer_Desencolar->Interval = 1800;
			this->Timer_Desencolar->Tick += gcnew System::EventHandler(this, &Comedor::Timer_Desencolar_Tick);
			//
			// barra_desencolar
			//
			this->barra_desencolar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->barra_desencolar->Location = System::Drawing::Point(656, 411);
			this->barra_desencolar->Name = L"barra_desencolar";
			this->barra_desencolar->Size = System::Drawing::Size(306, 23);
			this->barra_desencolar->TabIndex = 45;
			//
			// barra_porcentaje
			//
			this->barra_porcentaje->AutoSize = true;
			this->barra_porcentaje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->barra_porcentaje->Location = System::Drawing::Point(610, 411);
			this->barra_porcentaje->Name = L"barra_porcentaje";
			this->barra_porcentaje->Size = System::Drawing::Size(40, 24);
			this->barra_porcentaje->TabIndex = 46;
			this->barra_porcentaje->Text = L"0 %";
			this->barra_porcentaje->Visible = false;
			//
			// Comedor
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(982, 492);
			this->Controls->Add(this->barra_porcentaje);
			this->Controls->Add(this->barra_desencolar);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pic_Logo);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->group_Datos);
			this->Controls->Add(this->groupMenu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Comedor";
			this->Text = L"Comedor";
			this->Load += gcnew System::EventHandler(this, &Comedor::Comedor_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_Logo))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->group_Datos->ResumeLayout(false);
			this->group_Datos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde1))->EndInit();
			this->groupMenu->ResumeLayout(false);
			this->groupMenu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo_Superior_Derecha))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		// Mover la definici�n de miCola dentro de la clase Simulador
		 // Variables globales
		String^ _nombre = "", ^ _apellido = "", ^ _area = "", ^ _jerarquia = "";
		int _id = 0, _trabajadores = 0, _vegetariano = 0, _regular = 0, _dieta = 0, _paneles_atencion = 0;
		int Tempo_Restante = TIEMPO_MAX_SEGUNDOS_TEMPORIZADOR; // Constante con valor por defecto 120 segundos
		//..

	private: System::Void Comedor_Load(System::Object^ sender, System::EventArgs^ e) {
		Temporizador->Start();

		Cronometro_Visible->Start();
	}
	public: void nuevoSupervisor() {
		_nombre = "";
		_apellido = "";
		_area = "";
		_jerarquia = "";
		text_ID->Text = "";
		combo_Nombre->SelectedIndex = -1;
		combo_Apellido->SelectedIndex = -1;
		combo_Area->SelectedIndex = -1;
		combo_Jerarquia->SelectedIndex = -1;
		text_Trabajadores->Text = "";
		//DATOS DEL LOS MENUS
		text_vegetariano->Text = "";
		text_regular->Text = "";
		text_dieta->Text = "";
		Tempo_Restante = TIEMPO_MAX_SEGUNDOS_TEMPORIZADOR;

		_id = _trabajadores = _vegetariano = _regular = _dieta = 0;
		lbl_Num_Trabajadores->Text = "";
	}
	private: System::Void Temporizador_Tick(System::Object^ sender, System::EventArgs^ e) {
		Tempo_Restante--; // Restar 1 segundo
		TimeSpan tiempo = TimeSpan::FromSeconds(Tempo_Restante);
		Verificador_TEXT();
		lbl_Temporizador->Text = String::Format(L"{0}:{1:D2}", tiempo.Minutes, tiempo.Seconds);
	}

	private:  int numeroAleatorio(int min, int max) {
		if (min > max)
			// Manejo de error... min debe ser mayor
			return 0;
		else {
			Random^ rnd = gcnew Random();
			return rnd->Next(min, max + 2);
		}
	}

		   // Función para generar un número aleatorio entre min y max
		   //public: int numeroAleatorio(int min, int max) {
		   //	if (min > max)
		   //		// Manejo de error: min debe ser menor o igual que max
		   //		return 0;
		   //	else
		   //		return min + rand() % (max - min + 1);
		   //}

	private: String^ ElementoCombo(ComboBox^ comboBox) {
		// Configuramos la semilla del generador de n�meros aleatorios
		srand(static_cast<unsigned int>(time(nullptr)));
		int indiceAleatorio = rand() % comboBox->Items->Count;
		// Selecciona el elemento correspondiente al �ndice aleatorio
		comboBox->SelectedIndex = indiceAleatorio;
		return comboBox->Text;
	}
	private: void Verificador_TEXT() {
		String^ S_id = text_ID->Text;
		String^ S_nombre = combo_Nombre->Text;
		String^ S_apellido = combo_Apellido->Text;
		String^ S_area = combo_Area->Text;
		String^ S_jerarquia = combo_Jerarquia->Text;
		String^ S_trabajadores = text_Trabajadores->Text;
		//..Solicitud del trabajador
		String^ S_vegetariano = text_vegetariano->Text;
		String^ S_regular = text_regular->Text;
		String^ S_dieta = text_dieta->Text;
		if (Tempo_Restante == numeroAleatorio(MIN_DE_DATOS, Tempo_Restante) || Tempo_Restante - 1 == numeroAleatorio(MIN_DE_DATOS, Tempo_Restante)
			|| Tempo_Restante <= MIN_DE_DATOS)
		{
			if (S_id->Length == 0) {
				_id = numeroAleatorio(1, 10000);
				text_ID->Text = Convert::ToString(_id);
			}
			else if (S_nombre->Length == 0)
				_nombre = ElementoCombo(combo_Nombre);
			else if (S_apellido->Length == 0)
				_apellido = ElementoCombo(combo_Apellido);
			else if (S_area->Length == 0)
				_area = ElementoCombo(combo_Area);
			else if (S_jerarquia->Length == 0)
				_jerarquia = ElementoCombo(combo_Jerarquia);
			else if (S_trabajadores->Length == 0) {
				_trabajadores = numeroAleatorio(1, MAX_TRABAJADORES);
				text_Trabajadores->Text = Convert::ToString(_trabajadores);
			}
		}
		if (!String::IsNullOrEmpty(S_trabajadores)) {
			if (String::IsNullOrEmpty(S_vegetariano)) {
				_vegetariano = numeroAleatorio(0, _trabajadores);
				text_vegetariano->Text = Convert::ToString(_vegetariano);
			}

			else if (String::IsNullOrEmpty(S_regular)) {
				_regular = numeroAleatorio(0, _trabajadores - _vegetariano);
				text_regular->Text = Convert::ToString(_regular);
			}

			else if (String::IsNullOrEmpty(S_dieta)) {
				_dieta = numeroAleatorio(0, _trabajadores - _vegetariano - _regular);
				text_dieta->Text = Convert::ToString(_dieta);
			}
		}
		if (S_dieta->Length > 0) {
			String^ Descripción = "El supervisor " + _nombre + " " + _apellido + " solicito " + _vegetariano + " vegetariano, "
				+ _regular + " regular, " + " y " + _dieta + " dietético.";

			// Convierte a std::string
			string Dess = msclr::interop::marshal_as<std::string>(Descripción);

			Solicitud solicitando = Solicitud(Dess, _vegetariano, _regular, _dieta);
			miCola.encolar(solicitando);
			MostarCola();
			nuevoSupervisor();
		}
		// ACTIVADO EL TICK VERDE CUANDO HAY TEXTO YA SELECCIONADO
		verde1->Visible = !String::IsNullOrEmpty(S_id);
		verde2->Visible = !String::IsNullOrEmpty(S_nombre);
		verde3->Visible = !String::IsNullOrEmpty(S_apellido);
		verde4->Visible = !String::IsNullOrEmpty(S_area);
		verde5->Visible = !String::IsNullOrEmpty(S_jerarquia);
		verde6->Visible = !String::IsNullOrEmpty(S_trabajadores);
		lbl_Num_Trabajadores->Text = "Números de trabajadores: " + S_trabajadores;
		// COMIDAS
		verde7->Visible = !String::IsNullOrEmpty(S_vegetariano);
		verde8->Visible = !String::IsNullOrEmpty(S_regular);
		verde9->Visible = !String::IsNullOrEmpty(S_dieta);
	}
		   int Cronometro = 0;
	private: System::Void Cronometro_Visible_Tick(System::Object^ sender, System::EventArgs^ e) {
		Cronometro++; // Incrementar el tiempo en 1 segundo
		TimeSpan tiempo = TimeSpan::FromSeconds(Cronometro);
		lbl_Cronometro->Text = String::Format(L"{0}:{1:D2}", tiempo.Minutes, tiempo.Seconds);
	}
	private: System::Void Simulador_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (MessageBox::Show("¿Desea cerrar el programa?", "Advertencia", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes) {
			// Se cerrar� el programa solo si el usuario hace clic en "S�"
			this->Close();
		}

		// Cancela el cierre si el usuario hace clic en "No"
	}
	private: System::Void btn_pause_Click(System::Object^ sender, System::EventArgs^ e) {
		static bool paused = false;
		if (paused) {
			// Reanudar
			Temporizador->Start();
			Cronometro_Visible->Start();
			btn_pause->Text = "Pausar";
			lbl_Control_Pause->Visible = false;
		}
		else {
			// Pausar
			Temporizador->Stop();
			Cronometro_Visible->Stop();
			btn_pause->Text = "Reanudar";
			lbl_Control_Pause->Visible = true;
		}
		// Cambia el estado.
		paused = !paused;
	}

		   ////Desencolar una solicitud

		   //Solicitud solicitudDesencolada = miCola.desencolar();
		   //// Si la cola est� vac�a, det�n el temporizador

		   //if (miCola.colaVacia()) {
		   //	time_Desencolar->Stop();
		   //	MessageBox::Show("La cola esta vacia");
		   //}
		   //else {
		   //	miCola.desencolar();
		   //	MostarCola();
		   //}

	private: void MostarCola() {
		Timer_Desencolar->Start();
		barra_porcentaje->Visible = true;
		barra_desencolar->Visible = true;
		listBox1->Items->Clear();
		MostrarSolicitudPantalla(miCola.obtenerInicio(miCola));
	}
	private:  void MostrarSolicitudPantalla(Nodo* unNodo) {
		if (unNodo != NULL) {
			// Mostrar la solicitud del nodo actual
			listBox1->Items->Add(unNodo->Solicitando.MostrarString());
			if (unNodo->siguiente != NULL) {
				// Llamar recursivamente con el siguiente nodo
				MostrarSolicitudPantalla(unNodo->siguiente);
			}
		}
	}
	private: System::Void Timer_Desencolar_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (barra_desencolar->Value == 100) {
			barra_desencolar->Value = 0;
			miCola.desencolar();
			MostarCola();
		}
		else {
			barra_porcentaje->Text = Convert::ToString(barra_desencolar->Value) + " %";
			//Incrementa la barra de progreso
			barra_desencolar->Value++;
		}
	}
	};
}