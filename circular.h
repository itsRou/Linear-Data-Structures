#pragma once

namespace datas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for circular
	/// </summary>
	public ref class circular : public System::Windows::Forms::Form
	{
	public:
		circular(void)
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
		~circular()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(circular::typeid));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Snap ITC", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(9, 123);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(467, 103);
			this->label11->TabIndex = 65;
			this->label11->Text = L"Insertion";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Snap ITC", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(728, 123);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(422, 103);
			this->label9->TabIndex = 64;
			this->label9->Text = L"Deletion";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::MidnightBlue;
			this->textBox5->Location = System::Drawing::Point(746, 225);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(81, 61);
			this->textBox5->TabIndex = 63;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &circular::textBox5_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->textBox3->Location = System::Drawing::Point(27, 230);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(81, 61);
			this->textBox3->TabIndex = 61;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &circular::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button1->Location = System::Drawing::Point(235, 357);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->MaximumSize = System::Drawing::Size(799, 69);
			this->button1->MinimumSize = System::Drawing::Size(799, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(799, 69);
			this->button1->TabIndex = 60;
			this->button1->Text = L"Display";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &circular::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(-12, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1170, 80);
			this->label1->TabIndex = 72;
			this->label1->Text = L"WELCOME TO CIRCULAR LINKEDLIST";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button2->Location = System::Drawing::Point(116, 225);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(332, 69);
			this->button2->TabIndex = 73;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &circular::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button3->Location = System::Drawing::Point(835, 220);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(314, 69);
			this->button3->TabIndex = 74;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &circular::button3_Click);
			// 
			// circular
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1211, 496);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1229, 543);
			this->MinimumSize = System::Drawing::Size(1229, 543);
			this->Name = L"circular";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"circular";
			this->Load += gcnew System::EventHandler(this, &circular::circular_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		ref class Node {
		public:
			int data;
			 Node^ next;
		};
		ref class cll {
		public:
			Node^ head = nullptr;
			void insert(int newdata) {

				Node^ newnode=gcnew Node;
				Node^ ptr = head;
				newnode->data = newdata;
				newnode->next = head;
				if (head != nullptr) {
					while (ptr->next != head)
						ptr = ptr->next;
					ptr->next = newnode;
				}
				else
					newnode->next = newnode;
				head = newnode;
			}

			void display() {
				Node^ ptr;
				ptr = head;
				System::String^ ins;
				do {
					ins = ins += (" | " + ptr->data + " |--->");
					ptr = ptr->next;
				} while (ptr != head);
				ins = (ins +"RETURN TO HEAD");
				MessageBox::Show(ins);
			}
			void remove(int valuetoremove)
			{
				Node^ movablepointer = head;
				do
				{
					if (valuetoremove == movablepointer->data)
					{
						movablepointer->data = movablepointer->next->data;
						movablepointer->next = movablepointer->next->next;
					}
					movablepointer = movablepointer->next;
				} while (movablepointer != head);
			}
		};
		cll^ mycll = gcnew cll();
#pragma endregion
	private: System::Void circular_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	mycll->display();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int val = System::Convert::ToInt32(this->textBox3->Text);
	mycll->insert(val);
	MessageBox::Show(val + " IS INSERTED");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int val = System::Convert::ToInt32(this->textBox5->Text);
	mycll->remove(val);
	MessageBox::Show(val + " IS DELETED");
}
};
}
