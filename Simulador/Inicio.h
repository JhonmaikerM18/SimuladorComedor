#pragma once
#include "Simulador.h"
namespace Simulador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_iniciar;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_cerrar;

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
			this->btn_iniciar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_cerrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_iniciar
			// 
			this->btn_iniciar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btn_iniciar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_iniciar->Location = System::Drawing::Point(267, 276);
			this->btn_iniciar->Name = L"btn_iniciar";
			this->btn_iniciar->Size = System::Drawing::Size(169, 41);
			this->btn_iniciar->TabIndex = 0;
			this->btn_iniciar->Text = L"INICIAR SIMULACIÓN";
			this->btn_iniciar->UseVisualStyleBackColor = true;
			this->btn_iniciar->Click += gcnew System::EventHandler(this, &Inicio::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(210, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido a la simulación";
			// 
			// btn_cerrar
			// 
			this->btn_cerrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->btn_cerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cerrar->Location = System::Drawing::Point(289, 344);
			this->btn_cerrar->Name = L"btn_cerrar";
			this->btn_cerrar->Size = System::Drawing::Size(122, 41);
			this->btn_cerrar->TabIndex = 2;
			this->btn_cerrar->Text = L"CERRAR";
			this->btn_cerrar->UseVisualStyleBackColor = true;
			this->btn_cerrar->Click += gcnew System::EventHandler(this, &Inicio::btn_cerrar_Click);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(729, 452);
			this->Controls->Add(this->btn_cerrar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_iniciar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SIMULADOR - COMEDOR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Simulador^ temporal = gcnew Simulador(); //Estoy creando un objeto formulario con el nombre temporal
		temporal->ShowDialog();//Estoy abriendo el objecto formulario como una ventana de dialogo
	}
	private: System::Void btn_cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox::Show("Esperamos volverte a ver :) ", "Gracias por usarnos", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Application::Exit();
	}
	};
}
