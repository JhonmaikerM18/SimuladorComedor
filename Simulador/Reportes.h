#pragma once

namespace Simulador {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Reportes
	/// </summary>
	public ref class Reportes : public System::Windows::Forms::Form
	{
	public:
		Reportes(int ctd_solicitados, int ctd_entregados)
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
		~Reportes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_facturas;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::DataGridView^ DGV_Información_factura;
	private:

	private:

	private:

	private:

	private:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbl_menus_dieta;

	private: System::Windows::Forms::Label^ lbl_menus_vegetarianos;

	private: System::Windows::Forms::Label^ lbl_menus_solicitados;
	private: System::Windows::Forms::Label^ lbl_menus_entregados;
	private: System::Windows::Forms::Label^ lbl_menus_regulares;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_facturas = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->DGV_Información_factura = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_menus_solicitados = (gcnew System::Windows::Forms::Label());
			this->lbl_menus_entregados = (gcnew System::Windows::Forms::Label());
			this->lbl_menus_vegetarianos = (gcnew System::Windows::Forms::Label());
			this->lbl_menus_regulares = (gcnew System::Windows::Forms::Label());
			this->lbl_menus_dieta = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Información_factura))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			//
			// btn_facturas
			//
			this->btn_facturas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_facturas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_facturas->Location = System::Drawing::Point(179, 476);
			this->btn_facturas->Name = L"btn_facturas";
			this->btn_facturas->Size = System::Drawing::Size(146, 42);
			this->btn_facturas->TabIndex = 1;
			this->btn_facturas->Text = L"Mostrar facturas";
			this->btn_facturas->UseVisualStyleBackColor = true;
			this->btn_facturas->Click += gcnew System::EventHandler(this, &Reportes::btn_facturas_Click);
			//
			// button2
			//
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(588, 476);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Reportes::button2_Click);
			//
			// DGV_Información_factura
			//
			this->DGV_Información_factura->AllowUserToAddRows = false;
			this->DGV_Información_factura->AllowUserToDeleteRows = false;
			this->DGV_Información_factura->AllowUserToResizeColumns = false;
			this->DGV_Información_factura->AllowUserToResizeRows = false;
			this->DGV_Información_factura->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DGV_Información_factura->BackgroundColor = System::Drawing::Color::White;
			this->DGV_Información_factura->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Información_factura->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->DGV_Información_factura->Location = System::Drawing::Point(503, 41);
			this->DGV_Información_factura->MultiSelect = false;
			this->DGV_Información_factura->Name = L"DGV_Información_factura";
			this->DGV_Información_factura->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->DGV_Información_factura->Size = System::Drawing::Size(585, 420);
			this->DGV_Información_factura->TabIndex = 3;
			//
			// dataGridViewTextBoxColumn1
			//
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			//
			// dataGridViewTextBoxColumn2
			//
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			//
			// dataGridViewTextBoxColumn3
			//
			this->dataGridViewTextBoxColumn3->HeaderText = L"Apellido";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			//
			// dataGridViewTextBoxColumn4
			//
			this->dataGridViewTextBoxColumn4->HeaderText = L"Area de trabajo";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 140;
			//
			// dataGridViewTextBoxColumn5
			//
			this->dataGridViewTextBoxColumn5->HeaderText = L"Jerarquia";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			//
			// Column6
			//
			this->Column6->HeaderText = L"Trabajadores";
			this->Column6->Name = L"Column6";
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
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(332, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(259, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Reporte de Simulación";
			//
			// groupBox1
			//
			this->groupBox1->Controls->Add(this->lbl_menus_regulares);
			this->groupBox1->Controls->Add(this->lbl_menus_dieta);
			this->groupBox1->Controls->Add(this->lbl_menus_entregados);
			this->groupBox1->Controls->Add(this->lbl_menus_vegetarianos);
			this->groupBox1->Controls->Add(this->lbl_menus_solicitados);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(29, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(452, 382);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Menus";
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(5, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(263, 24);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Cantidad de menus dieteticos:";
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(263, 24);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Cantidad de menus regulares:";
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(5, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(291, 24);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Cantidad de menus vegetarianos:";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Cantidad de menus entregados:\r\n";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(271, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Cantidad de menus solicitados:\r\n";
			//
			// lbl_menus_solicitados
			//
			this->lbl_menus_solicitados->AutoSize = true;
			this->lbl_menus_solicitados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_menus_solicitados->Location = System::Drawing::Point(302, 51);
			this->lbl_menus_solicitados->Name = L"lbl_menus_solicitados";
			this->lbl_menus_solicitados->Size = System::Drawing::Size(0, 24);
			this->lbl_menus_solicitados->TabIndex = 5;
			//
			// lbl_menus_entregados
			//
			this->lbl_menus_entregados->AutoSize = true;
			this->lbl_menus_entregados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_menus_entregados->Location = System::Drawing::Point(302, 94);
			this->lbl_menus_entregados->Name = L"lbl_menus_entregados";
			this->lbl_menus_entregados->Size = System::Drawing::Size(0, 24);
			this->lbl_menus_entregados->TabIndex = 6;
			//
			// lbl_menus_vegetarianos
			//
			this->lbl_menus_vegetarianos->AutoSize = true;
			this->lbl_menus_vegetarianos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_menus_vegetarianos->Location = System::Drawing::Point(304, 179);
			this->lbl_menus_vegetarianos->Name = L"lbl_menus_vegetarianos";
			this->lbl_menus_vegetarianos->Size = System::Drawing::Size(0, 24);
			this->lbl_menus_vegetarianos->TabIndex = 7;
			//
			// lbl_menus_regulares
			//
			this->lbl_menus_regulares->AutoSize = true;
			this->lbl_menus_regulares->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_menus_regulares->Location = System::Drawing::Point(302, 231);
			this->lbl_menus_regulares->Name = L"lbl_menus_regulares";
			this->lbl_menus_regulares->Size = System::Drawing::Size(0, 24);
			this->lbl_menus_regulares->TabIndex = 8;
			//
			// lbl_menus_dieta
			//
			this->lbl_menus_dieta->AutoSize = true;
			this->lbl_menus_dieta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_menus_dieta->Location = System::Drawing::Point(275, 286);
			this->lbl_menus_dieta->Name = L"lbl_menus_dieta";
			this->lbl_menus_dieta->Size = System::Drawing::Size(0, 24);
			this->lbl_menus_dieta->TabIndex = 9;
			//
			// Reportes
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1109, 530);
			this->ControlBox = false;
			this->Controls->Add(this->DGV_Información_factura);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_facturas);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Reportes";
			this->Text = L"Menus";
			this->Load += gcnew System::EventHandler(this, &Reportes::Reportes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Información_factura))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void Reportes_Load(System::Object^ sender, System::EventArgs^ e) {
		lbl_menus_solicitados->Text = ctd_solicitados;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btn_facturas_Click(System::Object^ sender, System::EventArgs^ e) {
		static bool abierto;
		if (abierto) {
			DGV_Información_factura->Visible = true;
			btn_facturas->Text = "Cerrar facturas";
			abierto = !abierto;
		}
		else {
			DGV_Información_factura->Visible = false;
			btn_facturas->Text = "Mostrar facturas";
			abierto = !abierto;
		}
	}
	};
}
