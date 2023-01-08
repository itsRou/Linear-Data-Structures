#pragma once

namespace datas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for doubly
	/// </summary>
	public ref class doubly : public System::Windows::Forms::Form
	{
	public:
		doubly(void)
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
		~doubly()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;






	private: System::Windows::Forms::TextBox^ textBox3;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(doubly::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Indigo;
			this->button1->Location = System::Drawing::Point(215, 391);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->MaximumSize = System::Drawing::Size(799, 69);
			this->button1->MinimumSize = System::Drawing::Size(799, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(799, 69);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Display";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &doubly::button1_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Snap ITC", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(9, 96);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(333, 103);
			this->label11->TabIndex = 53;
			this->label11->Text = L"Insert";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Snap ITC", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(655, 101);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(339, 103);
			this->label9->TabIndex = 52;
			this->label9->Text = L"Delete";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Indigo;
			this->textBox5->Location = System::Drawing::Point(673, 208);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(81, 61);
			this->textBox5->TabIndex = 51;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &doubly::textBox5_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Indigo;
			this->textBox3->Location = System::Drawing::Point(397, 130);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(81, 61);
			this->textBox3->TabIndex = 44;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &doubly::textBox3_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Stencil", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Indigo;
			this->button2->Location = System::Drawing::Point(673, 284);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->MaximumSize = System::Drawing::Size(448, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(249, 64);
			this->button2->TabIndex = 58;
			this->button2->Text = L" Head";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &doubly::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Stencil", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Indigo;
			this->button3->Location = System::Drawing::Point(931, 284);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->MaximumSize = System::Drawing::Size(448, 64);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(249, 64);
			this->button3->TabIndex = 59;
			this->button3->Text = L"Tail";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &doubly::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(37, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1100, 80);
			this->label1->TabIndex = 73;
			this->label1->Text = L"WELCOME TO DOUBLY LINKEDLIST";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Indigo;
			this->button4->Location = System::Drawing::Point(28, 204);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(335, 70);
			this->button4->TabIndex = 74;
			this->button4->Text = L"AT HEAD";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &doubly::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Indigo;
			this->button5->Location = System::Drawing::Point(28, 282);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(335, 73);
			this->button5->TabIndex = 75;
			this->button5->Text = L"AT TAIL";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &doubly::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Indigo;
			this->button6->Location = System::Drawing::Point(774, 201);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(335, 68);
			this->button6->TabIndex = 76;
			this->button6->Text = L"Enter";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &doubly::button6_Click);
			// 
			// doubly
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1211, 496);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1229, 543);
			this->MinimumSize = System::Drawing::Size(1229, 543);
			this->Name = L"doubly";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"doubly";
			this->Load += gcnew System::EventHandler(this, &doubly::doubly_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		// C++ program for the above approach

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
		ref class dll {
		public :
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

			void insert_at_tail(int value)
			{

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
				ins = (ins + "NULL");
				MessageBox::Show(ins);
			}
			void removelast()
			{
				node^ movablepointer = head;
				while (movablepointer->next->next != nullptr)
				{
					movablepointer = movablepointer->next;
				}
				movablepointer->next = nullptr;
			}
			void removefirst()
			{
				node^ movablepointer = head;
				movablepointer->data = movablepointer->next->data;
				movablepointer->next = movablepointer->next->next;
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
dll^ myd = gcnew dll;
#pragma endregion
	private: System::Void doubly_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

}

private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	myd->display();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	myd->removefirst();
	MessageBox::Show("HEAD IS DELETED");

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	myd->removelast();
	MessageBox::Show("TAIL IS DELETED");

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int val = System::Convert::ToInt32(this->textBox3->Text);
	myd->insert_at_head(val);
	MessageBox::Show("INSERTED AT HEAD");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int val = System::Convert::ToInt32(this->textBox3->Text);
	myd->insert_at_tail(val);
	MessageBox::Show("INSERTED AT TAIL");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int val = System::Convert::ToInt32(this->textBox5->Text);
	myd->remove(val);
	MessageBox::Show(val + " IS DELETED");

}
};
}
