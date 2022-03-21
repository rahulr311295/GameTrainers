#pragma once
#include <iostream>
#include "proc.h"
#include <vector>
#include <windows.h>
#include <tchar.h>

namespace EschalonTrainerGUI {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Button^ button2;





	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Process ID :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(92, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"\?\?\?";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button1->Location = System::Drawing::Point(414, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(7, 6);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(220, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Eschalon Book I Trainer";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(12, 63);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(167, 235);
			this->panel1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(187, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Attribute";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(187, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Skill Point";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(187, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Health";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(187, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Mana";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(187, 220);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 17);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Experience";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(187, 258);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 17);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Encumbarance";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(277, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 18);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(277, 108);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 18);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(277, 144);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 18);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(277, 182);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 18);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(277, 217);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 18);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(277, 254);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 18);
			this->textBox6->TabIndex = 16;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button2->Location = System::Drawing::Point(314, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"About";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Location = System::Drawing::Point(277, 88);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(100, 2);
			this->panel2->TabIndex = 31;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel3->Location = System::Drawing::Point(277, 127);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(100, 2);
			this->panel3->TabIndex = 32;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel4->Location = System::Drawing::Point(277, 163);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(100, 2);
			this->panel4->TabIndex = 33;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel5->Location = System::Drawing::Point(277, 200);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(100, 2);
			this->panel5->TabIndex = 34;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel6->Location = System::Drawing::Point(277, 237);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(100, 2);
			this->panel6->TabIndex = 34;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel7->Location = System::Drawing::Point(277, 273);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(100, 2);
			this->panel7->TabIndex = 35;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button3->Location = System::Drawing::Point(394, 64);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 26);
			this->button3->TabIndex = 36;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button4->Location = System::Drawing::Point(394, 249);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 26);
			this->button4->TabIndex = 37;
			this->button4->Text = L"Save";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button5->Location = System::Drawing::Point(394, 211);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(52, 26);
			this->button5->TabIndex = 38;
			this->button5->Text = L"Save";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button6->Location = System::Drawing::Point(394, 174);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(52, 26);
			this->button6->TabIndex = 39;
			this->button6->Text = L"Save";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button7->Location = System::Drawing::Point(394, 139);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(52, 26);
			this->button7->TabIndex = 40;
			this->button7->Text = L"Save";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button8->Location = System::Drawing::Point(394, 103);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 26);
			this->button8->TabIndex = 41;
			this->button8->Text = L"Save";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(508, 333);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Eschalon Book I Trainer";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		DWORD procID = GetProcId(L"Eschalon Book I.exe");
		uintptr_t moduleBase = GetModuleBaseAddress(procID, L"Eschalon Book I.exe");
		HANDLE hProcess = 0;
		hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procID);
		uintptr_t dynamicPtrBaseAddr = moduleBase + 0x001D1C38;
		//Offsets
		std::vector<unsigned int> attributeOffset = { 0x4C };
		std::vector<unsigned int> skillOffset = { 0x50 };
		std::vector<unsigned int> playerHealthOffset = { 0x38 };
		std::vector<unsigned int> playerManaOffset = { 0x3C };
		std::vector<unsigned int> playerExperienceOffset = { 0x40 };
		std::vector<unsigned int> playerEncumbaranceOffset = { 0xD0 };
		//
//Find Memory Address
		uintptr_t attributeAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, attributeOffset);
		uintptr_t skillAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, skillOffset);
		uintptr_t playerHealthAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerHealthOffset);
		uintptr_t playerManaAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerManaOffset);
		uintptr_t playerExperienceAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerExperienceOffset);
		uintptr_t playerEncumbaranceAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerEncumbaranceOffset);
		//Variables
		int attributeValue = 0;
		int skillValue = 0;
		int playerHealthValue = 0;
		int playerManaValue = 0;
		int playerExperienceValue = 0;
		float playerEncumbaranceValue = 0.0;
		//
