#pragma once
namespace datas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Arrays
	/// </summary>
	public ref class Arrays : public System::Windows::Forms::Form
	{
	public:
		Arrays(void)
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
		~Arrays()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ Arrayspic;


	private: System::Windows::Forms::Button^ Sort;






	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Arrays::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Arrayspic = (gcnew System::Windows::Forms::PictureBox());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Arrayspic))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(-1, -2);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(780, 86);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome To Arrays";
			// 
			// Arrayspic
			// 
			this->Arrayspic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Arrayspic.Image")));
			this->Arrayspic->Location = System::Drawing::Point(833, 15);
			this->Arrayspic->Margin = System::Windows::Forms::Padding(4);
			this->Arrayspic->MaximumSize = System::Drawing::Size(513, 122);
			this->Arrayspic->MinimumSize = System::Drawing::Size(513, 122);
			this->Arrayspic->Name = L"Arrayspic";
			this->Arrayspic->Size = System::Drawing::Size(513, 122);
			this->Arrayspic->TabIndex = 1;
			this->Arrayspic->TabStop = false;
			// 
			// Sort
			// 
			this->Sort->BackColor = System::Drawing::Color::White;
			this->Sort->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sort->ForeColor = System::Drawing::Color::Teal;
			this->Sort->Location = System::Drawing::Point(740, 513);
			this->Sort->Margin = System::Windows::Forms::Padding(4);
			this->Sort->MaximumSize = System::Drawing::Size(607, 80);
			this->Sort->MinimumSize = System::Drawing::Size(607, 80);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(607, 80);
			this->Sort->TabIndex = 6;
			this->Sort->Text = L"SORT";
			this->Sort->UseVisualStyleBackColor = false;
			this->Sort->Click += gcnew System::EventHandler(this, &Arrays::Sort_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Teal;
			this->button6->Location = System::Drawing::Point(740, 635);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->MaximumSize = System::Drawing::Size(607, 80);
			this->button6->MinimumSize = System::Drawing::Size(607, 80);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(607, 80);
			this->button6->TabIndex = 8;
			this->button6->Text = L"DISPLAY";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Arrays::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::MintCream;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Location = System::Drawing::Point(273, 88);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 61);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Arrays::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::MintCream;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Location = System::Drawing::Point(269, 281);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(81, 61);
			this->textBox2->TabIndex = 16;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Arrays::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Stencil", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkCyan;
			this->label3->Location = System::Drawing::Point(-8, 216);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(265, 56);
			this->label3->TabIndex = 15;
			this->label3->Text = L" at index ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Stencil", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkCyan;
			this->label4->Location = System::Drawing::Point(4, 272);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(256, 56);
			this->label4->TabIndex = 14;
			this->label4->Text = L"value of ";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::MintCream;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->Location = System::Drawing::Point(269, 212);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(81, 61);
			this->textBox3->TabIndex = 13;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Arrays::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Stencil", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkCyan;
			this->label5->Location = System::Drawing::Point(5, 413);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 56);
			this->label5->TabIndex = 19;
			this->label5->Text = L" index ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Stencil", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkCyan;
			this->label6->Location = System::Drawing::Point(16, 469);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(171, 56);
			this->label6->TabIndex = 18;
			this->label6->Text = L"value";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::MintCream;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox4->Location = System::Drawing::Point(258, 406);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(81, 61);
			this->textBox4->TabIndex = 17;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Arrays::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::MintCream;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox5->Location = System::Drawing::Point(258, 475);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(81, 61);
			this->textBox5->TabIndex = 20;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Arrays::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::MintCream;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox6->Location = System::Drawing::Point(258, 668);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(81, 61);
			this->textBox6->TabIndex = 24;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Arrays::textBox6_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Stencil", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkCyan;
			this->label7->Location = System::Drawing::Point(1, 602);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(197, 56);
			this->label7->TabIndex = 23;
			this->label7->Text = L" value ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Stencil", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkCyan;
			this->label8->Location = System::Drawing::Point(17, 668);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(162, 56);
			this->label8->TabIndex = 22;
			this->label8->Text = L"With ";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::MintCream;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox7->Location = System::Drawing::Point(258, 603);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(81, 61);
			this->textBox7->TabIndex = 21;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Arrays::textBox7_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cooper Black", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label9->Location = System::Drawing::Point(5, 360);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(227, 54);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Deletion";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cooper Black", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label10->Location = System::Drawing::Point(2, 548);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(333, 54);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Replacement";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cooper Black", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label11->Location = System::Drawing::Point(5, 150);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(245, 54);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Insertion";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Teal;
			this->button1->Location = System::Drawing::Point(740, 272);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->MaximumSize = System::Drawing::Size(607, 80);
			this->button1->MinimumSize = System::Drawing::Size(607, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(607, 80);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Maximum";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Arrays::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Teal;
			this->button2->Location = System::Drawing::Point(740, 389);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->MaximumSize = System::Drawing::Size(607, 80);
			this->button2->MinimumSize = System::Drawing::Size(607, 80);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(607, 80);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Minimum";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Arrays::button2_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cooper Black", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label12->Location = System::Drawing::Point(16, 722);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(208, 54);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Enlarge";
			this->label12->Click += gcnew System::EventHandler(this, &Arrays::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Stencil", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::DarkCyan;
			this->label13->Location = System::Drawing::Point(9, 774);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(213, 56);
			this->label13->TabIndex = 31;
			this->label13->Text = L" Size by";
			this->label13->Click += gcnew System::EventHandler(this, &Arrays::label13_Click);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::MintCream;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox8->Location = System::Drawing::Point(265, 760);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(81, 61);
			this->textBox8->TabIndex = 30;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Arrays::textBox8_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Cooper Black", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label15->Location = System::Drawing::Point(16, 847);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(198, 54);
			this->label15->TabIndex = 38;
			this->label15->Text = L"Update";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::DarkCyan;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(549, 964);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(81, 61);
			this->textBox9->TabIndex = 37;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Arrays::textBox9_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Stencil", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::DarkCyan;
			this->label16->Location = System::Drawing::Point(16, 898);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(399, 56);
			this->label16->TabIndex = 36;
			this->label16->Text = L"value at index";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Stencil", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::DarkCyan;
			this->label17->Location = System::Drawing::Point(16, 953);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(309, 56);
			this->label17->TabIndex = 35;
			this->label17->Text = L"With Value";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::MintCream;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox10->Location = System::Drawing::Point(548, 891);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(81, 61);
			this->textBox10->TabIndex = 34;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Arrays::textBox10_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Teal;
			this->button3->Location = System::Drawing::Point(365, 93);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->MaximumSize = System::Drawing::Size(607, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 44);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Set Size";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Arrays::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Teal;
			this->button4->Location = System::Drawing::Point(371, 240);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->MaximumSize = System::Drawing::Size(607, 80);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 46);
			this->button4->TabIndex = 40;
			this->button4->Text = L"INSERT";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Arrays::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Teal;
			this->button5->Location = System::Drawing::Point(371, 412);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->MaximumSize = System::Drawing::Size(607, 80);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 46);
			this->button5->TabIndex = 41;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Arrays::button5_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Teal;
			this->button7->Location = System::Drawing::Point(371, 482);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->MaximumSize = System::Drawing::Size(607, 80);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(186, 46);
			this->button7->TabIndex = 42;
			this->button7->Text = L"Delete";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Arrays::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Teal;
			this->button8->Location = System::Drawing::Point(365, 635);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->MaximumSize = System::Drawing::Size(607, 80);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(186, 46);
			this->button8->TabIndex = 43;
			this->button8->Text = L"Replace";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Arrays::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Teal;
			this->button9->Location = System::Drawing::Point(365, 774);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->MaximumSize = System::Drawing::Size(607, 80);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(186, 46);
			this->button9->TabIndex = 44;
			this->button9->Text = L"Enter";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Arrays::button9_Click);
			// 
			// Arrays
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1359, 846);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Arrayspic);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1377, 1075);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1377, 861);
			this->Name = L"Arrays";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Arrays";
			this->Load += gcnew System::EventHandler(this, &Arrays::Arrays_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Arrayspic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		ref class Array {
		public:
			int size;
			int length;
			int* ptr;
			Array() {
				size = 0;
				length = 0;
				ptr = new int[size];
			}
			bool isempty() {
				return length == 0;
			}
			bool isfull() {
				return length >= size;
			}
			bool search(int val) {
				for (int i = 0; i < size; i++) {
					if (ptr[i] == val) {
						return true;
					}
				}
			}
		};
#pragma endregion\

		Array^ myarray = gcnew Array();
		int index;
	private: System::Void Arrays_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) {
		int key, i, j;
		for (i = 0; i < myarray->length; i++)
		{
			key = myarray->ptr[i];
			j = i - 1;
			while (j >= 0 && myarray->ptr[j] > key)
			{
				myarray->ptr[j + 1] = myarray->ptr[j];
				j = j - 1;
			}
			myarray->ptr[j + 1] = key;
		}
		MessageBox::Show("SORTED");

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (myarray->isempty()) {
			MessageBox::Show("Array is Empty");

		}
		else {
			System::String^ ins= (" | " + 0 + " | " );
			for (int k = 1; k < myarray->length; k++) {
				 ins=(ins+ System::Convert::ToString(k) + " | " );
			}
			System::String^ vls = ("Index ---> " + ins  + "\n" + "Value ---> " + " | " +
				System::Convert::ToString(myarray->ptr[0]));
			System::String^ all;
			for (int i = 1; i < myarray->length; i++) {
				all = System::Convert::ToString(myarray->ptr[i]);
				vls = (vls + " | " + all );
			}

			MessageBox::Show(vls+ " | ");
		}
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		

	}
		   int valuee; int newvaluee;
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			  
		   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int max = myarray->ptr[0];
		for (int i = 0; i < myarray->length; i++) {
			if (myarray->ptr[i] > max) {
				max = myarray->ptr[i];
			}
		}
		MessageBox::Show("Maximum Value in Your Array is : " + max);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int Min = myarray->ptr[0];
	for (int i = 0; i < myarray->length; i++) {
		if (myarray->ptr[i] < Min) {
			Min = myarray->ptr[i];
		}
	}
	MessageBox::Show("Min Value in Your Array is : " + Min);
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

}
	   int ui;
	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int ni= System::Convert::ToInt32(this->textBox10->Text);;
		if (ni > myarray->size) {
			MessageBox::Show("invalid index try another");
		}
		else {
			ui = ni;
		}
	}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int pv = myarray->ptr[ui];
	myarray->ptr[ui]= System::Convert::ToInt32(this->textBox9->Text);
	MessageBox::Show("Index " + ui + " Value is Successfully Updated from " + pv + " to " + myarray->ptr[ui]);

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	myarray->size = System::Convert::ToInt32(this->textBox1->Text);
	MessageBox::Show("size is setted to " + this->textBox1->Text);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int iv = System::Convert::ToInt32(this->textBox3->Text);
	if (myarray->isfull()) {
		MessageBox::Show("Already Full");

	}
	else if (iv > myarray->size) {
		MessageBox::Show("invalid index try another");
	}
	else {
		index = iv;
		myarray->ptr[index] = System::Convert::ToInt32(this->textBox2->Text);
		myarray->length++;
		MessageBox::Show(" inserted at index " + index + " the value :  " + myarray->ptr[index]);

	}
}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (myarray->isempty()) {
			MessageBox::Show("Already Empty");

		}
		else {
			index = System::Convert::ToInt32(this->textBox4->Text);
			if (index >= 0) {
				for (int i = index; i < myarray->length - 1; i++) {
					myarray->ptr[i] = myarray->ptr[i + 1];
				}
				myarray->length--;
				MessageBox::Show("index " + index + " is Deleted successfully");
			}
			else {
				MessageBox::Show("INVALID!!!");
			}
		}
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = System::Convert::ToInt32(this->textBox5->Text);
	if (myarray->isempty()) {
		MessageBox::Show("Already Empty");

	}
	if (myarray->search(value)) {
		for (int i = 0; i < myarray->length; i++) {
			if (myarray->search(value)) {
				for (int i = 0; i < myarray->length; i++) {

					if (myarray->ptr[i] == value)
					{

						for (int j = i; j < myarray->length - 1; j++)
						{
							myarray->ptr[j] = myarray->ptr[j + 1];
						}
						MessageBox::Show("The " + value + " at index " + i + " is Deleted Successfully");
						myarray->length--;

					}
				}
			}
		}
	}
	else {
		MessageBox::Show("Value Not Found");

	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	valuee = System::Convert::ToInt32(this->textBox7->Text);
	newvaluee = System::Convert::ToInt32(this->textBox6->Text);
	for (int i = 0; i < myarray->size; i++) {
		if (myarray->ptr[i] == valuee) {
			myarray->ptr[i] = newvaluee;
		}
	}
	MessageBox::Show(" Value is Successfully Updated from " + valuee + " to " + newvaluee);

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int newextra = System::Convert::ToInt32(this->textBox8->Text);
	myarray->size = myarray->size + newextra;
	int pastsize = myarray->size - newextra;
	MessageBox::Show("Successfully Enlarged from " + pastsize + " to " + myarray->size);
}
};
}
