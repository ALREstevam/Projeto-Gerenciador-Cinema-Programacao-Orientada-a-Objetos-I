#pragma once

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
	private: System::Windows::Forms::TabControl^  tabControl1;
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
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox5;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox4;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TabPage^  tabPage4;



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
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(613, 389);
			this->tabControl1->TabIndex = 0;
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(433, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 59);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Salvar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Fileiras";
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Exibição";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(60, 53);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(138, 20);
			this->textBox6->TabIndex = 5;
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
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(47, 20);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(151, 20);
			this->textBox5->TabIndex = 3;
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 74);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Valor pago";
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Filme";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(91, 58);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(154, 21);
			this->comboBox1->TabIndex = 9;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(60, 52);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(236, 20);
			this->dateTimePicker1->TabIndex = 9;
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
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(34, 88);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"até";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(46, 26);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 13;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(46, 51);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 14;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 22);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(87, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Valor a pagar R$";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(99, 22);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 13);
			this->label14->TabIndex = 16;
			this->label14->Text = L"0.00";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(79, 71);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox1->TabIndex = 17;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(99, 47);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(28, 13);
			this->label15->TabIndex = 19;
			this->label15->Text = L"0.00";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 47);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 13);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Troco R$";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(63, 30);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox2->TabIndex = 10;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(63, 56);
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox3->TabIndex = 11;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Location = System::Drawing::Point(55, 55);
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox4->TabIndex = 23;
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Location = System::Drawing::Point(55, 29);
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox5->TabIndex = 22;
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
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 29);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 13);
			this->label18->TabIndex = 20;
			this->label18->Text = L"Fileira";
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
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Location = System::Drawing::Point(311, 25);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 100);
			this->groupBox5->TabIndex = 24;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Pagamento";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->comboBox2);
			this->groupBox6->Controls->Add(this->comboBox3);
			this->groupBox6->Location = System::Drawing::Point(8, 25);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(280, 100);
			this->groupBox6->TabIndex = 25;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Passo 1 - Escolher sala e filme";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->maskedTextBox5);
			this->groupBox7->Controls->Add(this->maskedTextBox4);
			this->groupBox7->Location = System::Drawing::Point(9, 131);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(279, 96);
			this->groupBox7->TabIndex = 26;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Passo 2 - Escolher poltrona";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->maskedTextBox1);
			this->groupBox8->Controls->Add(this->comboBox4);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Location = System::Drawing::Point(9, 234);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(279, 100);
			this->groupBox8->TabIndex = 27;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Escolher forma de pagamento";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(17, 47);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(107, 13);
			this->label19->TabIndex = 15;
			this->label19->Text = L"Forma de pagamento";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(130, 44);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 16;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(605, 363);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(424, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 59);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Salvar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(436, 285);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 59);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Salvar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 389);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
