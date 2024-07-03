#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include "ColaSolicitud.h"
#include "SupervisorClass.h"

#define TIEMPO_MAX_SEGUNDOS_TEMPORIZADOR 120
#define TIEMPO_MAX_SEGUNDOS_CRONOMETRO 300
#define MIN_DE_DATOS 50
#define MAX_DE_DATOS 70
#define MAX_DE_MENUS 10
#define MAX_TRABAJADORES 300 // Esta constante también modifica la cantidad maxima de comida
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

	private: System::Windows::Forms::Label^ lbl_ID;
	public: System::Windows::Forms::TextBox^ text_ID;
	private:
	public: System::Windows::Forms::ComboBox^ combo_Nombre;
	public: System::Windows::Forms::ComboBox^ combo_Apellido;

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
	public: System::Windows::Forms::ComboBox^ combo_Jerarquia;
	private:

	private: System::Windows::Forms::TextBox^ text_vegetariano;
	public: System::Windows::Forms::ComboBox^ combo_Area;
	private:

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pic_Logo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbl_Control_Pause;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lbl_Cronometro;
	private: System::Windows::Forms::Button^ btn_pause;
	private: System::Windows::Forms::Label^ lbl_Tiempo_Cronometro;
	private: System::Windows::Forms::Button^ btn_imprimir;

	private: System::Windows::Forms::PictureBox^ verde5;
	private: System::Windows::Forms::PictureBox^ verde4;
	private: System::Windows::Forms::PictureBox^ verde3;
	private: System::Windows::Forms::PictureBox^ verde1;
	private: System::Windows::Forms::GroupBox^ groupMenu;
	private: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Timer^ Cronometro_Visible;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Timer^ Timer_Desencolar;
	private: System::Windows::Forms::ProgressBar^ barra_desencolar;
	private: System::Windows::Forms::Label^ barra_porcentaje;
	private: System::Windows::Forms::FlowLayoutPanel^ Menu;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ Intervalo;
	private: System::Windows::Forms::TextBox^ text_Intervalo;

	private: System::Windows::Forms::PictureBox^ pic_btn_menu;
	private: System::Windows::Forms::Timer^ time_Menu;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::PictureBox^ verde6;
	public: System::Windows::Forms::TextBox^ text_Trabajadores;
	private:

	private: System::Windows::Forms::Label^ lbl_Trabajadores;
	private: System::Windows::Forms::GroupBox^ group_Datos;
	private: System::Windows::Forms::DataGridView^ DGV_Informacion_Cola;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;

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
			this->lbl_ID = (gcnew System::Windows::Forms::Label());
			this->text_ID = (gcnew System::Windows::Forms::TextBox());
			this->combo_Nombre = (gcnew System::Windows::Forms::ComboBox());
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
			this->barra_porcentaje = (gcnew System::Windows::Forms::Label());
			this->lbl_Cronometro = (gcnew System::Windows::Forms::Label());
			this->btn_pause = (gcnew System::Windows::Forms::Button());
			this->lbl_Tiempo_Cronometro = (gcnew System::Windows::Forms::Label());
			this->btn_imprimir = (gcnew System::Windows::Forms::Button());
			this->verde5 = (gcnew System::Windows::Forms::PictureBox());
			this->verde4 = (gcnew System::Windows::Forms::PictureBox());
			this->verde3 = (gcnew System::Windows::Forms::PictureBox());
			this->verde1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupMenu = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Cronometro_Visible = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Timer_Desencolar = (gcnew System::Windows::Forms::Timer(this->components));
			this->barra_desencolar = (gcnew System::Windows::Forms::ProgressBar());
			this->Menu = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->text_Intervalo = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Intervalo = (gcnew System::Windows::Forms::Label());
			this->pic_btn_menu = (gcnew System::Windows::Forms::PictureBox());
			this->time_Menu = (gcnew System::Windows::Forms::Timer(this->components));
			this->verde6 = (gcnew System::Windows::Forms::PictureBox());
			this->text_Trabajadores = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Trabajadores = (gcnew System::Windows::Forms::Label());
			this->group_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->DGV_Informacion_Cola = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_Logo))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde1))->BeginInit();
			this->groupMenu->SuspendLayout();
			this->Menu->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_btn_menu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde6))->BeginInit();
			this->group_Datos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Informacion_Cola))->BeginInit();
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
			this->panel1->Controls->Add(this->barra_porcentaje);
			this->panel1->Controls->Add(this->lbl_Cronometro);
			this->panel1->Controls->Add(this->btn_pause);
			this->panel1->Controls->Add(this->lbl_Tiempo_Cronometro);
			this->panel1->Controls->Add(this->btn_imprimir);
			this->panel1->Location = System::Drawing::Point(283, 406);
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
			// barra_porcentaje
			//
			this->barra_porcentaje->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->barra_porcentaje->AutoSize = true;
			this->barra_porcentaje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->barra_porcentaje->Location = System::Drawing::Point(238, 4);
			this->barra_porcentaje->Name = L"barra_porcentaje";
			this->barra_porcentaje->Size = System::Drawing::Size(40, 24);
			this->barra_porcentaje->TabIndex = 46;
			this->barra_porcentaje->Text = L"0 %";
			//
			// lbl_Cronometro
			//
			this->lbl_Cronometro->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->lbl_Cronometro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Cronometro->ForeColor = System::Drawing::Color::Red;
			this->lbl_Cronometro->Location = System::Drawing::Point(624, 46);
			this->lbl_Cronometro->Name = L"lbl_Cronometro";
			this->lbl_Cronometro->Size = System::Drawing::Size(58, 25);
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
			this->groupMenu->Location = System::Drawing::Point(267, -1);
			this->groupMenu->Name = L"groupMenu";
			this->groupMenu->Size = System::Drawing::Size(722, 130);
			this->groupMenu->TabIndex = 41;
			this->groupMenu->TabStop = false;
			this->groupMenu->Text = L"Selección de Menus";
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
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(282, 140);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listBox1->Size = System::Drawing::Size(714, 60);
			this->listBox1->TabIndex = 1;
			this->listBox1->TabStop = false;
			//
			// Timer_Desencolar
			//
			this->Timer_Desencolar->Interval = 1800;
			this->Timer_Desencolar->Tick += gcnew System::EventHandler(this, &Comedor::Timer_Desencolar_Tick);
			//
			// barra_desencolar
			//
			this->barra_desencolar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->barra_desencolar->Location = System::Drawing::Point(567, 411);
			this->barra_desencolar->Name = L"barra_desencolar";
			this->barra_desencolar->Size = System::Drawing::Size(406, 23);
			this->barra_desencolar->TabIndex = 45;
			//
			// Menu
			//
			this->Menu->BackColor = System::Drawing::Color::Navy;
			this->Menu->Controls->Add(this->panel2);
			this->Menu->Dock = System::Windows::Forms::DockStyle::Right;
			this->Menu->Location = System::Drawing::Point(993, 0);
			this->Menu->MaximumSize = System::Drawing::Size(237, 800);
			this->Menu->MinimumSize = System::Drawing::Size(0, 492);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(0, 492);
			this->Menu->TabIndex = 47;
			//
			// panel2
			//
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->text_Intervalo);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->Intervalo);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(234, 271);
			this->panel2->TabIndex = 4;
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(61, 18);
			this->label1->Margin = System::Windows::Forms::Padding(3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Temas";
			//
			// text_Intervalo
			//
			this->text_Intervalo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->text_Intervalo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_Intervalo->ForeColor = System::Drawing::Color::Gray;
			this->text_Intervalo->Location = System::Drawing::Point(33, 185);
			this->text_Intervalo->Name = L"text_Intervalo";
			this->text_Intervalo->Size = System::Drawing::Size(175, 31);
			this->text_Intervalo->TabIndex = 3;
			this->text_Intervalo->Text = L"1000";
			this->text_Intervalo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Comedor::text_Intervalo_KeyPress);
			//
			// comboBox1
			//
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(9, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(209, 32);
			this->comboBox1->TabIndex = 1;
			//
			// Intervalo
			//
			this->Intervalo->AutoSize = true;
			this->Intervalo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Intervalo->ForeColor = System::Drawing::Color::White;
			this->Intervalo->Location = System::Drawing::Point(43, 136);
			this->Intervalo->Margin = System::Windows::Forms::Padding(3);
			this->Intervalo->Name = L"Intervalo";
			this->Intervalo->Size = System::Drawing::Size(136, 33);
			this->Intervalo->TabIndex = 2;
			this->Intervalo->Text = L"Intervalo";
			//
			// pic_btn_menu
			//
			this->pic_btn_menu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pic_btn_menu->Dock = System::Windows::Forms::DockStyle::Right;
			this->pic_btn_menu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic_btn_menu.Image")));
			this->pic_btn_menu->Location = System::Drawing::Point(955, 0);
			this->pic_btn_menu->MaximumSize = System::Drawing::Size(38, 30);
			this->pic_btn_menu->MinimumSize = System::Drawing::Size(38, 30);
			this->pic_btn_menu->Name = L"pic_btn_menu";
			this->pic_btn_menu->Size = System::Drawing::Size(38, 30);
			this->pic_btn_menu->TabIndex = 4;
			this->pic_btn_menu->TabStop = false;
			this->pic_btn_menu->Click += gcnew System::EventHandler(this, &Comedor::pic_btn_menu_Click);
			//
			// time_Menu
			//
			this->time_Menu->Interval = 10;
			this->time_Menu->Tick += gcnew System::EventHandler(this, &Comedor::time_Menu_Tick);
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
			this->group_Datos->Location = System::Drawing::Point(4, -1);
			this->group_Datos->Name = L"group_Datos";
			this->group_Datos->Size = System::Drawing::Size(258, 492);
			this->group_Datos->TabIndex = 40;
			this->group_Datos->TabStop = false;
			this->group_Datos->Text = L"Datos necesarios";
			//
			// DGV_Informacion_Cola
			//
			this->DGV_Informacion_Cola->AllowUserToAddRows = false;
			this->DGV_Informacion_Cola->AllowUserToDeleteRows = false;
			this->DGV_Informacion_Cola->AllowUserToResizeColumns = false;
			this->DGV_Informacion_Cola->AllowUserToResizeRows = false;
			this->DGV_Informacion_Cola->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DGV_Informacion_Cola->BackgroundColor = System::Drawing::Color::White;
			this->DGV_Informacion_Cola->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Informacion_Cola->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column6, this->Column5, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->DGV_Informacion_Cola->Location = System::Drawing::Point(268, 203);
			this->DGV_Informacion_Cola->MultiSelect = false;
			this->DGV_Informacion_Cola->Name = L"DGV_Informacion_Cola";
			this->DGV_Informacion_Cola->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->DGV_Informacion_Cola->Size = System::Drawing::Size(721, 170);
			this->DGV_Informacion_Cola->TabIndex = 1;
			//
			// Column1
			//
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			//
			// Column2
			//
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			//
			// Column3
			//
			this->Column3->HeaderText = L"Apellido";
			this->Column3->Name = L"Column3";
			//
			// Column4
			//
			this->Column4->HeaderText = L"Area de trabajo";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 140;
			//
			// Column6
			//
			this->Column6->HeaderText = L"Trabajadores";
			this->Column6->Name = L"Column6";
			//
			// Column5
			//
			this->Column5->HeaderText = L"Jerarquia";
			this->Column5->Name = L"Column5";
			//
			// Column7
			//
			this->Column7->HeaderText = L"Vegetariano";
			this->Column7->Name = L"Column7";
			//
			// Column8
			//
			this->Column8->HeaderText = L"Regular";
			this->Column8->Name = L"Column8";
			//
			// Column9
			//
			this->Column9->HeaderText = L"Dieta";
			this->Column9->Name = L"Column9";
			//
			// Column10
			//
			this->Column10->HeaderText = L"Total Menu";
			this->Column10->Name = L"Column10";
			//
			// Comedor
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(993, 492);
			this->Controls->Add(this->pic_btn_menu);
			this->Controls->Add(this->Menu);
			this->Controls->Add(this->barra_desencolar);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pic_Logo);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->group_Datos);
			this->Controls->Add(this->groupMenu);
			this->Controls->Add(this->DGV_Informacion_Cola);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1009, 531);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde1))->EndInit();
			this->groupMenu->ResumeLayout(false);
			this->groupMenu->PerformLayout();
			this->Menu->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_btn_menu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde6))->EndInit();
			this->group_Datos->ResumeLayout(false);
			this->group_Datos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Informacion_Cola))->EndInit();
			this->ResumeLayout(false);
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
			if (Tempo_Restante == numeroAleatorio(15, Tempo_Restante) || Tempo_Restante <= 15) {
				if (String::IsNullOrEmpty(S_vegetariano)) {
					_vegetariano = numeroAleatorio(0, _trabajadores);
					text_vegetariano->Text = Convert::ToString(_vegetariano);
				}

				if (String::IsNullOrEmpty(S_regular)) {
					_regular = numeroAleatorio(0, _trabajadores - _vegetariano);
					text_regular->Text = Convert::ToString(_regular);
				}

				if (String::IsNullOrEmpty(S_dieta)) {
					_dieta = numeroAleatorio(0, _trabajadores - _vegetariano - _regular);
					text_dieta->Text = Convert::ToString(_dieta);
				}
			}
		}
		int fila = 0;
		if (S_dieta->Length > 0) {
			String^ Descripción = "El supervisor " + _nombre + " " + _apellido + " solicito " + _vegetariano + " vegetariano, "
				+ _regular + " regular, " + " y " + _dieta + " dietético.";

			// Convierte a std::string
			string Dess = msclr::interop::marshal_as<std::string>(Descripción);
			Supervisor^ as = gcnew Supervisor(_id, _nombre, _apellido, _area, _jerarquia, _trabajadores, _vegetariano, _regular, _dieta);
			as->Mostrar_DGV(DGV_Informacion_Cola, fila);
			int total = _vegetariano + _regular + _dieta;
			Solicitud solicitando = Solicitud(Dess, _vegetariano, _regular, _dieta);
			//Supervisor Super(_id, _nombre, _apellido, _area, _jerarquia, _trabajadores, _vegetariano, _regular, _dieta);
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

	private: void MostarCola() {
		Timer_Desencolar->Start();
		barra_porcentaje->Visible = true;
		barra_desencolar->Visible = true;
		listBox1->Visible = true;
		listBox1->Items->Clear();
		MostrarSolicitudPantalla(miCola.obtenerInicio(miCola));
	}
	private:  void MostrarSolicitudPantalla(Nodo* unNodo) {
		if (unNodo != NULL) {
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
	private: System::Void time_Menu_Tick(System::Object^ sender, System::EventArgs^ e) {
		static bool MenuExpandido = false;
		int cambio = MenuExpandido ? -10 : 10;
		Menu->Width += cambio;

		if (Menu->Width == Menu->MinimumSize.Width || Menu->Width == Menu->MaximumSize.Width) {
			MenuExpandido = !MenuExpandido;
			time_Menu->Stop();
		}
	}
	private: System::Void pic_btn_menu_Click(System::Object^ sender, System::EventArgs^ e) {
		time_Menu->Start();
	}
	private: System::Void text_Intervalo_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int a = Convert::ToInt32(text_Intervalo->Text);
		if ((e->KeyChar >= 48) && (e->KeyChar <= 57) || (Char::IsControl(e->KeyChar))) {
			if (a < 99)
				text_Intervalo->Text = "100";
			//..
			else {
				Temporizador->Interval = a;
				Cronometro_Visible->Interval = a;
				Timer_Desencolar->Interval = static_cast<int>(3 * Convert::ToInt32(text_Intervalo->Text));
				Temporizador->Interval = a;
				e->Handled = false;
			}
		}
		else if (a < 99)
			text_Intervalo->Text = "100";
		else {
			e->Handled = true;
			return; // Bloquea el paso para que una letra no pase
		}
	}
	};
}