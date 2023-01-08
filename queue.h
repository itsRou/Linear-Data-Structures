#pragma once
#include "cq.h"
#include "deque.h"

namespace datas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for queue
	/// </summary>
	public ref class queue : public System::Windows::Forms::Form
	{
	public:
		queue(void)
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
		~queue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ circularq;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(queue::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->circularq = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(4, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(557, 63);
			this->label1->TabIndex = 74;
			this->label1->Text = L"WELCOME TO QUEUES";
			// 
			// circularq
			// 
			this->circularq->BackColor = System::Drawing::Color::DimGray;
			this->circularq->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->circularq->ForeColor = System::Drawing::Color::White;
			this->circularq->Location = System::Drawing::Point(15, 99);
			this->circularq->Margin = System::Windows::Forms::Padding(2);
			this->circularq->Name = L"circularq";
			this->circularq->Size = System::Drawing::Size(407, 79);
			this->circularq->TabIndex = 75;
			this->circularq->Text = L"Circular Queue";
			this->circularq->UseVisualStyleBackColor = false;
			this->circularq->Click += gcnew System::EventHandler(this, &queue::circularq_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(15, 182);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(407, 79);
			this->button1->TabIndex = 76;
			this->button1->Text = L"Doubly Ended Queue ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &queue::button1_Click);
			// 
			// queue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1021, 687);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->circularq);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(1037, 726);
			this->MinimumSize = System::Drawing::Size(1037, 726);
			this->Name = L"queue";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"queue";
			this->Load += gcnew System::EventHandler(this, &queue::queue_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void circularq_Click(System::Object^ sender, System::EventArgs^ e) {
		cq^ form = gcnew cq;
		form->ShowDialog();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	deque^ form = gcnew deque;
	form->ShowDialog();
}
private: System::Void queue_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
