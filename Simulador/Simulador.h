#pragma once
//#include "Windows.h"
#include <iostream>
#include "SupervisorClass.h"
#include "ColaSolicitud.h"

#define TIEMPO_MAX_SEGUNDOS_TEMPORIZADOR 120
#define TIEMPO_MAX_SEGUNDOS_CRONOMETRO 300
#define TIEMPO_MAX_DE_DATOS 70
#define TIEMPO_MAX_DE_MENUS 50
#define CANTIDAD_MAX_TRABAJADORES 300 // Esta constante tambi�n modifica la cantidad maxima de comida
#define TAMANO_SOLICITUD 10
//Solicitud Solicitando[TAMANO_SOLICITUD]; //Arreglo de solicitudes
namespace Simulador {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Cola miCola;
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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Simulador()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pic_Logo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbl_Control_Pause;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lbl_Cronometro;
	private: System::Windows::Forms::Button^ btn_pause;
	private: System::Windows::Forms::Label^ lbl_Tiempo_Cronometro;
	private: System::Windows::Forms::Button^ btn_imprimir;
	private: System::Windows::Forms::GroupBox^ groupMenu;
	private: System::Windows::Forms::PictureBox^ verde9;
	private: System::Windows::Forms::PictureBox^ verde8;
	private: System::Windows::Forms::PictureBox^ verde7;
	private: System::Windows::Forms::Label^ lbl_Temporizador;
	private: System::Windows::Forms::Label^ lbl_Tiempo;
	private: System::Windows::Forms::Label^ lbl_Num_Trabajadores;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ text_dieta;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ text_regular;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ text_vegetariano;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ group_Datos;
	private: System::Windows::Forms::PictureBox^ verde6;
	private: System::Windows::Forms::PictureBox^ verde5;
	private: System::Windows::Forms::PictureBox^ verde4;
	private: System::Windows::Forms::PictureBox^ verde3;
	private: System::Windows::Forms::PictureBox^ verde1;
	private: System::Windows::Forms::PictureBox^ verde2;
	private: System::Windows::Forms::TextBox^ text_Trabajadores;
	private: System::Windows::Forms::Label^ lbl_ID;
	private: System::Windows::Forms::TextBox^ text_ID;
	private: System::Windows::Forms::ComboBox^ combo_Nombre;
	private: System::Windows::Forms::Label^ lbl_Trabajadores;
	private: System::Windows::Forms::ComboBox^ combo_Apellido;
	private: System::Windows::Forms::Label^ lbl_Jerarquia;
	private: System::Windows::Forms::ComboBox^ combo_Area;
	private: System::Windows::Forms::Label^ lbl_Area;
	private: System::Windows::Forms::ComboBox^ combo_Jerarquia;
	private: System::Windows::Forms::Label^ lbl_Apellido;
	private: System::Windows::Forms::Label^ lbl_Nombre;
	public: System::Windows::Forms::Timer^ Temporizador;
	private:
	public: System::Windows::Forms::Timer^ CronometroPrincipal_noVisible;
	private: System::Windows::Forms::Timer^ time_Desencolar;
	public: System::Windows::Forms::Timer^ Cronometro_Visible;
	private: System::Windows::Forms::ListView^ listView1;
	public:
	private:
	public:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Simulador::typeid));
			this->pic_Logo = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Control_Pause = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl_Cronometro = (gcnew System::Windows::Forms::Label());
			this->btn_pause = (gcnew System::Windows::Forms::Button());
			this->lbl_Tiempo_Cronometro = (gcnew System::Windows::Forms::Label());
			this->btn_imprimir = (gcnew System::Windows::Forms::Button());
			this->groupMenu = (gcnew System::Windows::Forms::GroupBox());
			this->verde9 = (gcnew System::Windows::Forms::PictureBox());
			this->verde8 = (gcnew System::Windows::Forms::PictureBox());
			this->verde7 = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_Temporizador = (gcnew System::Windows::Forms::Label());
			this->lbl_Tiempo = (gcnew System::Windows::Forms::Label());
			this->lbl_Num_Trabajadores = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->text_dieta = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->text_regular = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->text_vegetariano = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->group_Datos = (gcnew System::Windows::Forms::GroupBox());
			this->verde6 = (gcnew System::Windows::Forms::PictureBox());
			this->verde5 = (gcnew System::Windows::Forms::PictureBox());
			this->verde4 = (gcnew System::Windows::Forms::PictureBox());
			this->verde3 = (gcnew System::Windows::Forms::PictureBox());
			this->verde1 = (gcnew System::Windows::Forms::PictureBox());
			this->verde2 = (gcnew System::Windows::Forms::PictureBox());
			this->text_Trabajadores = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ID = (gcnew System::Windows::Forms::Label());
			this->text_ID = (gcnew System::Windows::Forms::TextBox());
			this->combo_Nombre = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Trabajadores = (gcnew System::Windows::Forms::Label());
			this->combo_Apellido = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Jerarquia = (gcnew System::Windows::Forms::Label());
			this->combo_Area = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Area = (gcnew System::Windows::Forms::Label());
			this->combo_Jerarquia = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Apellido = (gcnew System::Windows::Forms::Label());
			this->lbl_Nombre = (gcnew System::Windows::Forms::Label());
			this->Temporizador = (gcnew System::Windows::Forms::Timer(this->components));
			this->CronometroPrincipal_noVisible = (gcnew System::Windows::Forms::Timer(this->components));
			this->time_Desencolar = (gcnew System::Windows::Forms::Timer(this->components));
			this->Cronometro_Visible = (gcnew System::Windows::Forms::Timer(this->components));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_Logo))->BeginInit();
			this->panel1->SuspendLayout();
			this->groupMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->group_Datos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde2))->BeginInit();
			this->SuspendLayout();
			//
			// pic_Logo
			//
			this->pic_Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic_Logo.Image")));
			this->pic_Logo->Location = System::Drawing::Point(6, 494);
			this->pic_Logo->Name = L"pic_Logo";
			this->pic_Logo->Size = System::Drawing::Size(238, 229);
			this->pic_Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic_Logo->TabIndex = 38;
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
			this->panel1->Location = System::Drawing::Point(296, 427);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(691, 45);
			this->panel1->TabIndex = 37;
			//
			// lbl_Control_Pause
			//
			this->lbl_Control_Pause->AutoSize = true;
			this->lbl_Control_Pause->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Control_Pause->Location = System::Drawing::Point(10, 11);
			this->lbl_Control_Pause->Name = L"lbl_Control_Pause";
			this->lbl_Control_Pause->Size = System::Drawing::Size(115, 29);
			this->lbl_Control_Pause->TabIndex = 35;
			this->lbl_Control_Pause->Text = L"Pausado";
			this->lbl_Control_Pause->Visible = false;
			//
			// button1
			//
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(154, 6);
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
			this->lbl_Cronometro->Location = System::Drawing::Point(624, 11);
			this->lbl_Cronometro->Name = L"lbl_Cronometro";
			this->lbl_Cronometro->Size = System::Drawing::Size(45, 25);
			this->lbl_Cronometro->TabIndex = 31;
			this->lbl_Cronometro->Text = L"0:00";
			//
			// btn_pause
			//
			this->btn_pause->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_pause->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pause->Location = System::Drawing::Point(250, 6);
			this->btn_pause->Name = L"btn_pause";
			this->btn_pause->Size = System::Drawing::Size(83, 34);
			this->btn_pause->TabIndex = 26;
			this->btn_pause->Text = L"Pausar";
			this->btn_pause->UseVisualStyleBackColor = true;
			//
			// lbl_Tiempo_Cronometro
			//
			this->lbl_Tiempo_Cronometro->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->lbl_Tiempo_Cronometro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_Tiempo_Cronometro->Location = System::Drawing::Point(445, 8);
			this->lbl_Tiempo_Cronometro->Name = L"lbl_Tiempo_Cronometro";
			this->lbl_Tiempo_Cronometro->Size = System::Drawing::Size(162, 25);
			this->lbl_Tiempo_Cronometro->TabIndex = 30;
			this->lbl_Tiempo_Cronometro->Text = L"Tiempo transcurido:";
			//
			// btn_imprimir
			//
			this->btn_imprimir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_imprimir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_imprimir->Location = System::Drawing::Point(345, 7);
			this->btn_imprimir->Name = L"btn_imprimir";
			this->btn_imprimir->Size = System::Drawing::Size(86, 34);
			this->btn_imprimir->TabIndex = 27;
			this->btn_imprimir->Text = L"Imprimir";
			this->btn_imprimir->UseVisualStyleBackColor = true;
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
			this->groupMenu->Location = System::Drawing::Point(266, 1);
			this->groupMenu->Name = L"groupMenu";
			this->groupMenu->Size = System::Drawing::Size(711, 130);
			this->groupMenu->TabIndex = 36;
			this->groupMenu->TabStop = false;
			this->groupMenu->Text = L"Selecci�n de Menus";
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
			this->group_Datos->Location = System::Drawing::Point(2, 8);
			this->group_Datos->Name = L"group_Datos";
			this->group_Datos->Size = System::Drawing::Size(258, 485);
			this->group_Datos->TabIndex = 35;
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
			this->lbl_ID->Text = L"Identificaci�n";
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
			this->combo_Nombre->Items->AddRange(gcnew cli::array< System::Object^  >(41) {
				L"Mar�a", L"Carmen", L"Antonio", L"Manuel",
					L"Jos�", L"Francisco", L"David", L"Juan", L"Javier", L"Daniel", L"Alejandro", L"Carlos", L"Miguel", L"Pablo", L"Rafael", L"Sergio",
					L"�ngel", L"Pedro", L"Fernando", L"Jos� ", L"Susej", L"Antonia", L"Blanca", L"Luis", L"Alberto", L"Adri�n", L"Juan ", L"Carlos",
					L"Diego", L"Iv�n", L"�scar", L"Enrique", L"Mart�n", L"Hugo", L"Mateo", L"Leo", L"Lucas", L"Daniel", L"Alejandro", L"Pablo", L"Enzo"
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
				L"Garc�a", L"Gonz�lez", L"Rodr�guez", L"Fern�ndez",
					L"L�pez", L"Mart�nez", L"S�nchez", L"P�rez", L"G�mez", L"Mart�n", L"Jim�nez", L"Ruiz", L"Hern�ndez", L"D�az", L"Moreno", L"Mu�oz",
					L"�lvarez", L"Romero", L"Alonso", L"Guti�rrez", L"Navarro", L"Torres", L"Dom�nguez", L"V�zquez", L"Ramos", L"Gil", L"Ram�rez",
					L"Serrano", L"Blanco", L"Molina", L"Morales", L"Su�rez", L"Ortega", L"Delgado", L"Castro", L"Ortiz", L"Rubio", L"Mar�n", L"Sanz",
					L"N��ez"
			});
			this->combo_Apellido->Location = System::Drawing::Point(15, 204);
			this->combo_Apellido->Name = L"combo_Apellido";
			this->combo_Apellido->Size = System::Drawing::Size(192, 28);
			this->combo_Apellido->TabIndex = 2;
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
					L"Operaciones y producci�n", L"Tecnolog�a de la informaci�n", L"Gesti�n de proyectos y desarrollo", L"Abogac�a", L"Arte y fotograf�a",
					L"Atenci�n al cliente", L"Administraci�n de bases de datos", L"Administraci�n de subvenciones", L"Medicina", L"Arquitectura",
					L"Ingenier�a", L"Dise�o", L"Tecnolog�a", L"M�dico", L"Maestro", L"Dise�ador gr�fico", L"Hosteler�a y Restaurantes", L"�rea de Finanzas",
					L"Log�stica y Distribuci�n", L"Desarrollo de Software", L"Marketing Digital", L"Gesti�n de Proyectos"
			});
			this->combo_Area->Location = System::Drawing::Point(15, 292);
			this->combo_Area->Name = L"combo_Area";
			this->combo_Area->Size = System::Drawing::Size(192, 24);
			this->combo_Area->TabIndex = 3;
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
				L"Nivel Estrat�gico", L"Nivel T�ctico", L"Nivel Operativo",
					L"Presidente", L"Vicepresidente"
			});
			this->combo_Jerarquia->Location = System::Drawing::Point(15, 366);
			this->combo_Jerarquia->Name = L"combo_Jerarquia";
			this->combo_Jerarquia->Size = System::Drawing::Size(192, 28);
			this->combo_Jerarquia->TabIndex = 4;
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
			// time_Desencolar
			//
			this->time_Desencolar->Interval = 1000;
			this->time_Desencolar->Tick += gcnew System::EventHandler(this, &Simulador::time_Desencolar_Tick);
			//
			// Cronometro_Visible
			//
			this->Cronometro_Visible->Interval = 1000;
			this->Cronometro_Visible->Tick += gcnew System::EventHandler(this, &Simulador::Cronometro_Visible_Tick);
			//
			// listView1
			//
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(266, 137);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(711, 265);
			this->listView1->TabIndex = 39;
			this->listView1->UseCompatibleStateImageBehavior = false;
			//
			// Simulador
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(999, 484);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->pic_Logo);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupMenu);
			this->Controls->Add(this->group_Datos);
			this->Name = L"Simulador";
			this->Text = L"Simulador";
			this->Load += gcnew System::EventHandler(this, &Simulador::Simulador_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_Logo))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupMenu->ResumeLayout(false);
			this->groupMenu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->group_Datos->ResumeLayout(false);
			this->group_Datos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->verde2))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
		// Mover la definici�n de miCola dentro de la clase Simulador
		 // Variables globales
		String^ _nombre = "", ^ _apellido = "", ^ _area = "", ^ _jerarquia = "";
		int _id = 0, _trabajadores = 0, _vegetariano = 0, _regular = 0, _dieta = 0, _paneles_atencion = 0;
		int timeLeft = TIEMPO_MAX_SEGUNDOS_TEMPORIZADOR; // Constante con valor por defecto 120 segundos
		int timeCronometroPrincipal = 0;
		//..

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
		combo_Nombre->SelectedIndex = -1;
		combo_Apellido->SelectedIndex = -1;
		combo_Area->SelectedIndex = -1;
		combo_Jerarquia->SelectedIndex = -1;
		text_Trabajadores->Text = "";
		//DATOS DEL LOS MENUS
		text_vegetariano->Text = "";
		text_regular->Text = "";
		text_dieta->Text = "";
		timeLeft = TIEMPO_MAX_SEGUNDOS_TEMPORIZADOR;
		timeCronometroPrincipal = 0;

		_id = _trabajadores = _vegetariano = _regular = _dieta = 0;
		lbl_Num_Trabajadores->Text = "";
	}
	private: System::Void Temporizador_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeLeft--; // Restar 1 segundo
		TimeSpan tiempo = TimeSpan::FromSeconds(timeLeft);
		lbl_Temporizador->Text = String::Format(L"{0}:{1:D2}", tiempo.Minutes, tiempo.Seconds);
	}
	private: System::Void Cronometro_Principal_Tiempo_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeCronometroPrincipal++; // Incrementar el tiempo en 1 segundo
		TimeSpan tiempo = TimeSpan::FromSeconds(timeCronometroPrincipal);
		Verificador_TEXT();
		// Detener el temporizador si han pasado 5 minutos (300 segundos) o lo segundos que tiene la constante
		if (timeCronometroPrincipal == TIEMPO_MAX_SEGUNDOS_CRONOMETRO) {
			CronometroPrincipal_noVisible->Stop();
		}
	}
	private:  int generarNumeroAleatorio(int min, int max) {
		Random^ rnd = gcnew Random();
		return rnd->Next(min, max + 1);
	}
	private: void Verificador_TEXT() {
		String^ S_id = text_ID->Text;
		String^ S_nombre = combo_Nombre->Text;
		String^ S_apellido = combo_Apellido->Text;
		String^ S_area = combo_Area->Text;
		String^ S_jra = combo_Jerarquia->Text;
		String^ S_trabjs = text_Trabajadores->Text;
		//DATOS DEL LOS MENUS
		String^ S_vegetariano = text_vegetariano->Text;
		String^ S_regular = text_regular->Text;
		String^ S_dieta = text_dieta->Text;
		//..
		if (String::IsNullOrEmpty(S_id) || String::IsNullOrEmpty(S_nombre) || String::IsNullOrEmpty(S_apellido) ||
			String::IsNullOrEmpty(S_area) || String::IsNullOrEmpty(S_jra) || String::IsNullOrEmpty(S_trabjs)) {
			Llenar_Campos_De_Datos();
		}
		else {
			String^ S_vegetariano = text_vegetariano->Text;
			String^ S_regular = text_regular->Text;
			String^ S_dieta = text_dieta->Text;

			if (String::IsNullOrEmpty(S_vegetariano) || String::IsNullOrEmpty(S_regular) || String::IsNullOrEmpty(S_dieta)) {
				Llenar_Campos_De_Menus();
			}
			else {
				Supervisor^ super = gcnew Supervisor(_id, _nombre, _apellido, _area, _jerarquia, _trabajadores);
				Solicitud solicitando = Solicitud(_id, _vegetariano, _regular, _dieta);
				miCola.encolar(solicitando);
				nuevoSupervisor();
				//CronometroPrincipal_noVisible->Stop();
			}
		}

		// ACTIVADO EL TICK VERDE CUANDO HAY TEXTO YA SELECCIONADO
		verde1->Visible = !String::IsNullOrEmpty(S_id);
		verde2->Visible = !String::IsNullOrEmpty(S_nombre);
		verde3->Visible = !String::IsNullOrEmpty(S_apellido);
		verde4->Visible = !String::IsNullOrEmpty(S_area);
		verde5->Visible = !String::IsNullOrEmpty(S_jra);
		verde6->Visible = !String::IsNullOrEmpty(S_trabjs);
		lbl_Num_Trabajadores->Text = S_trabjs;

		// COMIDAS
		verde7->Visible = !String::IsNullOrEmpty(S_vegetariano);
		verde8->Visible = !String::IsNullOrEmpty(S_regular);
		verde9->Visible = !String::IsNullOrEmpty(S_dieta);
	}

	private: void Llenar_Campos_De_Datos() {
		//PASANDO VALORES PARA USARLOS COMO OBJETOS
		String^ S_id = text_ID->Text;
		String^ S_nombre = combo_Nombre->Text;
		String^ S_apellido = combo_Apellido->Text;
		String^ S_area = combo_Area->Text;
		String^ S_jerarquia = combo_Jerarquia->Text;
		String^ S_trabajadores = text_Trabajadores->Text;
		//..
		if ((S_id->Length == 0 && timeCronometroPrincipal == generarNumeroAleatorio(timeCronometroPrincipal, TIEMPO_MAX_DE_DATOS)) || timeCronometroPrincipal >= TIEMPO_MAX_DE_DATOS) {
			_id = S_id->Length == 0 ? generarNumeroAleatorio(1, 10000) : _id;
			text_ID->Text = Convert::ToString(_id);
		}
		//..
		if ((S_nombre->Length == 0 && timeCronometroPrincipal + 1 == generarNumeroAleatorio(timeCronometroPrincipal, TIEMPO_MAX_DE_DATOS)) || timeCronometroPrincipal >= TIEMPO_MAX_DE_DATOS)
			_nombre = seleccionarElementoCombo(combo_Nombre);
		//..
		if ((S_apellido->Length == 0 && timeCronometroPrincipal + 2 == generarNumeroAleatorio(timeCronometroPrincipal, TIEMPO_MAX_DE_DATOS)) || timeCronometroPrincipal >= TIEMPO_MAX_DE_DATOS)
			_apellido = seleccionarElementoCombo(combo_Apellido);
		//..
		if (S_area->Length == 0 && timeCronometroPrincipal + 3 == (timeCronometroPrincipal == generarNumeroAleatorio(timeCronometroPrincipal, TIEMPO_MAX_DE_DATOS)) || timeCronometroPrincipal >= TIEMPO_MAX_DE_DATOS)
			_area = seleccionarElementoCombo(combo_Area);
		//..
		if ((S_jerarquia->Length == 0 && timeCronometroPrincipal + 4 == generarNumeroAleatorio(timeCronometroPrincipal, TIEMPO_MAX_DE_DATOS)) || timeCronometroPrincipal >= TIEMPO_MAX_DE_DATOS)
			_jerarquia = seleccionarElementoCombo(combo_Jerarquia);
		//..
		if ((S_trabajadores->Length == 0 && timeCronometroPrincipal + 5 == generarNumeroAleatorio(timeCronometroPrincipal, TIEMPO_MAX_DE_DATOS)) || timeCronometroPrincipal >= TIEMPO_MAX_DE_DATOS)
		{
			_trabajadores = generarNumeroAleatorio(1, CANTIDAD_MAX_TRABAJADORES);
			text_Trabajadores->Text = Convert::ToString(_trabajadores);
		}
	}
	private: void Llenar_Campos_De_Menus() {
		String^ string_Vegetariano = text_vegetariano->Text;
		String^ string_Regular = text_regular->Text;
		String^ string_Dieta = text_dieta->Text;
		// Verificar si esta vacia y si el tiempo esta dentro del limite
		if ((String::IsNullOrEmpty(string_Vegetariano) && timeCronometroPrincipal == generarNumeroAleatorio(timeCronometroPrincipal, TIEMPO_MAX_DE_MENUS + TIEMPO_MAX_DE_DATOS)
			|| timeCronometroPrincipal <= (TIEMPO_MAX_DE_DATOS + TIEMPO_MAX_DE_MENUS) - 10)) {
			_vegetariano = generarNumeroAleatorio(0, (_trabajadores - (_vegetariano + _regular + _dieta)));
			text_vegetariano->Text = Convert::ToString(_vegetariano);
		}

		if ((String::IsNullOrEmpty(string_Regular) && timeCronometroPrincipal + 1 == generarNumeroAleatorio(timeCronometroPrincipal, TIEMPO_MAX_DE_MENUS + TIEMPO_MAX_DE_DATOS)
			|| timeCronometroPrincipal <= (TIEMPO_MAX_DE_DATOS + TIEMPO_MAX_DE_MENUS) - 10)) {
			_regular = generarNumeroAleatorio(0, (_trabajadores - (_vegetariano + _regular + _dieta)));
			text_regular->Text = Convert::ToString(_regular);
		}

		if ((String::IsNullOrEmpty(string_Dieta) && timeCronometroPrincipal + 2 == generarNumeroAleatorio(timeCronometroPrincipal, TIEMPO_MAX_DE_MENUS + TIEMPO_MAX_DE_DATOS)
			|| timeCronometroPrincipal <= (TIEMPO_MAX_DE_DATOS + TIEMPO_MAX_DE_MENUS) - 10)) {
			_dieta = generarNumeroAleatorio(0, (_trabajadores - (_vegetariano + _regular + _dieta)));
			text_dieta->Text = Convert::ToString(_dieta);
		}
	}

	private: String^ seleccionarElementoCombo(ComboBox^ comboBox) {
		// Configuramos la semilla del generador de n�meros aleatorios
		std::srand(static_cast<unsigned int>(std::time(nullptr)));
		// Generamos un �ndice aleatorio dentro del rango de elementos del ComboBox
		int indiceAleatorio = std::rand() % comboBox->Items->Count;
		// Selecciona el elemento correspondiente al �ndice aleatorio
		comboBox->SelectedIndex = indiceAleatorio;
		return comboBox->Text;
	}

		   int timeCronometroVisible = 0;
	private: System::Void Cronometro_Visible_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeCronometroVisible++; // Incrementar el tiempo en 1 segundo
		TimeSpan tiempo = TimeSpan::FromSeconds(timeCronometroVisible);
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
			CronometroPrincipal_noVisible->Start();
			Cronometro_Visible->Start();
			btn_pause->Text = "Pausar";
			lbl_Control_Pause->Visible = false;
		}
		else {
			// Pausar
			Temporizador->Stop();
			CronometroPrincipal_noVisible->Stop();
			Cronometro_Visible->Stop();
			btn_pause->Text = "Reanudar";
			lbl_Control_Pause->Visible = true;
		}
		// Cambia el estado.
		paused = !paused;
	}
	private: System::Void btn_imprimir_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void time_Desencolar_Tick(System::Object^ sender, System::EventArgs^ e) {
		//Desencolar una solicitud

		Solicitud solicitudDesencolada = miCola.desencolar();
		// Si la cola est� vac�a, det�n el temporizador

		if (miCola.colaVacia()) {
			time_Desencolar->Stop();
			MessageBox::Show("La cola esta vacia");
		}
		else {
			miCola.desencolar();
			MostarCola();
		}
	}
	private: void MostarCola() {
		listView1->Items->Clear();

		MostrarSolicitudPantalla(miCola.obtenerInicio(miCola));
	}
	private:  void MostrarSolicitudPantalla(Nodo* unNodo) {
		if (unNodo != NULL) {
			// Mostrar la solicitud del nodo actual
			listView1->Items->Add(unNodo->Solicitando.MostrarString());
			MessageBox::Show("Holaaaaaaa", "Pruebaaaa");
			if (unNodo->siguiente != NULL) {
				// Llamar recursivamente con el siguiente nodo
				MostrarSolicitudPantalla(unNodo->siguiente);
			}
		}
	}
	};
}