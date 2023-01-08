
#pragma once
#include "doubly.h"
#include "circular.h"
#include "doublycircular.h"

namespace datas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for linkedlist
	/// </summary>
	public ref class linkedlist : public System::Windows::Forms::Form
	{
	public:
		linkedlist(void)
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
		~linkedlist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(linkedlist::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Location = System::Drawing::Point(11, 10);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->MaximumSize = System::Drawing::Size(756, 223);
			this->button1->MinimumSize = System::Drawing::Size(756, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(756, 223);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &linkedlist::button1_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(11, 464);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->MaximumSize = System::Drawing::Size(756, 223);
			this->button3->MinimumSize = System::Drawing::Size(756, 223);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(756, 223);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &linkedlist::button3_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(11, 237);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->MaximumSize = System::Drawing::Size(756, 223);
			this->button2->MinimumSize = System::Drawing::Size(756, 223);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(756, 223);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &linkedlist::button2_Click);
			// 
			// linkedlist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(781, 697);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(797, 736);
			this->MinimumSize = System::Drawing::Size(797, 736);
			this->Name = L"linkedlist";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"linkedlist";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		circular^ form = gcnew circular;
		form->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		doubly^ form = gcnew doubly;
		form->ShowDialog();
	}



	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		doublycircular^ form = gcnew doublycircular;
		form->ShowDialog();
	}
};
}
