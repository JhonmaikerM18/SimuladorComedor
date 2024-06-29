#pragma once
#include "Windows.h"
#include "ctime"
#include <iostream>
#include "SupervisorClass.h"
#include "ColaSolicitud.h"

#define TIEMPO_MAX_SEGUNDOS_TEMPORIZADOR 120
#define TIEMPO_MAX_SEGUNDOS_CRONOMETRO 300
#define TIEMPO_MAX_DE_DATOS 70
#define TIEMPO_MAX_DE_MENUS 50
#define CANTIDAD_MAX_TRABAJADORES 300 // Esta constante también modifica la cantidad maxima de comida

namespace Simulador {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de Simulador
	/// </summary>
	public ref class Simulador : public System::Windows::Forms::Form
	{
	public:
		Simulador(void)
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
		~Simulador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ combo_Nombre;
	private: System::Windows::Forms::ComboBox^ combo_Apellido;
	private: System::Windows::Forms::ComboBox^ combo_Area;
	private: System::Windows::Forms::ComboBox^ combo_Jerarquia;
	private: System::Windows::Forms::Label^ lbl_ID;
	private: System::Windows::Forms::Label^ lbl_Nombre;
	private: System::Windows::Forms::Label^ lbl_Apellido;
	private: System::Windows::Forms::Label^ lbl_Area;
	private: System::Windows::Forms::Label^ lbl_Jerarquia;
	private: System::Windows::Forms::Label^ lbl_Trabajadores;

	private: System::Windows::Forms::TextBox^ text_ID;
	private: System::Windows::Forms::GroupBox^ group_Datos;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ text_vegetariano;
	private: System::Windows::Forms::TextBox^ text_regular;
	private: System::Windows::Forms::TextBox^ text_dieta;

	private: System::Windows::Forms::GroupBox^ groupMenu;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ lbl_Num_Trabajadores;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ text_Trabajadores;
	private: System::Windows::Forms::Label^ lbl_Tiempo;
	private: System::Windows::Forms::Label^ lbl_Temporizador;
	private: System::Windows::Forms::Timer^ Temporizador;
	private: System::Windows::Forms::Timer^ CronometroPrincipal_noVisible;

	private: System::Windows::Forms::Label^ lbl_Cronometro;
	private: System::Windows::Forms::Label^ lbl_Tiempo_Cronometro;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::PictureBox^ verde6;
	private: System::Windows::Forms::PictureBox^ verde5;
	private: System::Windows::Forms::PictureBox^ verde4;
	private: System::Windows::Forms::PictureBox^ verde3;
	private: System::Windows::Forms::PictureBox^ verde1;
	private: System::Windows::Forms::PictureBox^ verde2;
	private: System::Windows::Forms::PictureBox^ verde9;
	private: System::Windows::Forms::PictureBox^ verde8;
	private: System::Windows::Forms::PictureBox^ verde7;
	private: System::Windows::Forms::PictureBox^ pic_Logo;

	private: System::Windows::Forms::GroupBox^ group_Atencion;
	private: System::Windows::Forms::Panel^ panel_Atencion_1;
	private: System::Windows::Forms::Label^ lbl_Atencion_1;
	private: System::Windows::Forms::Label^ lbl_Proceso_1;

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ Cronometro_Visible;
	private: System::Windows::Forms::Panel^ panel_Atencion_4;
	private: System::Windows::Forms::Label^ lbl_Proceso_4;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::Label^ lbl_Atencion_4;
	private: System::Windows::Forms::Panel^ panel_Atencion_3;
	private: System::Windows::Forms::Label^ lbl_Proceso_3;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::Label^ lbl_Atencion_3;
	private: System::Windows::Forms::Panel^ panel_Atencion_2;
	private: System::Windows::Forms::Label^ lbl_Proceso_2;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Label^ lbl_Atencion_2;

	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Simulador::typeid));
			this->combo_Nombre = (gcnew System::Windows::Forms::ComboBox());
			this->combo_Apellido = (gcnew System::Windows::Forms::ComboBox());
			this->combo_Area = (gcnew System::Windows::Forms::ComboBox());
			this->combo_Jerarquia = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_ID = (gcnew System::Windows::Forms::Label());
			this->lbl_Nombre = (gcnew System::Windows::Forms::Label());
			this->lbl_Apellido = (gcnew System::Windows::Forms::Label());
			this->lbl_Area = (gcnew System::Windows::Forms::Label());
			this->lbl_Jerarquia = (gcnew System::Windows::Forms::Label());
			this->lbl_Trabajadores = (gcnew System::Windows::Forms::Label());
			this->text_ID = (gcnew System::Windows::Forms::TextBox());
			this->group_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->verde6 = (gcnew System::Windows::Forms::PictureBox());
			this->verde5 = (gcnew System::Windows::Forms::PictureBox());
			this->verde4 = (gcnew System::Windows::Forms::PictureBox());
			this->verde3 = (gcnew System::Windows::Forms::PictureBox());
			this->verde1 = (gcnew System::Windows::Forms::PictureBox());
			this->verde2 = (gcnew System::Windows::Forms::PictureBox());
			this->text_Trabajadores = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->text_vegetariano = (gcnew System::Windows::Forms::TextBox());
			this->text_regular = (gcnew System::Windows::Forms::TextBox());
			this->text_dieta = (gcnew System::Windows::Forms::TextBox());
			this->groupMenu = (gcnew System::Windows::Forms::GroupBox());
			this->verde9 = (gcnew System::Windows::Forms::PictureBox());
			this->verde8 = (gcnew System::Windows::Forms::PictureBox());
			this->verde7 = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_Temporizador = (gcnew System::Windows::Forms::Label());
			this->lbl_Tiempo = (gcnew System::Windows::Forms::Label());
			this->lbl_Num_Trabajadores = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Temporizador = (gcnew System::Windows::Forms::Timer(this->components));
			this->CronometroPrincipal_noVisible = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbl_Cronometro = (gcnew System::Windows::Forms::Label());
			this->lbl_Tiempo_Cronometro = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pic_Logo = (gcnew System::Windows::Forms::PictureBox());
			this->group_Atencion = (gcnew System::Windows::Forms::GroupBox());
			this->panel_Atencion_4 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Proceso_4 = (gcnew System::Windows::Forms::Label());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->lbl_Atencion_4 = (gcnew System::Windows::Forms::Label());
			this->panel_Atencion_3 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Proceso_3 = (gcnew System::Windows::Forms::Label());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->lbl_Atencion_3 = (gcnew System::Windows::Forms::Label());
			this->panel_Atencion_2 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Proceso_2 = (gcnew System::Windows::Forms::Label());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->lbl_Atencion_2 = (gcnew System::Windows::Forms::Label());
			this->panel_Atencion_1 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Proceso_1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->lbl_Atencion_1 = (gcnew System::Windows::Forms::Label());
			this->Cronometro_Visible = (gcnew System::Windows::Forms::Timer(this->components));
			this->group_Datos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde7))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_Logo))->BeginInit();
			this->group_Atencion->SuspendLayout();
			this->panel_Atencion_4->SuspendLayout();
			this->panel_Atencion_3->SuspendLayout();
			this->panel_Atencion_2->SuspendLayout();
			this->panel_Atencion_1->SuspendLayout();
			this->SuspendLayout();
			//
			// combo_Nombre
			//
			this->combo_Nombre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_Nombre->Enabled = false;
			this->combo_Nombre->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->combo_Nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_Nombre->FormattingEnabled = true;
			this->combo_Nombre->Items->AddRange(gcnew cli::array< System::Object^  >(41) {
				L"María", L"Carmen", L"Antonio", L"Manuel",
					L"José", L"Francisco", L"David", L"Juan", L"Javier", L"Daniel", L"Alejandro", L"Carlos", L"Miguel", L"Pablo", L"Rafael", L"Sergio",
					L"Ángel", L"Pedro", L"Fernando", L"José ", L"Susej", L"Antonia", L"Blanca", L"Luis", L"Alberto", L"Adrián", L"Juan ", L"Carlos",
					L"Diego", L"Iván", L"Óscar", L"Enrique", L"Martín", L"Hugo", L"Mateo", L"Leo", L"Lucas", L"Daniel", L"Alejandro", L"Pablo", L"Enzo"
			});
			this->combo_Nombre->Location = System::Drawing::Point(15, 123);
			this->combo_Nombre->Name = L"combo_Nombre";
			this->combo_Nombre->Size = System::Drawing::Size(192, 28);
			this->combo_Nombre->TabIndex = 1;
			//
			// combo_Apellido
			//
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
			// combo_Area
			//
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
			// combo_Jerarquia
			//
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
			// text_ID
			//
			this->text_ID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_ID->Enabled = false;
			this->text_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_ID->Location = System::Drawing::Point(15, 58);
			this->text_ID->Name = L"text_ID";
			this->text_ID->Size = System::Drawing::Size(192, 29);
			this->text_ID->TabIndex = 12;
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
			this->group_Datos->Location = System::Drawing::Point(12, 12);
			this->group_Datos->Name = L"group_Datos";
			this->group_Datos->Size = System::Drawing::Size(258, 485);
			this->group_Datos->TabIndex = 13;
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
			this->text_Trabajadores->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_Trabajadores->Enabled = false;
			this->text_Trabajadores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->text_Trabajadores->Location = System::Drawing::Point(15, 439);
			this->text_Trabajadores->Name = L"text_Trabajadores";
			this->text_Trabajadores->Size = System::Drawing::Size(192, 29);
			this->text_Trabajadores->TabIndex = 13;
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
			this->pictureBox2->Location = System::Drawing::Point(208, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(75, 66);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			//
			// pictureBox3
			//
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(412, 23);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(75, 66);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
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
			// label8
			//
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(306, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 24);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Regular";
			//
			// label9
			//
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(519, 23);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 24);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Dieta";
			//
			// text_vegetariano
			//
			this->text_vegetariano->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_vegetariano->Enabled = false;
			this->text_vegetariano->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_vegetariano->Location = System::Drawing::Point(94, 52);
			this->text_vegetariano->Name = L"text_vegetariano";
			this->text_vegetariano->Size = System::Drawing::Size(82, 26);
			this->text_vegetariano->TabIndex = 20;
			//
			// text_regular
			//
			this->text_regular->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_regular->Enabled = false;
			this->text_regular->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_regular->Location = System::Drawing::Point(293, 52);
			this->text_regular->Name = L"text_regular";
			this->text_regular->Size = System::Drawing::Size(89, 26);
			this->text_regular->TabIndex = 21;
			//
			// text_dieta
			//
			this->text_dieta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_dieta->Enabled = false;
			this->text_dieta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_dieta->Location = System::Drawing::Point(497, 52);
			this->text_dieta->Name = L"text_dieta";
			this->text_dieta->Size = System::Drawing::Size(86, 26);
			this->text_dieta->TabIndex = 22;
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
			this->groupMenu->Controls->Add(this->label10);
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
			this->groupMenu->Location = System::Drawing::Point(276, 5);
			this->groupMenu->Name = L"groupMenu";
			this->groupMenu->Size = System::Drawing::Size(913, 130);
			this->groupMenu->TabIndex = 24;
			this->groupMenu->TabStop = false;
			this->groupMenu->Text = L"Selección de Menus";
			//
			// verde9
			//
			this->verde9->Enabled = false;
			this->verde9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verde9.Image")));
			this->verde9->Location = System::Drawing::Point(589, 52);
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
			this->verde8->Location = System::Drawing::Point(386, 52);
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
			this->verde7->Location = System::Drawing::Point(180, 52);
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
			this->lbl_Num_Trabajadores->Location = System::Drawing::Point(202, 99);
			this->lbl_Num_Trabajadores->Name = L"lbl_Num_Trabajadores";
			this->lbl_Num_Trabajadores->Size = System::Drawing::Size(18, 20);
			this->lbl_Num_Trabajadores->TabIndex = 24;
			this->lbl_Num_Trabajadores->Text = L"0";
			//
			// label10
			//
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(11, 99);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(192, 20);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Numeros de trabajadores:";
			//
			// button1
			//
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(14, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 34);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Detener";
			this->button1->UseVisualStyleBackColor = true;
			//
			// button2
			//
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(105, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 34);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Pausar";
			this->button2->UseVisualStyleBackColor = true;
			//
			// button3
			//
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(197, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 34);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Imprimir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			//
			// Temporizador
			//
			this->Temporizador->Interval = 1000;
			this->Temporizador->Tick += gcnew System::EventHandler(this, &Simulador::Temporizador_Tick);
			//
			// CronometroPrincipal_noVisible
			//
			this->CronometroPrincipal_noVisible->Interval = 1000;
			this->CronometroPrincipal_noVisible->Tick += gcnew System::EventHandler(this, &Simulador::Cronometro_Principal_Tiempo_Tick);
			//
			// lbl_Cronometro
			//
			this->lbl_Cronometro->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_Cronometro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Cronometro->ForeColor = System::Drawing::Color::Red;
			this->lbl_Cronometro->Location = System::Drawing::Point(465, 14);
			this->lbl_Cronometro->Name = L"lbl_Cronometro";
			this->lbl_Cronometro->Size = System::Drawing::Size(144, 25);
			this->lbl_Cronometro->TabIndex = 31;
			this->lbl_Cronometro->Text = L"Cronometro";
			//
			// lbl_Tiempo_Cronometro
			//
			this->lbl_Tiempo_Cronometro->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_Tiempo_Cronometro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_Tiempo_Cronometro->Location = System::Drawing::Point(310, 14);
			this->lbl_Tiempo_Cronometro->Name = L"lbl_Tiempo_Cronometro";
			this->lbl_Tiempo_Cronometro->Size = System::Drawing::Size(160, 25);
			this->lbl_Tiempo_Cronometro->TabIndex = 30;
			this->lbl_Tiempo_Cronometro->Text = L"Tiempo transcurido:";
			//
			// panel1
			//
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->lbl_Cronometro);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->lbl_Tiempo_Cronometro);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(571, 451);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(618, 45);
			this->panel1->TabIndex = 32;
			//
			// pic_Logo
			//
			this->pic_Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic_Logo.Image")));
			this->pic_Logo->Location = System::Drawing::Point(20, 500);
			this->pic_Logo->Name = L"pic_Logo";
			this->pic_Logo->Size = System::Drawing::Size(238, 229);
			this->pic_Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic_Logo->TabIndex = 33;
			this->pic_Logo->TabStop = false;
			//
			// group_Atencion
			//
			this->group_Atencion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->group_Atencion->Controls->Add(this->panel_Atencion_4);
			this->group_Atencion->Controls->Add(this->panel_Atencion_3);
			this->group_Atencion->Controls->Add(this->panel_Atencion_2);
			this->group_Atencion->Controls->Add(this->panel_Atencion_1);
			this->group_Atencion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->group_Atencion->Location = System::Drawing::Point(276, 144);
			this->group_Atencion->Name = L"group_Atencion";
			this->group_Atencion->Size = System::Drawing::Size(913, 295);
			this->group_Atencion->TabIndex = 34;
			this->group_Atencion->TabStop = false;
			this->group_Atencion->Text = L"Atención y Entrega ";
			//
			// panel_Atencion_4
			//
			this->panel_Atencion_4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_Atencion_4->Controls->Add(this->lbl_Proceso_4);
			this->panel_Atencion_4->Controls->Add(this->progressBar4);
			this->panel_Atencion_4->Controls->Add(this->lbl_Atencion_4);
			this->panel_Atencion_4->Location = System::Drawing::Point(15, 142);
			this->panel_Atencion_4->Name = L"panel_Atencion_4";
			this->panel_Atencion_4->Size = System::Drawing::Size(889, 34);
			this->panel_Atencion_4->TabIndex = 3;
			this->panel_Atencion_4->Visible = false;
			//
			// lbl_Proceso_4
			//
			this->lbl_Proceso_4->AutoSize = true;
			this->lbl_Proceso_4->Location = System::Drawing::Point(646, 9);
			this->lbl_Proceso_4->Name = L"lbl_Proceso_4";
			this->lbl_Proceso_4->Size = System::Drawing::Size(79, 16);
			this->lbl_Proceso_4->TabIndex = 2;
			this->lbl_Proceso_4->Text = L"Preparando";
			//
			// progressBar4
			//
			this->progressBar4->Location = System::Drawing::Point(749, 5);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(126, 23);
			this->progressBar4->TabIndex = 1;
			//
			// lbl_Atencion_4
			//
			this->lbl_Atencion_4->AutoSize = true;
			this->lbl_Atencion_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Atencion_4->Location = System::Drawing::Point(7, 9);
			this->lbl_Atencion_4->Name = L"lbl_Atencion_4";
			this->lbl_Atencion_4->Size = System::Drawing::Size(623, 18);
			this->lbl_Atencion_4->TabIndex = 0;
			this->lbl_Atencion_4->Text = L"El supervisor Jhonmaiker Machado a ordenado: 20 Vegetarianos, 3 Regulares y 60 Di"
				L"eteticos";
			//
			// panel_Atencion_3
			//
			this->panel_Atencion_3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_Atencion_3->Controls->Add(this->lbl_Proceso_3);
			this->panel_Atencion_3->Controls->Add(this->progressBar3);
			this->panel_Atencion_3->Controls->Add(this->lbl_Atencion_3);
			this->panel_Atencion_3->Location = System::Drawing::Point(15, 102);
			this->panel_Atencion_3->Name = L"panel_Atencion_3";
			this->panel_Atencion_3->Size = System::Drawing::Size(889, 34);
			this->panel_Atencion_3->TabIndex = 3;
			this->panel_Atencion_3->Visible = false;
			//
			// lbl_Proceso_3
			//
			this->lbl_Proceso_3->AutoSize = true;
			this->lbl_Proceso_3->Location = System::Drawing::Point(646, 9);
			this->lbl_Proceso_3->Name = L"lbl_Proceso_3";
			this->lbl_Proceso_3->Size = System::Drawing::Size(79, 16);
			this->lbl_Proceso_3->TabIndex = 2;
			this->lbl_Proceso_3->Text = L"Preparando";
			//
			// progressBar3
			//
			this->progressBar3->Location = System::Drawing::Point(749, 5);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(126, 23);
			this->progressBar3->TabIndex = 1;
			//
			// lbl_Atencion_3
			//
			this->lbl_Atencion_3->AutoSize = true;
			this->lbl_Atencion_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Atencion_3->Location = System::Drawing::Point(7, 9);
			this->lbl_Atencion_3->Name = L"lbl_Atencion_3";
			this->lbl_Atencion_3->Size = System::Drawing::Size(623, 18);
			this->lbl_Atencion_3->TabIndex = 0;
			this->lbl_Atencion_3->Text = L"El supervisor Jhonmaiker Machado a ordenado: 20 Vegetarianos, 3 Regulares y 60 Di"
				L"eteticos";
			//
			// panel_Atencion_2
			//
			this->panel_Atencion_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_Atencion_2->Controls->Add(this->lbl_Proceso_2);
			this->panel_Atencion_2->Controls->Add(this->progressBar2);
			this->panel_Atencion_2->Controls->Add(this->lbl_Atencion_2);
			this->panel_Atencion_2->Location = System::Drawing::Point(15, 62);
			this->panel_Atencion_2->Name = L"panel_Atencion_2";
			this->panel_Atencion_2->Size = System::Drawing::Size(889, 34);
			this->panel_Atencion_2->TabIndex = 3;
			this->panel_Atencion_2->Visible = false;
			//
			// lbl_Proceso_2
			//
			this->lbl_Proceso_2->AutoSize = true;
			this->lbl_Proceso_2->Location = System::Drawing::Point(646, 9);
			this->lbl_Proceso_2->Name = L"lbl_Proceso_2";
			this->lbl_Proceso_2->Size = System::Drawing::Size(79, 16);
			this->lbl_Proceso_2->TabIndex = 2;
			this->lbl_Proceso_2->Text = L"Preparando";
			//
			// progressBar2
			//
			this->progressBar2->Location = System::Drawing::Point(749, 5);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(126, 23);
			this->progressBar2->TabIndex = 1;
			//
			// lbl_Atencion_2
			//
			this->lbl_Atencion_2->AutoSize = true;
			this->lbl_Atencion_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Atencion_2->Location = System::Drawing::Point(7, 9);
			this->lbl_Atencion_2->Name = L"lbl_Atencion_2";
			this->lbl_Atencion_2->Size = System::Drawing::Size(623, 18);
			this->lbl_Atencion_2->TabIndex = 0;
			this->lbl_Atencion_2->Text = L"El supervisor Jhonmaiker Machado a ordenado: 20 Vegetarianos, 3 Regulares y 60 Di"
				L"eteticos";
			//
			// panel_Atencion_1
			//
			this->panel_Atencion_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_Atencion_1->Controls->Add(this->lbl_Proceso_1);
			this->panel_Atencion_1->Controls->Add(this->progressBar1);
			this->panel_Atencion_1->Controls->Add(this->lbl_Atencion_1);
			this->panel_Atencion_1->Location = System::Drawing::Point(15, 22);
			this->panel_Atencion_1->Name = L"panel_Atencion_1";
			this->panel_Atencion_1->Size = System::Drawing::Size(889, 34);
			this->panel_Atencion_1->TabIndex = 0;
			this->panel_Atencion_1->Visible = false;
			//
			// lbl_Proceso_1
			//
			this->lbl_Proceso_1->AutoSize = true;
			this->lbl_Proceso_1->Location = System::Drawing::Point(646, 9);
			this->lbl_Proceso_1->Name = L"lbl_Proceso_1";
			this->lbl_Proceso_1->Size = System::Drawing::Size(79, 16);
			this->lbl_Proceso_1->TabIndex = 2;
			this->lbl_Proceso_1->Text = L"Preparando";
			//
			// progressBar1
			//
			this->progressBar1->Location = System::Drawing::Point(749, 5);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(126, 23);
			this->progressBar1->TabIndex = 1;
			//
			// lbl_Atencion_1
			//
			this->lbl_Atencion_1->AutoSize = true;
			this->lbl_Atencion_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Atencion_1->Location = System::Drawing::Point(7, 9);
			this->lbl_Atencion_1->Name = L"lbl_Atencion_1";
			this->lbl_Atencion_1->Size = System::Drawing::Size(623, 18);
			this->lbl_Atencion_1->TabIndex = 0;
			this->lbl_Atencion_1->Text = L"El supervisor Jhonmaiker Machado a ordenado: 20 Vegetarianos, 3 Regulares y 60 Di"
				L"eteticos";
			//
			// Cronometro_Visible
			//
			this->Cronometro_Visible->Interval = 1000;
			this->Cronometro_Visible->Tick += gcnew System::EventHandler(this, &Simulador::Cronometro_Visible_Tick);
			//
			// Simulador
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1201, 499);
			this->Controls->Add(this->group_Atencion);
			this->Controls->Add(this->pic_Logo);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupMenu);
			this->Controls->Add(this->group_Datos);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Simulador";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simulador";
			this->Load += gcnew System::EventHandler(this, &Simulador::Simulador_Load);
			this->group_Datos->ResumeLayout(false);
			this->group_Datos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupMenu->ResumeLayout(false);
			this->groupMenu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde7))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_Logo))->EndInit();
			this->group_Atencion->ResumeLayout(false);
			this->panel_Atencion_4->ResumeLayout(false);
			this->panel_Atencion_4->PerformLayout();
			this->panel_Atencion_3->ResumeLayout(false);
			this->panel_Atencion_3->PerformLayout();
			this->panel_Atencion_2->ResumeLayout(false);
			this->panel_Atencion_2->PerformLayout();
			this->panel_Atencion_1->ResumeLayout(false);
			this->panel_Atencion_1->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion
		//VARIABLES STRING GLOBALES DE DATOS
		String^ _nombre, ^ _apellido, ^ _area, ^ _jerarquia;
		//VARIABLES INT GLOBALES DE DATOS
		int _id = 0, _trabajadores = 0, _vegetariano = 0, _regular = 0, _dieta = 0, _paneles_atencion = 0;

	private: System::Void Simulador_Load(System::Object^ sender, System::EventArgs^ e) {
		Temporizador->Start();
		CronometroPrincipal_noVisible->Start();
		Cronometro_Visible->Start();
	}
	public: void nuevoSupervisor() {
		_nombre = "";
		_apellido = "";
		_area = "";
		_jerarquia = "";
		text_ID->Text = "";
		combo_Nombre->Text = "";
		combo_Apellido->Text = "";
		combo_Area->Text = "";
		combo_Jerarquia->Text = "";
		text_Trabajadores->Text = "";
		//DATOS DEL LOS MENUS
		text_vegetariano->Text = "";
		text_regular->Text = "";
		text_dieta->Text = "";

		_id = _trabajadores = _vegetariano = _regular = _dieta = 0;

		verde1->Visible = false;
		verde2->Visible = false;
		verde3->Visible = false;
		verde4->Visible = false;
		verde5->Visible = false;
		verde6->Visible = false;
		lbl_Num_Trabajadores->Text = "";
		//COMIDAS
		verde7->Visible = false;
		verde8->Visible = false;
		verde9->Visible = false;
		Temporizador->Stop();
		CronometroPrincipal_noVisible->Stop();
		Temporizador->Start();
		CronometroPrincipal_noVisible->Start();
	}

		  int timeLeft = TIEMPO_MAX_SEGUNDOS_TEMPORIZADOR; // Constante con valor por defecto 120 segundos
	private: System::Void Temporizador_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeLeft--; // Restar 1 segundo
		int minutos = timeLeft / 60;
		int segundos = timeLeft % 60;
		if (segundos >= 0 && segundos <= 9)
			this->lbl_Temporizador->Text = String::Format(L"{0}:0{1} - PRUEBA", minutos, segundos);
		else
			this->lbl_Temporizador->Text = String::Format(L"{0}:{1} - PRUEBA", minutos, segundos);
		if (timeLeft == 0) {
			// El tiempo ha expirado
			Temporizador->Stop(); // Detener el temporizador
		}
	}
		   int timeCronometro = 0;
	private: System::Void Cronometro_Principal_Tiempo_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeCronometro++; // Incrementar el tiempo en 1 segundo
		//int minutos = timeCronometro / 60;
		//int segundos = timeCronometro % 60;
		TimeSpan tiempo = TimeSpan::FromSeconds(timeCronometro);
		Verificador_TEXT();
		// Detener el temporizador si han pasado 5 minutos (300 segundos) o lo segundos que tiene la constante
		if (timeCronometro == TIEMPO_MAX_SEGUNDOS_CRONOMETRO) {
			CronometroPrincipal_noVisible->Stop();
		}
	}
	private:  int generarNumeroAleatorio(int min, int max) {
		Random^ rnd = gcnew Random();
		return rnd->Next(min, max + 1);
	}
	private: void Verificador_TEXT() {
		//DATOS DEL SUPERVISOR
		String^ S_id = text_ID->Text;
		String^ S_nombre = combo_Nombre->Text;;
		String^ S_apellido = combo_Apellido->Text;
		String^ S_area = combo_Area->Text;
		String^ S_jra = combo_Jerarquia->Text;
		String^ S_trabjs = text_Trabajadores->Text;
		//DATOS DEL LOS MENUS
		String^ S_vegetariano = text_vegetariano->Text;
		String^ S_regular = text_regular->Text;
		String^ S_dieta = text_dieta->Text;

		if (String::IsNullOrEmpty(S_id) || String::IsNullOrEmpty(S_nombre) || String::IsNullOrEmpty(S_apellido) ||
			String::IsNullOrEmpty(S_area) || String::IsNullOrEmpty(S_jra) || String::IsNullOrEmpty(S_trabjs)) {
			Llenar_Campos_De_Datos();
		}
		else if (String::IsNullOrEmpty(S_vegetariano) || String::IsNullOrEmpty(S_regular) || String::IsNullOrEmpty(S_dieta)) {
			Llenar_Campos_De_Menus();
		}
		else {
			Supervisor^ super = gcnew Supervisor(_id, _nombre, _apellido, _area, _jerarquia, _trabajadores, _vegetariano, _regular, _dieta);
			MenuClass^ menu = gcnew MenuClass(_vegetariano, _regular, _dieta);
			super->guardar(menu);
			if (_paneles_atencion == 0) {
				activarPanel_de_atención(panel_Atencion_1, lbl_Atencion_1, lbl_Proceso_1);
				_paneles_atencion++;
				nuevoSupervisor();
			}
			else if (_paneles_atencion == 1) {
				activarPanel_de_atención(panel_Atencion_2, lbl_Atencion_2, lbl_Proceso_2);
				_paneles_atencion++;
				nuevoSupervisor();
			}
			else if (_paneles_atencion == 2) {
				activarPanel_de_atención(panel_Atencion_3, lbl_Atencion_3, lbl_Proceso_3);
				_paneles_atencion++;
				nuevoSupervisor();
			}
			else if (_paneles_atencion == 3) {
				activarPanel_de_atención(panel_Atencion_4, lbl_Atencion_4, lbl_Proceso_4);
				_paneles_atencion++;
				nuevoSupervisor();
			}

			CronometroPrincipal_noVisible->Stop();
		}
		//ACTIVADO EL TICK VERDE CUANDO HAY TEXTO YA SELECIONADO
		if (!String::IsNullOrEmpty(S_id))			 verde1->Visible = true;
		if (!String::IsNullOrEmpty(S_nombre))		 verde2->Visible = true;
		if (!String::IsNullOrEmpty(S_apellido))		 verde3->Visible = true;
		if (!String::IsNullOrEmpty(S_area))			 verde4->Visible = true;
		if (!String::IsNullOrEmpty(S_jra))			 verde5->Visible = true;
		if (!String::IsNullOrEmpty(S_trabjs)) {
			verde6->Visible = true;
			lbl_Num_Trabajadores->Text = S_trabjs;
		}
		//COMIDAS
		if (!String::IsNullOrEmpty(S_vegetariano))	verde7->Visible = true;
		if (!String::IsNullOrEmpty(S_regular))		verde8->Visible = true;
		if (!String::IsNullOrEmpty(S_dieta))			verde9->Visible = true;
	}

	private: void Llenar_Campos_De_Datos() {
		//PASANDO VALORES PARA USARLOS COMO OBJETOS
		String^ S_id = text_ID->Text;
		String^ S_nombre = combo_Nombre->Text;
		String^ S_apellido = combo_Apellido->Text;
		String^ S_area = combo_Area->Text;
		String^ S_jerarquia = combo_Jerarquia->Text;
		String^ S_trabajadores = text_Trabajadores->Text;
		// Verificar si el tiempo está dentro del límite
		if (timeCronometro <= TIEMPO_MAX_DE_DATOS) {
			// Llenar campos según condiciones específicas
			if (S_id->Length == 0 && timeCronometro == generarNumeroAleatorio(timeCronometro, TIEMPO_MAX_DE_DATOS)) {
				_id = generarNumeroAleatorio(1, 10000);
				text_ID->Text = Convert::ToString(_id);
			}
			// Llenar campos según condiciones específicas
			if (S_nombre->Length == 0 && timeCronometro + 1 == generarNumeroAleatorio(timeCronometro, TIEMPO_MAX_DE_DATOS)) {
				_nombre = seleccionarElementoCombo(combo_Nombre);
			}
			//..
			if (S_apellido->Length == 0 && timeCronometro + 2 == generarNumeroAleatorio(timeCronometro, TIEMPO_MAX_DE_DATOS)) {
				_apellido = seleccionarElementoCombo(combo_Apellido);
			}
			//..
			if (S_area->Length == 0 && timeCronometro + 3 == generarNumeroAleatorio(timeCronometro, TIEMPO_MAX_DE_DATOS)) {
				_area = seleccionarElementoCombo(combo_Area);
			}
			//..
			if (S_jerarquia->Length == 0 && timeCronometro + 4 == generarNumeroAleatorio(timeCronometro, TIEMPO_MAX_DE_DATOS)) {
				_jerarquia = seleccionarElementoCombo(combo_Jerarquia);
			}
			//..
			if (S_trabajadores->Length == 0 && timeCronometro + 5 == generarNumeroAleatorio(timeCronometro, TIEMPO_MAX_DE_DATOS)) {
				_trabajadores = generarNumeroAleatorio(1, CANTIDAD_MAX_TRABAJADORES);
				text_Trabajadores->Text = Convert::ToString(_trabajadores);
			}
		}
		// Llenar campos sin restricciones de tiempo, si no se han llenado algun faltante
		else {
			if (S_id->Length == 0) {
				_id = generarNumeroAleatorio(1, 10000);
				text_ID->Text = Convert::ToString(_id);
			}
			//..
			else if (S_nombre->Length == 0) {
				_nombre = seleccionarElementoCombo(combo_Nombre);
			}
			//..
			else if (S_apellido->Length == 0) {
				_apellido = seleccionarElementoCombo(combo_Apellido);
			}
			//..
			else if (S_area->Length == 0) {
				_area = seleccionarElementoCombo(combo_Area);
			}
			//..
			else if (S_jerarquia->Length == 0) {
				_jerarquia = seleccionarElementoCombo(combo_Jerarquia);
			}
			//..
			else if (S_trabajadores->Length == 0) {
				_trabajadores = generarNumeroAleatorio(1, CANTIDAD_MAX_TRABAJADORES);
				text_Trabajadores->Text = Convert::ToString(_trabajadores);
			}
		}
		//Mostradores de los datos
	}
	private: void Llenar_Campos_De_Menus() {
		String^ Tvegetariano = text_vegetariano->Text;
		String^ Tregular = text_regular->Text;
		String^ Tdieta = text_dieta->Text;
		// Verificar si el tiempo está dentro del límite
		if (timeCronometro <= (TIEMPO_MAX_DE_DATOS + TIEMPO_MAX_DE_MENUS) - 10) {
			// Llenar campos según condiciones específicas
			if (String::IsNullOrEmpty(Tvegetariano) && timeCronometro == generarNumeroAleatorio(timeCronometro, TIEMPO_MAX_DE_MENUS + TIEMPO_MAX_DE_DATOS)) {
				_vegetariano = generarNumeroAleatorio(0, (_trabajadores - (_vegetariano + _regular + _dieta)));
				text_vegetariano->Text = Convert::ToString(_vegetariano);
			}
			//..
			if (String::IsNullOrEmpty(Tregular) && timeCronometro + 1 == generarNumeroAleatorio(timeCronometro, TIEMPO_MAX_DE_MENUS + TIEMPO_MAX_DE_DATOS)) {
				_regular = generarNumeroAleatorio(0, (_trabajadores - (_vegetariano + _regular + _dieta)));
				text_regular->Text = Convert::ToString(_regular);
			}
			//..
			if (String::IsNullOrEmpty(Tdieta) && timeCronometro + 2 == generarNumeroAleatorio(timeCronometro, TIEMPO_MAX_DE_MENUS + TIEMPO_MAX_DE_DATOS)) {
				_dieta = generarNumeroAleatorio(0, (_trabajadores - (_vegetariano + _regular + _dieta)));
				text_dieta->Text = Convert::ToString(_dieta);
			}
		}
		// Llenar campos sin restricciones de tiempo, si no se han llenado algun faltante
		else {
			if (String::IsNullOrEmpty(Tvegetariano)) {
				_vegetariano = generarNumeroAleatorio(0, (_trabajadores - (_vegetariano + _regular + _dieta)));
				text_vegetariano->Text = Convert::ToString(_vegetariano);
			}
			//..
			else if (String::IsNullOrEmpty(Tregular)) {
				_regular = generarNumeroAleatorio(0, (_trabajadores - (_vegetariano + _regular + _dieta)));
				text_regular->Text = Convert::ToString(_regular);
			}
			//..
			else if (String::IsNullOrEmpty(Tdieta)) {
				_dieta = generarNumeroAleatorio(0, (_trabajadores - (_vegetariano + _regular + _dieta)));
				text_dieta->Text = Convert::ToString(_dieta);
			}
		}
	}

	private: String^ seleccionarElementoCombo(ComboBox^ comboBox) {
		// Configuramos la semilla del generador de números aleatorios
		std::srand(static_cast<unsigned int>(std::time(nullptr)));
		// Generamos un índice aleatorio dentro del rango de elementos del ComboBox
		int indiceAleatorio = std::rand() % comboBox->Items->Count;
		// Selecciona el elemento correspondiente al índice aleatorio
		comboBox->SelectedIndex = indiceAleatorio;
		return comboBox->Text;
	}
	public: void activarPanel_de_atención(Panel^ panel, Label^ Text, Label^ Text2) {
		ColaSolicitudes Cola;
		Cola.agregarSolicitud(_nombre, _apellido, _vegetariano, _regular, _dieta);
		panel->Visible = true;
		Text->Text = "El supervisor " + _nombre + " " + _apellido + " a ordenado "
			+ _vegetariano + " vegetarianos " + _regular + " regulares " + _dieta + " dietéticos";
		Text2->Text = "En espera";
	}
		  int timeCronometroVisible = 0;
	private: System::Void Cronometro_Visible_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeCronometroVisible++; // Incrementar el tiempo en 1 segundo
		TimeSpan tiempo = TimeSpan::FromSeconds(timeCronometroVisible);
		lbl_Cronometro->Text = String::Format(L"{0}:{1:D2}", tiempo.Minutes, tiempo.Seconds);
	}
	};
}
