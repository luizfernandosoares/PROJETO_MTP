extern double Res;
extern char Simbolo2;

#pragma once

namespace Projeto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Resistor
	/// </summary>
	public ref class Resistor : public System::Windows::Forms::Form
	{
	public:
		Resistor(void)
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
		~Resistor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Label^  lbl4;
	private: System::Windows::Forms::TextBox^  textBox1;





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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(12, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 55);
			this->groupBox1->TabIndex = 17;
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
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Resistor::radioButton3_CheckedChanged);
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
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Resistor::radioButton2_CheckedChanged);
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
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Resistor::radioButton1_CheckedChanged);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(70, 128);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 23);
			this->btn1->TabIndex = 16;
			this->btn1->Text = L"OK";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Resistor::btn1_Click);
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Location = System::Drawing::Point(16, 24);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(65, 13);
			this->lbl4->TabIndex = 15;
			this->lbl4->Text = L"Resistência ";
			this->lbl4->Click += gcnew System::EventHandler(this, &Resistor::lbl4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(87, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 14;
			// 
			// Resistor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(220, 165);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->textBox1);
			this->Name = L"Resistor";
			this->Text = L"Resistor";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
				 switch (Simbolo2) {
				 case 'K': Res = 1000*System::Convert::ToDouble(textBox1->Text); break;
				 case 'M': Res = 1000000*System::Convert::ToDouble(textBox1->Text); break;
				 case 'G': Res = 1000000000*System::Convert::ToDouble(textBox1->Text); break;
				 }
				 this->Close();
			 }
private: System::Void lbl4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Simbolo2 = 'K';
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Simbolo2 = 'M';
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Simbolo2 = 'G';
		 }
};
}
