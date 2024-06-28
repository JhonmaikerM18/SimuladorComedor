#pragma once
#define TIEMPO_MAX_SEGUNDOS_TEMPORIZADOR 120
#define TIEMPO_MAX_SEGUNDOS_CRONOMETRO 300
namespace Simulador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	protected:

	protected:










	private: System::Windows::Forms::TextBox^ text_ID;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataGridView^ DGV_DatosCompletos;

	private: System::Windows::Forms::GroupBox^ groupMenu;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ lbl_Menu_Trabajadores;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ text_Trabajadores;
	private: System::Windows::Forms::Label^ lbl_Tiempo;
	private: System::Windows::Forms::Label^ lbl_Temporizador;
	private: System::Windows::Forms::Timer^ Temporizador;
	private: System::Windows::Forms::Timer^ Cronometro;
	private: System::Windows::Forms::Label^ lbl_Cronometro;
	private: System::Windows::Forms::Label^ lbl_Tiempo_Cronometro;
	private: System::ComponentModel::IContainer^ components;





	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->text_Trabajadores = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->DGV_DatosCompletos = (gcnew System::Windows::Forms::DataGridView());
			this->groupMenu = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_Temporizador = (gcnew System::Windows::Forms::Label());
			this->lbl_Tiempo = (gcnew System::Windows::Forms::Label());
			this->lbl_Menu_Trabajadores = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Temporizador = (gcnew System::Windows::Forms::Timer(this->components));
			this->Cronometro = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbl_Cronometro = (gcnew System::Windows::Forms::Label());
			this->lbl_Tiempo_Cronometro = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_DatosCompletos))->BeginInit();
			this->groupMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// combo_Nombre
			// 
			this->combo_Nombre->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->combo_Nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_Nombre->FormattingEnabled = true;
			this->combo_Nombre->Items->AddRange(gcnew cli::array< System::Object^  >(39) {
				L"María", L"Carmen", L"Antonio", L"Manuel",
					L"José", L"Francisco", L"David", L"Juan", L"Javier", L"Daniel", L"Alejandro", L"Carlos", L"Miguel", L"Pablo", L"Rafael", L"Sergio",
					L"Ángel", L"Pedro", L"Fernando", L"José ", L"María", L"Luis", L"Alberto", L"Adrián", L"Juan ", L"Carlos", L"Diego", L"Iván",
					L"Óscar", L"Enrique", L"Martín", L"Hugo", L"Mateo", L"Leo", L"Lucas", L"Daniel", L"Alejandro", L"Pablo", L"Enzo"
			});
			this->combo_Nombre->Location = System::Drawing::Point(24, 123);
			this->combo_Nombre->Name = L"combo_Nombre";
			this->combo_Nombre->Size = System::Drawing::Size(192, 28);
			this->combo_Nombre->TabIndex = 1;
			// 
			// combo_Apellido
			// 
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
			this->combo_Apellido->Location = System::Drawing::Point(24, 204);
			this->combo_Apellido->Name = L"combo_Apellido";
			this->combo_Apellido->Size = System::Drawing::Size(192, 28);
			this->combo_Apellido->TabIndex = 2;
			// 
			// combo_Area
			// 
			this->combo_Area->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->combo_Area->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_Area->FormattingEnabled = true;
			this->combo_Area->Items->AddRange(gcnew cli::array< System::Object^  >(28) {
				L"Recursos humanos", L"Ventas y marketing", L"Finanzas y contabilidad",
					L"Operaciones y producción", L"Tecnología de la información", L"Gestión de proyectos y desarrollo", L"Abogacía", L"Arte y fotografía",
					L"Atención al cliente", L"Administración de bases de datos", L"Administración de subvenciones", L"Medicina", L"Arquitectura",
					L"Ingeniería", L"Diseño", L"Tecnología", L"Médico", L"Maestro", L"Diseñador gráfico", L"Ingeniero", L"Abogado", L"Chef", L"Hostelería y Restaurantes",
					L"Área de Finanzas", L"Logística y Distribución", L"Desarrollo de Software", L"Marketing Digital", L"Gestión de Proyectos"
			});
			this->combo_Area->Location = System::Drawing::Point(24, 292);
			this->combo_Area->Name = L"combo_Area";
			this->combo_Area->Size = System::Drawing::Size(192, 28);
			this->combo_Area->TabIndex = 3;
			// 
			// combo_Jerarquia
			// 
			this->combo_Jerarquia->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->combo_Jerarquia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_Jerarquia->FormattingEnabled = true;
			this->combo_Jerarquia->Location = System::Drawing::Point(24, 366);
			this->combo_Jerarquia->Name = L"combo_Jerarquia";
			this->combo_Jerarquia->Size = System::Drawing::Size(192, 28);
			this->combo_Jerarquia->TabIndex = 4;
			// 
			// lbl_ID
			// 
			this->lbl_ID->AutoSize = true;
			this->lbl_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ID->Location = System::Drawing::Point(28, 21);
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
			this->lbl_Nombre->Location = System::Drawing::Point(26, 93);
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
			this->lbl_Apellido->Location = System::Drawing::Point(27, 168);
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
			this->lbl_Area->Location = System::Drawing::Point(27, 254);
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
			this->lbl_Jerarquia->Location = System::Drawing::Point(27, 333);
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
			this->lbl_Trabajadores->Location = System::Drawing::Point(29, 407);
			this->lbl_Trabajadores->Name = L"lbl_Trabajadores";
			this->lbl_Trabajadores->Size = System::Drawing::Size(102, 20);
			this->lbl_Trabajadores->TabIndex = 11;
			this->lbl_Trabajadores->Text = L"Trabajadores";
			// 
			// text_ID
			// 
			this->text_ID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text_ID->Location = System::Drawing::Point(24, 58);
			this->text_ID->Name = L"text_ID";
			this->text_ID->Size = System::Drawing::Size(192, 29);
			this->text_ID->TabIndex = 12;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->groupBox1->Controls->Add(this->text_Trabajadores);
			this->groupBox1->Controls->Add(this->lbl_ID);
			this->groupBox1->Controls->Add(this->text_ID);
			this->groupBox1->Controls->Add(this->combo_Nombre);
			this->groupBox1->Controls->Add(this->lbl_Trabajadores);
			this->groupBox1->Controls->Add(this->combo_Apellido);
			this->groupBox1->Controls->Add(this->lbl_Jerarquia);
			this->groupBox1->Controls->Add(this->combo_Area);
			this->groupBox1->Controls->Add(this->lbl_Area);
			this->groupBox1->Controls->Add(this->combo_Jerarquia);
			this->groupBox1->Controls->Add(this->lbl_Apellido);
			this->groupBox1->Controls->Add(this->lbl_Nombre);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(249, 485);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos necesarios";
			// 
			// text_Trabajadores
			// 
			this->text_Trabajadores->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_Trabajadores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->text_Trabajadores->Location = System::Drawing::Point(24, 439);
			this->text_Trabajadores->Name = L"text_Trabajadores";
			this->text_Trabajadores->Size = System::Drawing::Size(192, 29);
			this->text_Trabajadores->TabIndex = 13;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(207, 15);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(75, 66);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(411, 15);
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
			this->label7->Location = System::Drawing::Point(89, 15);
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
			this->label8->Location = System::Drawing::Point(305, 15);
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
			this->label9->Location = System::Drawing::Point(518, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 24);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Dieta";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(93, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 20;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(293, 44);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 21;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(496, 44);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 22;
			// 
			// DGV_DatosCompletos
			// 
			this->DGV_DatosCompletos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DGV_DatosCompletos->BackgroundColor = System::Drawing::Color::White;
			this->DGV_DatosCompletos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_DatosCompletos->Location = System::Drawing::Point(276, 171);
			this->DGV_DatosCompletos->Name = L"DGV_DatosCompletos";
			this->DGV_DatosCompletos->Size = System::Drawing::Size(618, 296);
			this->DGV_DatosCompletos->TabIndex = 23;
			// 
			// groupMenu
			// 
			this->groupMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupMenu->Controls->Add(this->lbl_Temporizador);
			this->groupMenu->Controls->Add(this->lbl_Tiempo);
			this->groupMenu->Controls->Add(this->lbl_Menu_Trabajadores);
			this->groupMenu->Controls->Add(this->label10);
			this->groupMenu->Controls->Add(this->pictureBox1);
			this->groupMenu->Controls->Add(this->pictureBox2);
			this->groupMenu->Controls->Add(this->textBox4);
			this->groupMenu->Controls->Add(this->pictureBox3);
			this->groupMenu->Controls->Add(this->textBox3);
			this->groupMenu->Controls->Add(this->label7);
			this->groupMenu->Controls->Add(this->textBox2);
			this->groupMenu->Controls->Add(this->label8);
			this->groupMenu->Controls->Add(this->label9);
			this->groupMenu->Location = System::Drawing::Point(276, 14);
			this->groupMenu->Name = L"groupMenu";
			this->groupMenu->Size = System::Drawing::Size(618, 121);
			this->groupMenu->TabIndex = 24;
			this->groupMenu->TabStop = false;
			this->groupMenu->Text = L"Selección de Menus";
			// 
			// lbl_Temporizador
			// 
			this->lbl_Temporizador->AutoSize = true;
			this->lbl_Temporizador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Temporizador->ForeColor = System::Drawing::Color::Red;
			this->lbl_Temporizador->Location = System::Drawing::Point(447, 91);
			this->lbl_Temporizador->Name = L"lbl_Temporizador";
			this->lbl_Temporizador->Size = System::Drawing::Size(106, 20);
			this->lbl_Temporizador->TabIndex = 29;
			this->lbl_Temporizador->Text = L"Temporizador";
			// 
			// lbl_Tiempo
			// 
			this->lbl_Tiempo->AutoSize = true;
			this->lbl_Tiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Tiempo->Location = System::Drawing::Point(382, 91);
			this->lbl_Tiempo->Name = L"lbl_Tiempo";
			this->lbl_Tiempo->Size = System::Drawing::Size(65, 20);
			this->lbl_Tiempo->TabIndex = 28;
			this->lbl_Tiempo->Text = L"Tiempo:";
			// 
			// lbl_Menu_Trabajadores
			// 
			this->lbl_Menu_Trabajadores->AutoSize = true;
			this->lbl_Menu_Trabajadores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_Menu_Trabajadores->Location = System::Drawing::Point(201, 91);
			this->lbl_Menu_Trabajadores->Name = L"lbl_Menu_Trabajadores";
			this->lbl_Menu_Trabajadores->Size = System::Drawing::Size(175, 20);
			this->lbl_Menu_Trabajadores->TabIndex = 24;
			this->lbl_Menu_Trabajadores->Text = L"lbl_Menu_Trabajadores";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(10, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(192, 20);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Numeros de trabajadores:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(279, 476);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 34);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Detener Simulación";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(389, 476);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 34);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Pausar Simulación";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(500, 476);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 34);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Imprimir reportes";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// Temporizador
			// 
			this->Temporizador->Interval = 1000;
			this->Temporizador->Tick += gcnew System::EventHandler(this, &Simulador::Temporizador_Tick);
			// 
			// Cronometro
			// 
			this->Cronometro->Interval = 1000;
			this->Cronometro->Tick += gcnew System::EventHandler(this, &Simulador::Cronometro_Tick);
			// 
			// lbl_Cronometro
			// 
			this->lbl_Cronometro->AutoSize = true;
			this->lbl_Cronometro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Cronometro->ForeColor = System::Drawing::Color::Red;
			this->lbl_Cronometro->Location = System::Drawing::Point(766, 482);
			this->lbl_Cronometro->Name = L"lbl_Cronometro";
			this->lbl_Cronometro->Size = System::Drawing::Size(93, 20);
			this->lbl_Cronometro->TabIndex = 31;
			this->lbl_Cronometro->Text = L"Cronometro";
			// 
			// lbl_Tiempo_Cronometro
			// 
			this->lbl_Tiempo_Cronometro->AutoSize = true;
			this->lbl_Tiempo_Cronometro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_Tiempo_Cronometro->Location = System::Drawing::Point(614, 482);
			this->lbl_Tiempo_Cronometro->Name = L"lbl_Tiempo_Cronometro";
			this->lbl_Tiempo_Cronometro->Size = System::Drawing::Size(148, 20);
			this->lbl_Tiempo_Cronometro->TabIndex = 30;
			this->lbl_Tiempo_Cronometro->Text = L"Tiempo transcurido:";
			// 
			// Simulador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(906, 519);
			this->Controls->Add(this->lbl_Cronometro);
			this->Controls->Add(this->lbl_Tiempo_Cronometro);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupMenu);
			this->Controls->Add(this->DGV_DatosCompletos);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Simulador";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simulador";
			this->Load += gcnew System::EventHandler(this, &Simulador::Simulador_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_DatosCompletos))->EndInit();
			this->groupMenu->ResumeLayout(false);
			this->groupMenu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Simulador_Load(System::Object^ sender, System::EventArgs^ e) {
		lbl_Menu_Trabajadores->Text = "0";
		lbl_Temporizador->Text = "2:00";
		Temporizador->Start();
		Cronometro->Start();
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
		   // Constante con valor por defecto 120 segundos
		   int timeCronometro = 0;
	private: System::Void Cronometro_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeCronometro++; // Suma 1 segundo
		int minutos;
		int segundos = timeCronometro;
		if (timeCronometro > 59) {
			minutos = 1;
			if (timeCronometro > 119) {
				minutos = 2;
				if (timeCronometro > 179) {
					minutos = 3;
					if (timeCronometro > 239) {
						minutos = 4;
						if (timeCronometro == 250) {
							// El tiempo ha expirado
							Cronometro->Stop(); // Detener el temporizador
						}
					}
				}
			}

		}


		if (segundos >= 0 && segundos <= 9)
			lbl_Cronometro->Text = String::Format(L"{0}:0{1} - PRUEBA", minutos, segundos);
		else
			lbl_Cronometro->Text = String::Format(L"{0}:{1} - PRUEBA", minutos, segundos);
		if (timeLeft == 0) {
			// El tiempo ha expirado
			Temporizador->Stop(); // Detener el temporizador
		}

	}
	};
}
