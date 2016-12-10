#include "stdafx.h"
#include "potenciometro.h"
#include "Capacitor1.h"
#include "Resistor.h"
#include "Capacitor2.h"
#include "Fonte1.h"
#include "Power.h"
#include <cmath>
double res_tot, resistencia, reatancia1, reatancia2, corrente_tot, V1, V2, V3, V4, I1, I2, corrente_diac;
int test = 0;

#pragma once

namespace Projeto {

	#define PI 3.1415

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  pot;
	private: System::Windows::Forms::Button^  C1;
	private: System::Windows::Forms::Button^  R1;
	private: System::Windows::Forms::Button^  C2;
	protected: 

	protected: 




	private: System::Windows::Forms::Button^  simular;
	private: System::Windows::Forms::Button^  Fonte;
	private: System::Windows::Forms::Button^  carga;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;













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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pot = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->R1 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->simular = (gcnew System::Windows::Forms::Button());
			this->Fonte = (gcnew System::Windows::Forms::Button());
			this->carga = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pot
			// 
			this->pot->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pot.BackgroundImage")));
			this->pot->Location = System::Drawing::Point(264, 104);
			this->pot->Name = L"pot";
			this->pot->Size = System::Drawing::Size(35, 59);
			this->pot->TabIndex = 0;
			this->pot->Text = L" ";
			this->pot->UseVisualStyleBackColor = true;
			this->pot->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// C1
			// 
			this->C1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"C1.BackgroundImage")));
			this->C1->Location = System::Drawing::Point(270, 249);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(27, 36);
			this->C1->TabIndex = 1;
			this->C1->Text = L" ";
			this->C1->UseVisualStyleBackColor = true;
			this->C1->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// R1
			// 
			this->R1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"R1.BackgroundImage")));
			this->R1->Location = System::Drawing::Point(338, 205);
			this->R1->Name = L"R1";
			this->R1->Size = System::Drawing::Size(68, 24);
			this->R1->TabIndex = 2;
			this->R1->Text = L" ";
			this->R1->UseVisualStyleBackColor = true;
			this->R1->Click += gcnew System::EventHandler(this, &Form1::R1_Click);
			// 
			// C2
			// 
			this->C2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"C2.BackgroundImage")));
			this->C2->Location = System::Drawing::Point(435, 242);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(27, 43);
			this->C2->TabIndex = 3;
			this->C2->Text = L" ";
			this->C2->UseVisualStyleBackColor = true;
			this->C2->Click += gcnew System::EventHandler(this, &Form1::C2_Click);
			// 
			// simular
			// 
			this->simular->Location = System::Drawing::Point(177, 352);
			this->simular->Name = L"simular";
			this->simular->Size = System::Drawing::Size(88, 23);
			this->simular->TabIndex = 5;
			this->simular->Text = L"Simular";
			this->simular->UseVisualStyleBackColor = true;
			this->simular->Click += gcnew System::EventHandler(this, &Form1::simular_Click);
			// 
			// Fonte
			// 
			this->Fonte->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Fonte.BackgroundImage")));
			this->Fonte->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Fonte->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Fonte->Location = System::Drawing::Point(28, 149);
			this->Fonte->Name = L"Fonte";
			this->Fonte->Size = System::Drawing::Size(75, 76);
			this->Fonte->TabIndex = 6;
			this->Fonte->Text = L" ";
			this->Fonte->UseVisualStyleBackColor = true;
			this->Fonte->Click += gcnew System::EventHandler(this, &Form1::Fonte_Click);
			// 
			// carga
			// 
			this->carga->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"carga.BackgroundImage")));
			this->carga->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->carga->Location = System::Drawing::Point(115, 24);
			this->carga->Name = L"carga";
			this->carga->Size = System::Drawing::Size(61, 34);
			this->carga->TabIndex = 7;
			this->carga->Text = L" ";
			this->carga->UseVisualStyleBackColor = true;
			this->carga->Click += gcnew System::EventHandler(this, &Form1::carga_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(60, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Atualizar dados";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(110, 149);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(10, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L" ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(108, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L" ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(306, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L" ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(354, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(304, 249);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L" ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(469, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L" ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(760, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Como utilizar\?";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(702, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(173, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Informações do circuito:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(806, 67);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L" ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(806, 93);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(10, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L" ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(702, 67);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Tensão do DIAC:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(702, 93);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(93, 13);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Corrente do DIAC:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Location = System::Drawing::Point(675, 186);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"AVISO";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(11, 56);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Corrente do DIAC: 100mA";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(11, 30);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 13);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Tensão do DIAC: 28~38V";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(306, 127);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 13);
			this->label9->TabIndex = 25;
			this->label9->Text = L"P1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(303, 272);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(22, 13);
			this->label15->TabIndex = 26;
			this->label15->Text = L"C1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(469, 272);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(22, 13);
			this->label16->TabIndex = 27;
			this->label16->Text = L"C2";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(357, 236);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 13);
			this->label17->TabIndex = 28;
			this->label17->Text = L"R1";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(672, 127);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(10, 13);
			this->label18->TabIndex = 29;
			this->label18->Text = L" ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(672, 150);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(10, 13);
			this->label19->TabIndex = 30;
			this->label19->Text = L" ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(922, 392);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->carga);
			this->Controls->Add(this->Fonte);
			this->Controls->Add(this->simular);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->R1);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->pot);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Dimmer";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//double res_tot, reatancia1, reatancia2, corrente_tot, V1, V2, I1, I2, I3, corrente_diac;

#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) { 
				label1->Text = "Tensao: " + Convert::ToString(Tensao);
				label2->Text = "Frequencia: " + Convert::ToString(Freq);
				label3->Text = Convert::ToString(Pot) + "ohm";
				label4->Text = Convert::ToString(Res) + "ohm";
				label5->Text = Convert::ToString(Cap1) + "F";
				label6->Text = Convert::ToString(Cap2) + "F";
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				Capacitor1^ l2 = gcnew Capacitor1();
				l2->ShowDialog();
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				potenciometro^ t2 = gcnew potenciometro();
				t2->ShowDialog();
			 }
private: System::Void R1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Resistor^ f2 = gcnew Resistor();
			 f2->ShowDialog();
		 }
