#pragma once
#include <string>
#include "Controller.h"
#include "DateTimeControl.h"
#include "Coordenada.h"
#include "Filme.h"
#include "Funcionario.h"
#include "Ingresso.h"
#include "Poltrona.h"
#include "Sala.h"
#include "Sessao.h"

namespace poo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			Controller ctrl;
			Funcionario adm;
			adm.setLogin("admin");
			adm.setSenha("admin");

			ctrl.addEmployee(adm, 0);


			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  labelTroco;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  labelPagar;


	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  comboBoxSala;

	private: System::Windows::Forms::ComboBox^  comboBoxFilme;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::ComboBox^  comboBoxFormaPagamento;

	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxFileira;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxColuna;


	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::Button^  Login;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBoxLogin;

	private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TextBox^  textBoxSenha;

	private: System::Windows::Forms::TabPage^  tabPage5;

	private: System::Windows::Forms::Label^  label23;



	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::ComboBox^  comboBoxTipoIngresso;

private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::ComboBox^  comboBox7;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::ComboBox^  comboBox8;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxPago;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::TabControl^  tabControl1;
private: bool access;







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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->Login = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBoxSenha = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBoxPago = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->comboBoxTipoIngresso = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBoxFormaPagamento = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxFileira = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxColuna = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBoxFilme = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSala = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->labelPagar = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->labelTroco = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(613, 389);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->groupBox9);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(605, 363);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Inicio";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->Login);
			this->groupBox9->Controls->Add(this->label21);
			this->groupBox9->Controls->Add(this->textBoxLogin);
			this->groupBox9->Controls->Add(this->label22);
			this->groupBox9->Controls->Add(this->textBoxSenha);
			this->groupBox9->Location = System::Drawing::Point(34, 80);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(322, 210);
			this->groupBox9->TabIndex = 16;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Login de funcionário";
			// 
			// Login
			// 
			this->Login->Location = System::Drawing::Point(241, 171);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(75, 33);
			this->Login->TabIndex = 17;
			this->Login->Text = L"Login";
			this->Login->UseVisualStyleBackColor = true;
			this->Login->Click += gcnew System::EventHandler(this, &MyForm::Login_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 27);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(33, 13);
			this->label21->TabIndex = 2;
			this->label21->Text = L"Login";
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(47, 20);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(151, 20);
			this->textBoxLogin->TabIndex = 3;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(6, 53);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(38, 13);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Senha";
			// 
			// textBoxSenha
			// 
			this->textBoxSenha->Location = System::Drawing::Point(47, 50);
			this->textBoxSenha->Name = L"textBoxSenha";
			this->textBoxSenha->PasswordChar = '*';
			this->textBoxSenha->Size = System::Drawing::Size(151, 20);
			this->textBoxSenha->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(27, 15);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(362, 37);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Cinema:  <nome aqui>";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(605, 363);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Adicionar Sala";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->maskedTextBox2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->maskedTextBox3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(21, 121);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(308, 100);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Poltrona";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(63, 30);
			this->maskedTextBox2->Mask = L"000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox2->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Fileiras";
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(63, 56);
			this->maskedTextBox3->Mask = L"000";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox3->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Colunas";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(21, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(308, 100);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sala";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(154, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nome da sala";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tipo de sala";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Normal", L"3D" });
			this->comboBox1->Location = System::Drawing::Point(91, 58);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(154, 21);
			this->comboBox1->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(433, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 59);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Salvar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(605, 363);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Adicionar Filme";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(435, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 59);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Salvar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->dateTimePicker1);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->dateTimePicker2);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Location = System::Drawing::Point(20, 131);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(322, 130);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Data";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Exibição";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(60, 52);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(236, 20);
			this->dateTimePicker1->TabIndex = 9;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(34, 88);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"até";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(60, 88);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(236, 20);
			this->dateTimePicker2->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(35, 58);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"de";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Location = System::Drawing::Point(20, 16);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(322, 109);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Sala";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Nome";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(47, 20);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(151, 20);
			this->textBox5->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Duração";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(60, 53);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(138, 20);
			this->textBox6->TabIndex = 5;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->groupBox8);
			this->tabPage3->Controls->Add(this->groupBox7);
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(605, 363);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Vender ingresso";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(436, 283);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 59);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Salvar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->maskedTextBoxPago);
			this->groupBox8->Controls->Add(this->label24);
			this->groupBox8->Controls->Add(this->comboBoxTipoIngresso);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->comboBoxFormaPagamento);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Location = System::Drawing::Point(9, 234);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(279, 123);
			this->groupBox8->TabIndex = 27;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Escolher forma de pagamento";
			// 
			// maskedTextBoxPago
			// 
			this->maskedTextBoxPago->Location = System::Drawing::Point(79, 88);
			this->maskedTextBoxPago->Mask = L"00.00";
			this->maskedTextBoxPago->Name = L"maskedTextBoxPago";
			this->maskedTextBoxPago->Size = System::Drawing::Size(100, 20);
			this->maskedTextBoxPago->TabIndex = 20;
			this->maskedTextBoxPago->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::maskedTextBoxPago_KeyDown);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(17, 26);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(85, 13);
			this->label24->TabIndex = 18;
			this->label24->Text = L"Tipo de ingresso";
			// 
			// comboBoxTipoIngresso
			// 
			this->comboBoxTipoIngresso->FormattingEnabled = true;
			this->comboBoxTipoIngresso->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Inteira", L"Meia - Estudante", L"Meia - Professor",
					L"Meia - Idoso", L"Meia - Outro"
			});
			this->comboBoxTipoIngresso->Location = System::Drawing::Point(130, 23);
			this->comboBoxTipoIngresso->Name = L"comboBoxTipoIngresso";
			this->comboBoxTipoIngresso->Size = System::Drawing::Size(121, 21);
			this->comboBoxTipoIngresso->TabIndex = 19;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(17, 59);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(107, 13);
			this->label19->TabIndex = 15;
			this->label19->Text = L"Forma de pagamento";
			// 
			// comboBoxFormaPagamento
			// 
			this->comboBoxFormaPagamento->FormattingEnabled = true;
			this->comboBoxFormaPagamento->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Dinheiro", L"Cartão de crédito",
					L"Cartão de débito", L"Cheque"
			});
			this->comboBoxFormaPagamento->Location = System::Drawing::Point(130, 56);
			this->comboBoxFormaPagamento->Name = L"comboBoxFormaPagamento";
			this->comboBoxFormaPagamento->Size = System::Drawing::Size(121, 21);
			this->comboBoxFormaPagamento->TabIndex = 16;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Valor pago";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->maskedTextBoxFileira);
			this->groupBox7->Controls->Add(this->maskedTextBoxColuna);
			this->groupBox7->Location = System::Drawing::Point(9, 131);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(279, 96);
			this->groupBox7->TabIndex = 26;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Passo 2 - Escolher poltrona";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 29);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 13);
			this->label18->TabIndex = 20;
			this->label18->Text = L"Fileira";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(9, 55);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 13);
			this->label17->TabIndex = 21;
			this->label17->Text = L"Coluna";
			// 
			// maskedTextBoxFileira
			// 
			this->maskedTextBoxFileira->Location = System::Drawing::Point(55, 29);
			this->maskedTextBoxFileira->Name = L"maskedTextBoxFileira";
			this->maskedTextBoxFileira->Size = System::Drawing::Size(100, 20);
			this->maskedTextBoxFileira->TabIndex = 22;
			// 
			// maskedTextBoxColuna
			// 
			this->maskedTextBoxColuna->Location = System::Drawing::Point(55, 55);
			this->maskedTextBoxColuna->Name = L"maskedTextBoxColuna";
			this->maskedTextBoxColuna->Size = System::Drawing::Size(100, 20);
			this->maskedTextBoxColuna->TabIndex = 23;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->comboBoxFilme);
			this->groupBox6->Controls->Add(this->comboBoxSala);
			this->groupBox6->Location = System::Drawing::Point(8, 25);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(280, 100);
			this->groupBox6->TabIndex = 25;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Passo 1 - Escolher sala e filme";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Filme";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 51);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Sala";
			// 
			// comboBoxFilme
			// 
			this->comboBoxFilme->FormattingEnabled = true;
			this->comboBoxFilme->Location = System::Drawing::Point(46, 26);
			this->comboBoxFilme->Name = L"comboBoxFilme";
			this->comboBoxFilme->Size = System::Drawing::Size(121, 21);
			this->comboBoxFilme->TabIndex = 13;
			// 
			// comboBoxSala
			// 
			this->comboBoxSala->FormattingEnabled = true;
			this->comboBoxSala->Location = System::Drawing::Point(46, 51);
			this->comboBoxSala->Name = L"comboBoxSala";
			this->comboBoxSala->Size = System::Drawing::Size(121, 21);
			this->comboBoxSala->TabIndex = 14;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->labelPagar);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->labelTroco);
			this->groupBox5->Location = System::Drawing::Point(311, 25);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 100);
			this->groupBox5->TabIndex = 24;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Pagamento";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(18, 34);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(87, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Valor a pagar R$";
			// 
			// labelPagar
			// 
			this->labelPagar->AutoSize = true;
			this->labelPagar->Location = System::Drawing::Point(111, 34);
			this->labelPagar->Name = L"labelPagar";
			this->labelPagar->Size = System::Drawing::Size(28, 13);
			this->labelPagar->TabIndex = 16;
			this->labelPagar->Text = L"0.00";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 59);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(88, 13);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Troco             R$";
			// 
			// labelTroco
			// 
			this->labelTroco->AutoSize = true;
			this->labelTroco->Location = System::Drawing::Point(111, 59);
			this->labelTroco->Name = L"labelTroco";
			this->labelTroco->Size = System::Drawing::Size(28, 13);
			this->labelTroco->TabIndex = 19;
			this->labelTroco->Text = L"0.00";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Controls->Add(this->comboBox5);
			this->tabPage5->Controls->Add(this->button4);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(605, 363);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Editar sala";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(162, 64);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 28);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Remover";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(24, 31);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(28, 13);
			this->label23->TabIndex = 20;
			this->label23->Text = L"Sala";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(64, 28);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(186, 21);
			this->comboBox5->TabIndex = 30;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(64, 64);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 28);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->button6);
			this->tabPage6->Controls->Add(this->label25);
			this->tabPage6->Controls->Add(this->comboBox7);
			this->tabPage6->Controls->Add(this->button7);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(605, 363);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Editar Filme";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(156, 62);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 28);
			this->button6->TabIndex = 35;
			this->button6->Text = L"Remover";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(18, 29);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(31, 13);
			this->label25->TabIndex = 32;
			this->label25->Text = L"Filme";
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(58, 26);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(186, 21);
			this->comboBox7->TabIndex = 34;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(58, 62);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 28);
			this->button7->TabIndex = 33;
			this->button7->Text = L"Editar";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->groupBox11);
			this->tabPage7->Controls->Add(this->groupBox10);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(605, 363);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Editar funcionário";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->textBox7);
			this->groupBox11->Controls->Add(this->textBox4);
			this->groupBox11->Controls->Add(this->label15);
			this->groupBox11->Controls->Add(this->label14);
			this->groupBox11->Controls->Add(this->button10);
			this->groupBox11->Location = System::Drawing::Point(8, 18);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(266, 208);
			this->groupBox11->TabIndex = 37;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Adicionar";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(46, 71);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 39;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(46, 45);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 38;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 74);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 13);
			this->label15->TabIndex = 37;
			this->label15->Text = L"Senha";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 45);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(33, 13);
			this->label14->TabIndex = 36;
			this->label14->Text = L"Login";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(172, 173);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(88, 28);
			this->button10->TabIndex = 36;
			this->button10->Text = L"Salvar";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->comboBox8);
			this->groupBox10->Controls->Add(this->button9);
			this->groupBox10->Controls->Add(this->button8);
			this->groupBox10->Controls->Add(this->label26);
			this->groupBox10->Location = System::Drawing::Point(278, 18);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(319, 114);
			this->groupBox10->TabIndex = 36;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Editar";
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(78, 36);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(186, 21);
			this->comboBox8->TabIndex = 34;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(78, 72);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(88, 28);
			this->button9->TabIndex = 33;
			this->button9->Text = L"Editar";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(176, 72);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(88, 28);
			this->button8->TabIndex = 35;
			this->button8->Text = L"Remover";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(10, 39);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(62, 13);
			this->label26->TabIndex = 32;
			this->label26->Text = L"Funcionário";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(613, 389);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void Login_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!(textBoxLogin->Text->ToString() == "") || !(textBoxSenha->Text->ToString())) {
		access = true; // = login((textBoxLogin->Text->ToString(), textBoxSenha->Text->ToString());
	}

}



private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!access) {
		tabControl1->SelectedIndex = 0;
	}

}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	this->access = false;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void maskedTextBoxPago_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	paymentCalculator(20.00);
}

private: void paymentCalculator(float price) {
	labelPagar->Text = price.ToString();

	

	if (comboBoxTipoIngresso->SelectedIndex != 0)
	{
		price /= 2;
	}

	/*if (maskedTextBoxPago->Text->ToString() != "") {
		String^ i1 = maskedTextBoxPago->Text;
		float rez = (Convert::ToDouble(i1));
		float trc = price - rez;
		labelTroco->Text = trc.ToString();
		

	}*/


}



};
}
