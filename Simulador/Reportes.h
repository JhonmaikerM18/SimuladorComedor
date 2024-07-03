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
		Reportes(void)
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ DGV_Informacion_Cola;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->DGV_Informacion_Cola = (gcnew System::Windows::Forms::DataGridView());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Informacion_Cola))->BeginInit();
			this->SuspendLayout();
			//
			// dataGridView1
			//
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column5, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(907, 420);
			this->dataGridView1->TabIndex = 0;
			//
			// Column1
			//
			this->Column1->HeaderText = L"Cantidad de menús entregados";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 200;
			//
			// Column5
			//
			this->Column5->HeaderText = L"Cantidad de solicitudes.";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			//
			// Column2
			//
			this->Column2->HeaderText = L"Cantidad de vegetarianos solicitados";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 170;
			//
			// Column3
			//
			this->Column3->HeaderText = L"Cantidad de regulares solicitados";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 170;
			//
			// Column4
			//
			this->Column4->HeaderText = L"Cantidad de dieteticos solicitados";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 170;
			//
			// button1
			//
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(180, 438);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Mostrar facturas";
			this->button1->UseVisualStyleBackColor = true;
			//
			// button2
			//
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(589, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
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
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->DGV_Informacion_Cola->Location = System::Drawing::Point(2, 174);
			this->DGV_Informacion_Cola->MultiSelect = false;
			this->DGV_Informacion_Cola->Name = L"DGV_Informacion_Cola";
			this->DGV_Informacion_Cola->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->DGV_Informacion_Cola->Size = System::Drawing::Size(926, 258);
			this->DGV_Informacion_Cola->TabIndex = 3;
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
			// Reportes
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(931, 492);
			this->ControlBox = false;
			this->Controls->Add(this->DGV_Informacion_Cola);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Reportes";
			this->Text = L"Reportes";
			this->Load += gcnew System::EventHandler(this, &Reportes::Reportes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Informacion_Cola))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void Reportes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
