#pragma once
#include "MyForm1.h"

namespace TicTacToe {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn7;

	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;

	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ tx1;
	private: System::Windows::Forms::TextBox^ tx2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;






































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tx1 = (gcnew System::Windows::Forms::TextBox());
			this->tx2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(648, 95);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tic Tac Toe X,O";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(20, 107);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1333, 632);
			this->panel1->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(594, 509);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 56);
			this->button3->TabIndex = 2;
			this->button3->Text = L"info";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->panel2);
			this->panel4->Location = System::Drawing::Point(661, 15);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(647, 488);
			this->panel4->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button11);
			this->panel5->Controls->Add(this->button10);
			this->panel5->Location = System::Drawing::Point(50, 215);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(581, 253);
			this->panel5->TabIndex = 15;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(27, 144);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(518, 86);
			this->button11->TabIndex = 0;
			this->button11->Text = L"New Game";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(27, 27);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(518, 86);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(49, 21);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(582, 188);
			this->panel2->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(249, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 55);
			this->label7->TabIndex = 4;
			this->label7->Text = L"O";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(254, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 55);
			this->label6->TabIndex = 4;
			this->label6->Text = L"X";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(316, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(230, 55);
			this->label5->TabIndex = 3;
			this->label5->Text = L"0";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(316, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(230, 62);
			this->label4->TabIndex = 2;
			this->label4->Text = L"0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(63, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 55);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Player: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(63, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 55);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Player:";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btn9);
			this->panel3->Controls->Add(this->btn8);
			this->panel3->Controls->Add(this->btn7);
			this->panel3->Controls->Add(this->btn6);
			this->panel3->Controls->Add(this->btn5);
			this->panel3->Controls->Add(this->btn4);
			this->panel3->Controls->Add(this->btn3);
			this->panel3->Controls->Add(this->btn2);
			this->panel3->Controls->Add(this->btn1);
			this->panel3->Location = System::Drawing::Point(8, 15);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(647, 488);
			this->panel3->TabIndex = 0;
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::White;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(399, 323);
			this->btn9->MaximumSize = System::Drawing::Size(145, 145);
			this->btn9->MinimumSize = System::Drawing::Size(145, 145);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(145, 145);
			this->btn9->TabIndex = 43;
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::White;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(248, 323);
			this->btn8->MaximumSize = System::Drawing::Size(145, 145);
			this->btn8->MinimumSize = System::Drawing::Size(145, 145);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(145, 145);
			this->btn8->TabIndex = 43;
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::White;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(97, 323);
			this->btn7->MaximumSize = System::Drawing::Size(145, 145);
			this->btn7->MinimumSize = System::Drawing::Size(145, 145);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(145, 145);
			this->btn7->TabIndex = 42;
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::White;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(399, 172);
			this->btn6->MaximumSize = System::Drawing::Size(145, 145);
			this->btn6->MinimumSize = System::Drawing::Size(145, 145);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(145, 145);
			this->btn6->TabIndex = 41;
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::White;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(248, 172);
			this->btn5->MaximumSize = System::Drawing::Size(145, 145);
			this->btn5->MinimumSize = System::Drawing::Size(145, 145);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(145, 145);
			this->btn5->TabIndex = 40;
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::White;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(97, 172);
			this->btn4->MaximumSize = System::Drawing::Size(145, 145);
			this->btn4->MinimumSize = System::Drawing::Size(145, 145);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(145, 145);
			this->btn4->TabIndex = 39;
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::White;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(399, 21);
			this->btn3->MaximumSize = System::Drawing::Size(145, 145);
			this->btn3->MinimumSize = System::Drawing::Size(145, 145);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(145, 145);
			this->btn3->TabIndex = 38;
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::White;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(248, 21);
			this->btn2->MaximumSize = System::Drawing::Size(145, 145);
			this->btn2->MinimumSize = System::Drawing::Size(145, 145);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(145, 145);
			this->btn2->TabIndex = 37;
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(97, 21);
			this->btn1->MaximumSize = System::Drawing::Size(145, 145);
			this->btn1->MinimumSize = System::Drawing::Size(145, 145);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(145, 145);
			this->btn1->TabIndex = 36;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->button1);
			this->panel6->Controls->Add(this->tx1);
			this->panel6->Controls->Add(this->tx2);
			this->panel6->Location = System::Drawing::Point(722, 9);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(631, 95);
			this->panel6->TabIndex = 16;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(455, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(242, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 26);
			this->label9->TabIndex = 2;
			this->label9->Text = L"O :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(17, 34);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 26);
			this->label8->TabIndex = 2;
			this->label8->Text = L"X :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(455, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tx1
			// 
			this->tx1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->tx1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tx1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx1->Location = System::Drawing::Point(62, 28);
			this->tx1->Multiline = true;
			this->tx1->Name = L"tx1";
			this->tx1->Size = System::Drawing::Size(162, 37);
			this->tx1->TabIndex = 0;
			this->tx1->WordWrap = false;
			this->tx1->TextChanged += gcnew System::EventHandler(this, &MyForm::tx1_TextChanged);
			// 
			// tx2
			// 
			this->tx2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->tx2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tx2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tx2->Location = System::Drawing::Point(287, 28);
			this->tx2->Multiline = true;
			this->tx2->Name = L"tx2";
			this->tx2->Size = System::Drawing::Size(162, 37);
			this->tx2->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1354, 733);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"X,O Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	   Boolean Checker;
	   int plusone;
	   //////////////////
	   void Enable_False()
	   {
		   btn1->Enabled = false;
		   btn2->Enabled = false;
		   btn3->Enabled = false;
		   btn4->Enabled = false;
		   btn5->Enabled = false;
		   btn6->Enabled = false;
		   btn7->Enabled = false;
		   btn8->Enabled = false;
		   btn9->Enabled = false;
	   }

	   void score()
	   {
		   if (btn1->Text == "X" && btn2->Text == "X" && btn3->Text == "X")
		   {
			   btn1->BackColor = System::Drawing::Color::PowderBlue;
			   btn2->BackColor = System::Drawing::Color::PowderBlue;
			   btn3->BackColor = System::Drawing::Color::PowderBlue;
			   MessageBox::Show("The Winner is Player X", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label4->Text);
			   label4->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn1->Text == "X" && btn4->Text == "X" && btn7->Text == "X")
		   {
			   btn1->BackColor = System::Drawing::Color::PowderBlue;
			   btn4->BackColor = System::Drawing::Color::PowderBlue;
			   btn7->BackColor = System::Drawing::Color::PowderBlue;
			   MessageBox::Show("The Winner is Player X", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label4->Text);
			   label4->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn1->Text == "X" && btn5->Text == "X" && btn9->Text == "X")
		   {
			   btn1->BackColor = System::Drawing::Color::PowderBlue;
			   btn5->BackColor = System::Drawing::Color::PowderBlue;
			   btn9->BackColor = System::Drawing::Color::PowderBlue;
			   MessageBox::Show("The Winner is Player X", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label4->Text);
			   label4->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn4->Text == "X" && btn5->Text == "X" && btn6->Text == "X")
		   {
			   btn4->BackColor = System::Drawing::Color::PowderBlue;
			   btn5->BackColor = System::Drawing::Color::PowderBlue;
			   btn6->BackColor = System::Drawing::Color::PowderBlue;
			   MessageBox::Show("The Winner is Player X", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label4->Text);
			   label4->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn7->Text == "X" && btn8->Text == "X" && btn9->Text == "X")
		   {
			   btn7->BackColor = System::Drawing::Color::PowderBlue;
			   btn8->BackColor = System::Drawing::Color::PowderBlue;
			   btn9->BackColor = System::Drawing::Color::PowderBlue;
			   MessageBox::Show("The Winner is Player X", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label4->Text);
			   label4->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn3->Text == "X" && btn5->Text == "X" && btn7->Text == "X")
		   {
			   btn3->BackColor = System::Drawing::Color::PowderBlue;
			   btn5->BackColor = System::Drawing::Color::PowderBlue;
			   btn7->BackColor = System::Drawing::Color::PowderBlue;
			   MessageBox::Show("The Winner is Player X", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label4->Text);
			   label4->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn2->Text == "X" && btn5->Text == "X" && btn8->Text == "X")
		   {
			   btn2->BackColor = System::Drawing::Color::PowderBlue;
			   btn5->BackColor = System::Drawing::Color::PowderBlue;
			   btn8->BackColor = System::Drawing::Color::PowderBlue;
			   MessageBox::Show("The Winner is Player X", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label4->Text);
			   label4->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn3->Text == "X" && btn6->Text == "X" && btn9->Text == "X")
		   {
			   btn3->BackColor = System::Drawing::Color::PowderBlue;
			   btn6->BackColor = System::Drawing::Color::PowderBlue;
			   btn9->BackColor = System::Drawing::Color::PowderBlue;
			   MessageBox::Show("The Winner is Player X", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label4->Text);
			   label4->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }


		   //////////////////////////////////////////////////////////////////////////////////////

		   if (btn1->Text == "O" && btn2->Text == "O" && btn3->Text == "O")
		   {
			   btn1->BackColor = System::Drawing::Color::Red;
			   btn2->BackColor = System::Drawing::Color::Red;
			   btn3->BackColor = System::Drawing::Color::Red;
			   MessageBox::Show("The Winner is Player O", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label5->Text);
			   label5->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn1->Text == "O" && btn4->Text == "O" && btn7->Text == "O")
		   {
			   btn1->BackColor = System::Drawing::Color::Red;
			   btn4->BackColor = System::Drawing::Color::Red;
			   btn7->BackColor = System::Drawing::Color::Red;
			   MessageBox::Show("The Winner is Player O", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label5->Text);
			   label5->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn1->Text == "O" && btn5->Text == "O" && btn9->Text == "O")
		   {
			   btn1->BackColor = System::Drawing::Color::Red;
			   btn5->BackColor = System::Drawing::Color::Red;
			   btn9->BackColor = System::Drawing::Color::Red;
			   MessageBox::Show("The Winner is Player O", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label5->Text);
			   label5->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn4->Text == "O" && btn5->Text == "O" && btn6->Text == "O")
		   {
			   btn4->BackColor = System::Drawing::Color::Red;
			   btn5->BackColor = System::Drawing::Color::Red;
			   btn6->BackColor = System::Drawing::Color::Red;
			   MessageBox::Show("The Winner is Player O", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label5->Text);
			   label5->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn7->Text == "O" && btn8->Text == "O" && btn9->Text == "O")
		   {
			   btn7->BackColor = System::Drawing::Color::Red;
			   btn8->BackColor = System::Drawing::Color::Red;
			   btn9->BackColor = System::Drawing::Color::Red;
			   MessageBox::Show("The Winner is Player O", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label5->Text);
			   label5->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn3->Text == "O" && btn5->Text == "O" && btn7->Text == "O")
		   {
			   btn3->BackColor = System::Drawing::Color::Red;
			   btn5->BackColor = System::Drawing::Color::Red;
			   btn7->BackColor = System::Drawing::Color::Red;
			   MessageBox::Show("The Winner is Player O", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label5->Text);
			   label5->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn2->Text == "O" && btn5->Text == "O" && btn8->Text == "O")
		   {
			   btn2->BackColor = System::Drawing::Color::Red;
			   btn5->BackColor = System::Drawing::Color::Red;
			   btn8->BackColor = System::Drawing::Color::Red;
			   MessageBox::Show("The Winner is Player O", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label5->Text);
			   label5->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

		   if (btn3->Text == "O" && btn6->Text == "O" && btn9->Text == "O")
		   {
			   btn3->BackColor = System::Drawing::Color::Red;
			   btn6->BackColor = System::Drawing::Color::Red;
			   btn9->BackColor = System::Drawing::Color::Red;
			   MessageBox::Show("The Winner is Player O", "X,O Manegment", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   plusone = int::Parse(label5->Text);
			   label5->Text = Convert::ToString(plusone + 1);
			   Enable_False();
		   }

	   }
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false)
	{
		btn1->Text = "X";
		Checker = true;
	}
	else
	{
		btn1->Text = "O";
		Checker = false;
	}
	score();
	btn1->Enabled = false;
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false)
	{
		btn2->Text = "X";
		Checker = true;
	}
	else
	{
		btn2->Text = "O";
		Checker = false;
	}
	score();
	btn2->Enabled = false;
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false)
	{
		btn3->Text = "X";
		Checker = true;
	}
	else
	{
		btn3->Text = "O";
		Checker = false;
	}
	score();
	btn3->Enabled = false;
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false)
	{
		btn4->Text = "X";
		Checker = true;
	}
	else
	{
		btn4->Text = "O";
		Checker = false;
	}
	score();
	btn4->Enabled = false;
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false)
	{
		btn5->Text = "X";
		Checker = true;
	}
	else
	{
		btn5->Text = "O";
		Checker = false;
	}
	score();
	btn5->Enabled = false;
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false)
	{
		btn6->Text = "X";
		Checker =true;
	}
	else
	{
		btn6->Text = "O";
		Checker = false;
	}
	score();
	btn6->Enabled = false;
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false)
	{
		btn7->Text = "X";
		Checker = true;
	}
	else
	{
		btn7->Text = "O";
		Checker = false;
	}
	score();
	btn7->Enabled = false;
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false)
	{
		btn8->Text = "X";
		Checker = true;
	}
	else
	{
		btn8->Text = "O";
		Checker = false;
	}
	score();
	btn8->Enabled = false;
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false)
	{
		btn9->Text = "X";
		Checker = true;
	}
	else
	{
		btn9->Text = "O";
		Checker = false;
	}
	score();
	btn9->Enabled = false;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	btn1->Enabled = true;
	btn2->Enabled = true;
	btn3->Enabled = true;
	btn4->Enabled = true;
	btn5->Enabled = true;
	btn5->Enabled = true;
	btn6->Enabled = true;
	btn7->Enabled = true;
	btn8->Enabled = true;
	btn9->Enabled = true;

	btn1->Text = "";
	btn2->Text = "";
	btn3->Text = "";
	btn4->Text = "";
	btn5->Text = "";
	btn6->Text = "";
	btn7->Text = "";
	btn8->Text = "";
	btn9->Text = "";
	button11->Enabled = true;

	btn1->BackColor = System::Drawing::Color::White;
	btn2->BackColor = System::Drawing::Color::White;
	btn3->BackColor = System::Drawing::Color::White;
	btn4->BackColor = System::Drawing::Color::White;
	btn5->BackColor = System::Drawing::Color::White;
	btn6->BackColor = System::Drawing::Color::White;
	btn7->BackColor = System::Drawing::Color::White;
	btn8->BackColor = System::Drawing::Color::White;
	btn9->BackColor = System::Drawing::Color::White;



}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	btn1->Enabled = true;
	btn2->Enabled = true;
	btn3->Enabled = true;
	btn4->Enabled = true;
	btn5->Enabled = true;
	btn5->Enabled = true;
	btn6->Enabled = true;
	btn7->Enabled = true;
	btn8->Enabled = true;
	btn9->Enabled = true;

	btn1->Text = "";
	btn2->Text = "";
	btn3->Text = "";
	btn4->Text = "";
	btn5->Text = "";
	btn6->Text = "";
	btn7->Text = "";
	btn8->Text = "";
	btn9->Text = "";

	label4->Text = "0";
	label5->Text = "0";


	btn1->BackColor = System::Drawing::Color::White;
	btn2->BackColor = System::Drawing::Color::White;
	btn3->BackColor = System::Drawing::Color::White;
	btn4->BackColor = System::Drawing::Color::White;
	btn5->BackColor = System::Drawing::Color::White;
	btn6->BackColor = System::Drawing::Color::White;
	btn7->BackColor = System::Drawing::Color::White;
	btn8->BackColor = System::Drawing::Color::White;
	btn9->BackColor = System::Drawing::Color::White;
}
private: System::Void tx1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do You Want To Change Name Of XandO", "Submit", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
	{
	label2->Text = tx1->Text;
	label3->Text = tx2->Text;
	}
	else
	{
		label2->Text = "Player: ";
		label3->Text = "Player: ";
	}
	

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->Text = "";
	label3->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ frm1 = gcnew MyForm1;
	frm1->Show();
}
};
}
