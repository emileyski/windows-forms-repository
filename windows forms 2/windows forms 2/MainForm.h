#pragma once
#include "RegPanel.h"

namespace windowsforms2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ lbMessage;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	protected:

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
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->lbMessage = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(1, 43);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(451, 22);
			this->tbName->TabIndex = 0;
			// 
			// lbMessage
			// 
			this->lbMessage->AutoSize = true;
			this->lbMessage->Location = System::Drawing::Point(-2, 98);
			this->lbMessage->Name = L"lbMessage";
			this->lbMessage->Size = System::Drawing::Size(0, 16);
			this->lbMessage->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(111, 166);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 350);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbMessage);
			this->Controls->Add(this->tbName);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->tbName->Text;
		this->lbMessage->Text = "Hello " + name + " bydlo yebane";
		windowsforms2::RegPanel form;
		Application::Run(% form);
	}
	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbMessage->Text = "";
		this->tbName->Text = "";
	}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->lbMessage->Text = "";
}
	   
};
}
