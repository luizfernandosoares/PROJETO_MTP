#include<cstring>
extern double Pot;
extern char Simbolo1;

#pragma once

namespace Projeto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for potenciometro
	/// </summary>
	public ref class potenciometro : public System::Windows::Forms::Form
	{
	public:
		potenciometro(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~potenciometro()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::TextBox^  Min;
	private: System::Windows::Forms::TextBox^  Max;

	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lbl3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  lbl4;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Min = (gcnew System::Windows::Forms::TextBox());
			this->Max = (gcnew System::Windows::Forms::TextBox());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Min
			// 
			this->Min->Location = System::Drawing::Point(77, 6);
			this->Min->Name = L"Min";
			this->Min->Size = System::Drawing::Size(38, 20);
			this->Min->TabIndex = 1;
			// 
			// Max
			// 
			this->Max->Location = System::Drawing::Point(159, 6);
			this->Max->Name = L"Max";
			this->Max->Size = System::Drawing::Size(37, 20);
			this->Max->TabIndex = 2;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(2, 9);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(69, 13);
			this->lbl2->TabIndex = 4;
			this->lbl2->Text = L"Variação  De";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(122, 9);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(29, 13);
			this->lbl3->TabIndex = 5;
			this->lbl3->Text = L"  Até";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Location = System::Drawing::Point(2, 40);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(88, 13);
			this->lbl4->TabIndex = 7;
			this->lbl4->Text = L"Resistência atual";
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(76, 127);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 23);
			this->btn1->TabIndex = 8;
			this->btn1->Text = L"OK";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &potenciometro::btn1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(5, 66);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 55);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pre. Métrico";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(149, 20);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(42, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"GΩ";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &potenciometro::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(72, 20);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(43, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"MΩ";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &potenciometro::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(41, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"KΩ";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &potenciometro::radioButton1_CheckedChanged);
			// 
			// potenciometro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(216, 162);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->Max);
			this->Controls->Add(this->Min);
			this->Name = L"potenciometro";
			this->Text = L"potenciometro";
			this->Load += gcnew System::EventHandler(this, &potenciometro::potenciometro_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
				 switch (Simbolo1) {
				 case 'K': Pot = (double)1000*System::Convert::ToDouble(textBox1->Text); break;
				 case 'M': Pot = (double)1000000*System::Convert::ToDouble(textBox1->Text); break;
				 case 'G': Pot = (double)1000000000*System::Convert::ToDouble(textBox1->Text); break;
				 }
				 this->Close();
			 }
	private: System::Void Tipos_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void potenciometro_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Simbolo1 = 'M';
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Simbolo1 = 'K';
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Simbolo1 = 'G';
		 }
};
}
