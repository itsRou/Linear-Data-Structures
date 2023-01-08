#pragma once

namespace datas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for stack
	/// </summary>
	public ref class stack : public System::Windows::Forms::Form
	{
	public:
		stack(void)
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
		~stack()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ Sort;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(stack::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::BurlyWood;
			this->button2->Location = System::Drawing::Point(-111, 406);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->MaximumSize = System::Drawing::Size(763, 80);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(747, 80);
			this->button2->TabIndex = 35;
			this->button2->Text = L"PEEk";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &stack::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::BurlyWood;
			this->button1->Location = System::Drawing::Point(-111, 318);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->MinimumSize = System::Drawing::Size(607, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(672, 80);
			this->button1->TabIndex = 34;
			this->button1->Text = L"POP";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &stack::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::LightCyan;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Broadway", 34.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::BurlyWood;
			this->textBox3->Location = System::Drawing::Point(0, 238);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(93, 72);
			this->textBox3->TabIndex = 32;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &stack::textBox3_TextChanged);
			// 
			// Sort
			// 
			this->Sort->BackColor = System::Drawing::Color::LightCyan;
			this->Sort->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sort->ForeColor = System::Drawing::Color::BurlyWood;
			this->Sort->Location = System::Drawing::Point(0, 494);
			this->Sort->Margin = System::Windows::Forms::Padding(4);
			this->Sort->MaximumSize = System::Drawing::Size(931, 80);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(724, 80);
			this->Sort->TabIndex = 31;
			this->Sort->Text = L"DISPLAY";
			this->Sort->UseVisualStyleBackColor = false;
			this->Sort->Click += gcnew System::EventHandler(this, &stack::Sort_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(-15, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(854, 95);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Welcome To Stacks";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightCyan;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Broadway", 34.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::BurlyWood;
			this->textBox1->Location = System::Drawing::Point(0, 154);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 72);
			this->textBox1->TabIndex = 36;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &stack::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(739, 149);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(520, 170);
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &stack::pictureBox1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightCyan;
			this->button3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::BurlyWood;
			this->button3->Location = System::Drawing::Point(101, 234);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(389, 76);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Push             ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &stack::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightCyan;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::BurlyWood;
			this->button4->Location = System::Drawing::Point(101, 152);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(333, 74);
			this->button4->TabIndex = 40;
			this->button4->Text = L"Set Size ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &stack::button4_Click);
			// 
			// stack
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1244, 742);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1262, 789);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1262, 789);
			this->Name = L"stack";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"stack";
			this->Load += gcnew System::EventHandler(this, &stack::stack_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		ref class stacks {
		public:
			int size;
			int top;
			int* s = new int[size];
			stacks() {
				top = -1;
				size = 0;
			}
			bool isempty() {
				if (top == -1) {
					return true;
				}
				else {
					return false;
				}
			}

			bool isfull() {
				if (top >= size - 1) {
					return true;
				}
				else {
					return false;
				}
			}

		};
		stacks^ mystack = gcnew stacks();
#pragma endregion

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mystack->isempty()) {
		MessageBox::Show("Already Empty ");

	}
	else {
	MessageBox::Show(mystack->s[mystack->top] + " Popped Successfully ");
	mystack->top--;
	}
}
private: System::Void stack_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}



private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mystack->isempty()) {
			MessageBox::Show("Stack is Empty");

		}
		else {
			MessageBox::Show(" " + mystack->s[mystack->top] + " ");

		}
	}
private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ all=" ";
	for (int i = mystack->top; i >= 0; i--) {
		all = (all + " | " + System::Convert::ToString(mystack->s[i]) + " | " + " \n ");
	}
	MessageBox::Show(all);
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mystack->isfull()) {

		MessageBox::Show("Your stack is Full!!");

	}
	else {
		mystack->top++;
		mystack->s[mystack->top] = System::Convert::ToInt32(this->textBox3->Text);
		MessageBox::Show(mystack->s[mystack->top] + " Pushed Successfully ");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	mystack->size = System::Convert::ToInt32(this->textBox1->Text);
	MessageBox::Show("size is setted to " + this->textBox1->Text);
}
};
}