//Read Current Value in memory
		ReadProcessMemory(hProcess, (BYTE*)attributeAddr, &attributeValue, sizeof(attributeValue), nullptr);
		ReadProcessMemory(hProcess, (BYTE*)skillAddr, &skillValue, sizeof(skillValue), nullptr);
		ReadProcessMemory(hProcess, (BYTE*)playerHealthAddr, &playerHealthValue, sizeof(playerHealthValue), nullptr);
		ReadProcessMemory(hProcess, (BYTE*)playerManaAddr, &playerManaValue, sizeof(playerManaValue), nullptr);
		ReadProcessMemory(hProcess, (BYTE*)playerExperienceAddr, &playerExperienceValue, sizeof(playerExperienceValue), nullptr);
		ReadProcessMemory(hProcess, (BYTE*)playerEncumbaranceAddr, &playerEncumbaranceValue, sizeof(playerEncumbaranceValue), nullptr);
		//
//Convert to Int and convert to string for GUI
		int attributeresult = System::Convert::ToInt16(attributeValue);
		int skillresult = System::Convert::ToInt16(skillValue);
		int healthresult = System::Convert::ToInt16(playerHealthValue);
		int manaresult = System::Convert::ToInt16(playerManaValue);
		int expresult = System::Convert::ToInt16(playerExperienceValue);
		float encumresult = System::Convert::ToDouble(playerEncumbaranceValue);
		textBox1->Text = System::Convert::ToString(attributeresult);
		textBox2->Text = System::Convert::ToString(skillresult);
		textBox3->Text = System::Convert::ToString(healthresult);
		textBox4->Text = System::Convert::ToString(manaresult);
		textBox5->Text = System::Convert::ToString(expresult);
		textBox6->Text = System::Convert::ToString(encumresult);

		int prcID = procID;
		if (prcID != NULL) {
			label2->Text = System::Convert::ToString(prcID);
		}
		else {
			label2->Text = "Game not found";
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Eschalon Book I Trainer \nMade by Jamoski\nhttps://rahulr.in","About",MessageBoxButtons::OK,MessageBoxIcon::Information);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	DWORD procID = GetProcId(L"Eschalon Book I.exe");
	uintptr_t moduleBase = GetModuleBaseAddress(procID, L"Eschalon Book I.exe");
	HANDLE hProcess = 0;
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procID);
	uintptr_t dynamicPtrBaseAddr = moduleBase + 0x001D1C38;
	//Offsets
	std::vector<unsigned int> attributeOffset = { 0x4C };
	uintptr_t attributeAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, attributeOffset);
	int newattributeValue =  System::Convert::ToInt16(textBox1->Text);
	WriteProcessMemory(hProcess, (BYTE*)attributeAddr, &newattributeValue, sizeof(newattributeValue), nullptr);
	MessageBox::Show("Attribute Value changed to "+newattributeValue, "Success", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	ReadProcessMemory(hProcess, (BYTE*)attributeAddr, &newattributeValue, sizeof(newattributeValue), nullptr);
	textBox1->Text = System::Convert::ToString(newattributeValue);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	
	DWORD procID = GetProcId(L"Eschalon Book I.exe");
	uintptr_t moduleBase = GetModuleBaseAddress(procID, L"Eschalon Book I.exe");
	HANDLE hProcess = 0;
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procID);
	uintptr_t dynamicPtrBaseAddr = moduleBase + 0x001D1C38;
	//Offsets
	std::vector<unsigned int> skillOffset = { 0x50 };
	uintptr_t skillAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, skillOffset);
	int newskillValue = System::Convert::ToInt16(textBox2->Text);
	WriteProcessMemory(hProcess, (BYTE*)skillAddr, &newskillValue, sizeof(newskillValue), nullptr);
	MessageBox::Show("Skill Value changed to " + newskillValue, "Success", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	ReadProcessMemory(hProcess, (BYTE*)skillAddr, &newskillValue, sizeof(newskillValue), nullptr);
	textBox2->Text = System::Convert::ToString(newskillValue);
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	
	DWORD procID = GetProcId(L"Eschalon Book I.exe");
	uintptr_t moduleBase = GetModuleBaseAddress(procID, L"Eschalon Book I.exe");
	HANDLE hProcess = 0;
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procID);
	uintptr_t dynamicPtrBaseAddr = moduleBase + 0x001D1C38;
	//Offsets
	std::vector<unsigned int> playerHealthOffset = { 0x38 };
	uintptr_t playerHealthAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerHealthOffset);
	int newplayerHealthValue = System::Convert::ToInt16(textBox3->Text);
	WriteProcessMemory(hProcess, (BYTE*)playerHealthAddr, &newplayerHealthValue, sizeof(newplayerHealthValue), nullptr);
	MessageBox::Show("Health Value changed to " + newplayerHealthValue, "Success", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	ReadProcessMemory(hProcess, (BYTE*)playerHealthAddr, &newplayerHealthValue, sizeof(newplayerHealthValue), nullptr);
	textBox3->Text = System::Convert::ToString(newplayerHealthValue);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	DWORD procID = GetProcId(L"Eschalon Book I.exe");
	uintptr_t moduleBase = GetModuleBaseAddress(procID, L"Eschalon Book I.exe");
	HANDLE hProcess = 0;
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procID);
	uintptr_t dynamicPtrBaseAddr = moduleBase + 0x001D1C38;
	//Offsets
	std::vector<unsigned int> playerManaOffset = { 0x3C };
	uintptr_t playerManaAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerManaOffset);
	int newplayerManaValue = System::Convert::ToInt16(textBox4->Text);
	WriteProcessMemory(hProcess, (BYTE*)playerManaAddr, &newplayerManaValue, sizeof(newplayerManaValue), nullptr);
	MessageBox::Show("Mana Value changed to " + newplayerManaValue, "Success", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	ReadProcessMemory(hProcess, (BYTE*)playerManaAddr, &newplayerManaValue, sizeof(newplayerManaValue), nullptr);
	textBox4->Text = System::Convert::ToString(newplayerManaValue);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	DWORD procID = GetProcId(L"Eschalon Book I.exe");
	uintptr_t moduleBase = GetModuleBaseAddress(procID, L"Eschalon Book I.exe");
	HANDLE hProcess = 0;
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procID);
	uintptr_t dynamicPtrBaseAddr = moduleBase + 0x001D1C38;
	//Offsets
	std::vector<unsigned int> playerExperienceOffset = { 0x40 };
	uintptr_t playerExperienceAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerExperienceOffset);
	int newplayerExperienceValue = System::Convert::ToInt16(textBox5->Text);
	WriteProcessMemory(hProcess, (BYTE*)playerExperienceAddr, &newplayerExperienceValue, sizeof(newplayerExperienceValue), nullptr);
	MessageBox::Show("Mana Value changed to " + newplayerExperienceValue, "Success", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	ReadProcessMemory(hProcess, (BYTE*)playerExperienceAddr, &newplayerExperienceValue, sizeof(newplayerExperienceValue), nullptr);
	textBox5->Text = System::Convert::ToString(newplayerExperienceValue);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	DWORD procID = GetProcId(L"Eschalon Book I.exe");
	uintptr_t moduleBase = GetModuleBaseAddress(procID, L"Eschalon Book I.exe");
	HANDLE hProcess = 0;
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procID);
	uintptr_t dynamicPtrBaseAddr = moduleBase + 0x001D1C38;
	//Offsets
	std::vector<unsigned int> playerEncumbaranceOffset = { 0xD0 };
	uintptr_t playerEncumbaranceAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerEncumbaranceOffset);
	float newplayerEncumbaranceValue = System::Convert::ToDouble(textBox6->Text);
	WriteProcessMemory(hProcess, (BYTE*)playerEncumbaranceAddr, &newplayerEncumbaranceValue, sizeof(newplayerEncumbaranceValue), nullptr);
	MessageBox::Show("Encumbarance Value changed to " + newplayerEncumbaranceValue, "Success", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	ReadProcessMemory(hProcess, (BYTE*)playerEncumbaranceAddr, &newplayerEncumbaranceValue, sizeof(newplayerEncumbaranceValue), nullptr);
	textBox6->Text = System::Convert::ToString(newplayerEncumbaranceValue);
}
};
}
