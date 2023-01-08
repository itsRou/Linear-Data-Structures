#pragma once

namespace datas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for doublycircular
	/// </summary>
	public ref class doublycircular : public System::Windows::Forms::Form
	{
	public:
		doublycircular(void)
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
		~doublycircular()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(doublycircular::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(-8, -1);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1162, 64);
			this->label1->TabIndex = 80;
			this->label1->Text = L"WELCOME TO DOUBLY CIRCULAR LINKEDLIST";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Snap ITC", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(58, 63);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(467, 103);
			this->label11->TabIndex = 77;
			this->label11->Text = L"Insertion";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Snap ITC", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(699, 87);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(422, 103);
			this->label9->TabIndex = 76;
			this->label9->Text = L"Deletion";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Maroon;
			this->textBox5->Location = System::Drawing::Point(882, 194);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(81, 61);
			this->textBox5->TabIndex = 75;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &doublycircular::textBox5_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Stencil", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(204, 402);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->MaximumSize = System::Drawing::Size(799, 69);
			this->button1->MinimumSize = System::Drawing::Size(799, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(799, 69);
			this->button1->TabIndex = 73;
			this->button1->Text = L"Display";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &doublycircular::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Maroon;
			this->textBox2->Location = System::Drawing::Point(254, 165);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(81, 61);
			this->textBox2->TabIndex = 81;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &doublycircular::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(76, 234);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(452, 69);
			this->button2->TabIndex = 83;
			this->button2->Text = L"At Beginning";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &doublycircular::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(76, 311);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(452, 69);
			this->button3->TabIndex = 85;
			this->button3->Text = L"At END";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &doublycircular::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(702, 263);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(452, 69);
			this->button4->TabIndex = 86;
			this->button4->Text = L"DELETE";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &doublycircular::button4_Click);
			// 
			// doublycircular
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1211, 496);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1229, 543);
			this->MinimumSize = System::Drawing::Size(1229, 543);
			this->Name = L"doublycircular";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"doublycircular";
			this->Load += gcnew System::EventHandler(this, &doublycircular::doublycircular_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		ref class node {
		public:
			node^ prev;
			int data;
			node^ next;
			node(int value)
			{
				prev = nullptr;
				data = value;
				next = nullptr;
			}
		};
		ref class dcll {
		public:
			node^ head;
			void insert_at_head(int value)
			{
				node^ n = gcnew node(value);
				n->next = head;
				if (head != nullptr) {
					head->prev = n;
				}
				head = n;
			}
			void insert_at_tail(int value){
				if (head == nullptr) {
					insert_at_head(value);
					return;
				}
				node^ n = gcnew node(value);
				node^ temp = head;
				while (temp->next != nullptr) {
					temp = temp->next;
				}
				temp->next = n;
				n->prev = temp;
			}
			void display()
			{
				node^ temp = head;
				System::String^ ins;
				while (temp != nullptr) {
					ins = ins += (" | " + temp->data + " |<==>");
					temp = temp->next;
				}
				ins = (ins + "Return to head");
				MessageBox::Show(ins);
			}

			bool isempty()
			{
				if (head == nullptr)
					return true;
				else
					return false;
			}

			void remove(int valuetoremove)
			{
				node^ movablepointer = head;
				while (movablepointer != nullptr)
				{
					if (valuetoremove == movablepointer->data)
					{
						movablepointer->data = movablepointer->next->data;
						movablepointer->next = movablepointer->next->next;
					}
					movablepointer = movablepointer->next;
				}
			}
		};
		dcll^ mdcll = gcnew dcll();
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void doublycircular_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	mdcll->display();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int val = System::Convert::ToInt32(this->textBox2->Text);
	mdcll->insert_at_head(val);
	MessageBox::Show(val + " INSERTED AT BEGINNING");
}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int val = System::Convert::ToInt32(this->textBox2->Text);
	mdcll->insert_at_tail(val);
	MessageBox::Show(val + " INSERTED AT END");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int dv = System::Convert::ToInt32(this->textBox5->Text);
	mdcll->remove(dv);
	MessageBox::Show(dv + " IS DELETED ");
}
};
}