private: System::Void C2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Capacitor2^ g2 = gcnew Capacitor2();
			 g2->ShowDialog();
		 }
private: System::Void Fonte_Click(System::Object^  sender, System::EventArgs^  e) {
			 Power^ p2 = gcnew Power();
			 p2->ShowDialog();
		 }
private: System::Void carga_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (test)
				 MessageBox::Show("Yeah, I'm working!!!");
			 else
				 MessageBox::Show("Too bad, I can't work with this condictions :(");
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			label1->Text = "Tensao: " + Convert::ToString(Tensao) + "V";
			label2->Text = "Frequencia: " + Convert::ToString(Freq) + "Hz";
			//Potenciometro
			switch(Simbolo1) {
			case 'K':
				label3->Text = Convert::ToString((double)Pot/1000.0) + "Kohm";
				break;
			case 'M':
				label3->Text = Convert::ToString((double)Pot/1000000.0) + "Mohm";
				break;
			case 'G':
				label3->Text = Convert::ToString((double)Pot/1000000000.0) + "Gohm";
				break;
			}
			//Resistor
			switch(Simbolo2) {
			case 'K':
				label4->Text = Convert::ToString((double)Res/1000.0) + "Kohm";
				break;
			case 'M':
				label4->Text = Convert::ToString((double)Res/1000000.0) + "Mohm";
				break;
			case 'G':
				label4->Text = Convert::ToString((double)Res/1000000000.0) + "Gohm";
				break;
			}
			//Capacitor 1
			switch(Simbolo3) {
			case 'm':
				label5->Text = Convert::ToString((double)Cap1*1000000.0) + "mF";
				break;
			case 'n':
				label5->Text = Convert::ToString((double)Cap1*1000000000.0) + "nF";
				break;
			case 'p':
				label5->Text = Convert::ToString((double)Cap1*1000000000000.0) + "pF";
				break;
			}
			//Capacitor 2
			switch(Simbolo4) {
			case 'm':
				label6->Text = Convert::ToString((double)Cap2*1000000.0) + "mF";
				break;
			case 'n':
				label6->Text = Convert::ToString((double)Cap2*1000000000.0) + "nF";
				break;
			case 'p':
				label6->Text = Convert::ToString((double)Cap2*1000000000000.0) + "pF";
				break;
			}
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Seja bem vindo ao Simulador DIMMER\n1)Coloque cada medição dos componentes\n2)AVISO: Coloque primeiro o valor e depois o prefixo métrico\n3)Clique em 'Atualizar Dados' para mostrar os valores colocados\n4)Quando estiver tudo pronto, clique em Simular!");
		 }
private: System::Void simular_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( Cap1 && Cap2 && Res && Pot && Tensao && Freq ) {
				 test = 0;
				 reatancia1 = 1.0/(double)(2*PI*Freq*Cap1);
				 reatancia2 = 1.0/(double)(2*PI*Freq*Cap2);
				 res_tot = ((reatancia2+Res)*(reatancia1+Pot))/(reatancia1+Res+reatancia2+Pot);
				 corrente_tot = Tensao/res_tot;
				 V1 = corrente_tot*Pot;
				 if ( V1 >= Tensao ) {
					 MessageBox::Show("WARNING: Erro grave. Verifique a tensão!");
					 label18->Text = "Queda de tensão no Potênciometro: " + Convert::ToString(V1)+"V";
					 test = 1;
				 }
				 V2 = Tensao - V1;
				 I2 = (res_tot/(Res+reatancia2))*corrente_tot;
				 V3 = I2*Res;
				 if ( V3 >= V2 ) {
					 MessageBox::Show("WARNING: Erro grave. Verifique a tensão!");
					 label19->Text = "Queda de tensão no Resistor R1: " + Convert::ToString(V3)+"V";
					 test = 1;
				 }
				 V4 = V2 - V3;
				 corrente_diac = I2;
				 label8->Text = Convert::ToString(V4) + "V";
				 label10->Text = Convert::ToString(corrente_diac)+"A";
				 if ( corrente_diac <= 0,1 && V4 <= 38 && V4 >= 28 && test == 0 ) {
					 test = 1;
					 label18->Text = " ";
					 label19->Text = " ";
					 MessageBox::Show("Circuito funcionando!!");
				 }
				 else
				   	 MessageBox::Show("WARNING: Erro grave. Verifique a tensão ou a corrente do DIAC!");
			 }
			 else {
					 MessageBox::Show("ERROR: As informações do circuitos são insuficientes!");			 
			 }
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

