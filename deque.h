#pragma once

namespace datas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for deque
	/// </summary>
	public ref class deque : public System::Windows::Forms::Form
	{
	public:
		deque(void)
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
		~deque()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ dISPLAY;
	private: System::Windows::Forms::Button^ frontdeq;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ backdeq;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(deque::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dISPLAY = (gcnew System::Windows::Forms::Button());
			this->frontdeq = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backdeq = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 42.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(93, 206);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(64, 78);
			this->textBox1->TabIndex = 86;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &deque::textBox1_TextChanged);
			// 
			// dISPLAY
			// 
			this->dISPLAY->BackColor = System::Drawing::Color::CornflowerBlue;
			this->dISPLAY->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dISPLAY->ForeColor = System::Drawing::Color::White;
			this->dISPLAY->Location = System::Drawing::Point(12, 376);
			this->dISPLAY->Name = L"dISPLAY";
			this->dISPLAY->Size = System::Drawing::Size(854, 72);
			this->dISPLAY->TabIndex = 85;
			this->dISPLAY->Text = L"DISPLAY";
			this->dISPLAY->UseVisualStyleBackColor = false;
			this->dISPLAY->Click += gcnew System::EventHandler(this, &deque::dISPLAY_Click);
			// 
			// frontdeq
			// 
			this->frontdeq->BackColor = System::Drawing::Color::CornflowerBlue;
			this->frontdeq->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->frontdeq->ForeColor = System::Drawing::Color::White;
			this->frontdeq->Location = System::Drawing::Point(53, 291);
			this->frontdeq->Name = L"frontdeq";
			this->frontdeq->Size = System::Drawing::Size(384, 79);
			this->frontdeq->TabIndex = 84;
			this->frontdeq->Text = L"DEQUEUE Front";
			this->frontdeq->UseVisualStyleBackColor = false;
			this->frontdeq->Click += gcnew System::EventHandler(this, &deque::frontdeq_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(57, 87);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(770, 88);
			this->pictureBox1->TabIndex = 83;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 33.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(831, 53);
			this->label1->TabIndex = 82;
			this->label1->Text = L"WELCOME TO DOUBLY ENDED QUEUES";
			// 
			// backdeq
			// 
			this->backdeq->BackColor = System::Drawing::Color::CornflowerBlue;
			this->backdeq->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backdeq->ForeColor = System::Drawing::Color::White;
			this->backdeq->Location = System::Drawing::Point(443, 291);
			this->backdeq->Name = L"backdeq";
			this->backdeq->Size = System::Drawing::Size(384, 79);
			this->backdeq->TabIndex = 88;
			this->backdeq->Text = L"DEQUEUE Back";
			this->backdeq->UseVisualStyleBackColor = false;
			this->backdeq->Click += gcnew System::EventHandler(this, &deque::backdeq_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(163, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(274, 79);
			this->button1->TabIndex = 89;
			this->button1->Text = L"enQUEUE Front";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &deque::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(443, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(274, 79);
			this->button2->TabIndex = 90;
			this->button2->Text = L"EnQUEUE Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &deque::button2_Click);
			// 
			// deque
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(878, 460);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->backdeq);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dISPLAY);
			this->Controls->Add(this->frontdeq);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(894, 499);
			this->MinimumSize = System::Drawing::Size(894, 499);
			this->Name = L"deque";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"deque";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		ref class node {
		public:
			int data;
			node^ next;
			node^ pre;
		};
		ref class DoubleCircularQueue 
		{
		public:
			node^ front;
			node^ rear;
			DoubleCircularQueue() {
				front = nullptr;
				rear = nullptr;
			}
			void enqueue_back(int val) {
				node^ temp = gcnew node();
				temp->data = val;
				temp->next = nullptr;
				temp->pre = nullptr;
				if (isEmpty())
				{
					front = rear = temp;
				}
				temp->pre = rear;
				rear->next = temp;
				rear = temp;
			}
			void enqueue_front(int val) {
				node^ temp = gcnew node();
				temp->data = val;
				temp->next = nullptr;
				temp->pre = nullptr;
				if (isEmpty())
				{
					front = rear = temp;
				}
				temp->next = front;
				front->pre = temp;
				front = temp;
			}
			void dequeue_front() {
				if (isEmpty())
				{
					return;
				}
				if (front->next == nullptr)
				{
					front = rear = nullptr;
				}
				node^ temp = front;
				front = front->next;
				front->pre = nullptr;
				temp = nullptr;
			}
			void dequeue_back() {
				if (isEmpty())
				{
					return;
				}
				if (front->next == nullptr)
				{
					front = rear = nullptr;
				}
				node^ temp = rear;
				rear = rear->pre;
				rear->next = nullptr;
				temp=nullptr;

			}
			bool isEmpty() {
				return front == nullptr;
			}
			System::String^ display()
			{
				System::String^ s = "Front <--";
				node^ i = front;
				while (i->next != nullptr) {
					s = (s + " | " + i->data + " |-->");			
					i = i->next;
				}
				s = (s + " | " + i->data + " | --> End");
				return s;
			}
		};
#pragma endregion

		DoubleCircularQueue^ mq = gcnew DoubleCircularQueue;
		

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = System::Convert::ToInt32(this->textBox1->Text);
	mq->enqueue_front(value);
	MessageBox::Show("ENQUEUED AT FRONT");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = System::Convert::ToInt32(this->textBox1->Text);
	mq->enqueue_back(value);
	MessageBox::Show("ENQUEUED AT END");
}
	private: System::Void backdeq_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mq->isEmpty())
		{
			MessageBox::Show("Already Empty");
		}
		else {
			mq->dequeue_back();
			MessageBox::Show("DEQUEUED");

		}
	}
private: System::Void frontdeq_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mq->isEmpty())
	{
		MessageBox::Show("Already Empty");
	}
	else {
		mq->dequeue_front();
		MessageBox::Show("DEQUEUED");

	}
}
private: System::Void dISPLAY_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mq->isEmpty())
	{
		MessageBox::Show("Already Empty");
	}
	else {
		MessageBox::Show(mq->display());
	}
}
};
}
