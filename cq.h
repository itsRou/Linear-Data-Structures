#pragma once

namespace datas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cq
	/// </summary>
	public ref class cq : public System::Windows::Forms::Form
	{
	public:
		cq(void)
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
		~cq()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ DEQUE;
	private: System::Windows::Forms::Button^ dISPLAY;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(cq::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->DEQUE = (gcnew System::Windows::Forms::Button());
			this->dISPLAY = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Location = System::Drawing::Point(-8, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1039, 80);
			this->label1->TabIndex = 75;
			this->label1->Text = L"WELCOME TO CIRCULAR QUEUES";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(683, 92);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->MaximumSize = System::Drawing::Size(392, 345);
			this->pictureBox1->MinimumSize = System::Drawing::Size(392, 345);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(392, 345);
			this->pictureBox1->TabIndex = 76;
			this->pictureBox1->TabStop = false;
			// 
			// DEQUE
			// 
			this->DEQUE->BackColor = System::Drawing::Color::CornflowerBlue;
			this->DEQUE->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DEQUE->ForeColor = System::Drawing::Color::White;
			this->DEQUE->Location = System::Drawing::Point(29, 247);
			this->DEQUE->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->DEQUE->Name = L"DEQUE";
			this->DEQUE->Size = System::Drawing::Size(488, 84);
			this->DEQUE->TabIndex = 78;
			this->DEQUE->Text = L"DEQUEUE";
			this->DEQUE->UseVisualStyleBackColor = false;
			this->DEQUE->Click += gcnew System::EventHandler(this, &cq::DEQUE_Click);
			// 
			// dISPLAY
			// 
			this->dISPLAY->BackColor = System::Drawing::Color::CornflowerBlue;
			this->dISPLAY->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dISPLAY->ForeColor = System::Drawing::Color::White;
			this->dISPLAY->Location = System::Drawing::Point(29, 353);
			this->dISPLAY->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dISPLAY->Name = L"dISPLAY";
			this->dISPLAY->Size = System::Drawing::Size(488, 84);
			this->dISPLAY->TabIndex = 79;
			this->dISPLAY->Text = L"DISPLAY";
			this->dISPLAY->UseVisualStyleBackColor = false;
			this->dISPLAY->Click += gcnew System::EventHandler(this, &cq::dISPLAY_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(38, 153);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 86);
			this->textBox1->TabIndex = 80;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &cq::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(139, 153);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(381, 84);
			this->button1->TabIndex = 82;
			this->button1->Text = L"EnQUEUE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &cq::button1_Click);
			// 
			// cq
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1088, 473);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dISPLAY);
			this->Controls->Add(this->DEQUE);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximumSize = System::Drawing::Size(1106, 520);
			this->MinimumSize = System::Drawing::Size(1106, 520);
			this->Name = L"cq";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"cq";
			this->Load += gcnew System::EventHandler(this, &cq::cq_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		ref class node {
		public:
			int data;
			node^ next;
		};
		ref class CircularQueue {
		private:
			node^ front;
			node^ rear;
		public:
			CircularQueue() {
				front = nullptr;
				rear = nullptr;
			}
			void enqueue(int val) {
				node^ temp = gcnew node();
				temp->data = val;
				temp->next = front;
				if (IsEmpty()) {
					front = rear = temp;
				}
				rear->next = temp;
				rear = temp;
			}
			void dequeue() {
				if (IsEmpty())
				{
					return;
				}
				if (front->next == front)
				{
					front = rear = nullptr;
				}
				node^ temp = front;
				rear->next = front->next;
				front = front->next;
				temp = nullptr;
			}

			bool IsEmpty() {
				return front == nullptr;
			}
			System::String^ display() {
				if (IsEmpty())
				{
					return "[ ]\n";
				}
				System::String^ s=("");
				node^ i = front;
				while (i->next != front) {
					s=(s+" | " + i->data + " | --->");
					i = i->next;
				}
				s = (s + " | " + i->data + " | --->" + " End of our Circle");
				return s;
			}
		};
		CircularQueue^ mq = gcnew CircularQueue();
#pragma endregion
	private: System::Void cq_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}

	private: System::Void DEQUE_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mq->IsEmpty())
		{
			MessageBox::Show("Already Empty");
		}
		else {
		mq->dequeue();
		MessageBox::Show("DEQUEUED");

	}
}

private: System::Void dISPLAY_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(mq->display());
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	mq->enqueue(System::Convert::ToInt32(this->textBox1->Text));
	MessageBox::Show("ENQUEUED");
}
};
}
