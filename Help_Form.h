#pragma once

namespace Leaf_Classification {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Help_Form
	/// </summary>
	public ref class Help_Form : public System::Windows::Forms::Form
	{
	public:
		Help_Form(void)
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
		~Help_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Capture_button;
	private: System::Windows::Forms::Button^  Close;
	private: System::Windows::Forms::Button^  Help;
	private: System::Windows::Forms::Button^  Home_Button;
	private: System::Windows::Forms::Button^  Details_button;
	private: System::Windows::Forms::Button^  Result_button;
	private: System::Windows::Forms::Button^  Identify_button;
	private: System::Windows::Forms::Button^  Browse_button;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Help_Form::typeid));
			this->Capture_button = (gcnew System::Windows::Forms::Button());
			this->Close = (gcnew System::Windows::Forms::Button());
			this->Help = (gcnew System::Windows::Forms::Button());
			this->Home_Button = (gcnew System::Windows::Forms::Button());
			this->Details_button = (gcnew System::Windows::Forms::Button());
			this->Result_button = (gcnew System::Windows::Forms::Button());
			this->Identify_button = (gcnew System::Windows::Forms::Button());
			this->Browse_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// Capture_button
			// 
			this->Capture_button->FlatAppearance->BorderSize = 0;
			this->Capture_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Capture_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Capture_button->ForeColor = System::Drawing::Color::White;
			this->Capture_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Capture_button.Image")));
			this->Capture_button->Location = System::Drawing::Point(12, 164);
			this->Capture_button->Name = L"Capture_button";
			this->Capture_button->Size = System::Drawing::Size(32, 32);
			this->Capture_button->TabIndex = 2;
			this->Capture_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Capture_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Capture_button->UseVisualStyleBackColor = true;
			// 
			// Close
			// 
			this->Close->FlatAppearance->BorderSize = 0;
			this->Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Close->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Close.Image")));
			this->Close->Location = System::Drawing::Point(12, 109);
			this->Close->Name = L"Close";
			this->Close->Size = System::Drawing::Size(32, 30);
			this->Close->TabIndex = 3;
			this->Close->UseVisualStyleBackColor = true;
			// 
			// Help
			// 
			this->Help->FlatAppearance->BorderSize = 0;
			this->Help->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Help->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Help.Image")));
			this->Help->Location = System::Drawing::Point(12, 61);
			this->Help->Name = L"Help";
			this->Help->Size = System::Drawing::Size(32, 32);
			this->Help->TabIndex = 4;
			this->Help->UseVisualStyleBackColor = true;
			// 
			// Home_Button
			// 
			this->Home_Button->FlatAppearance->BorderSize = 0;
			this->Home_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Home_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Home_Button.Image")));
			this->Home_Button->Location = System::Drawing::Point(12, 12);
			this->Home_Button->Name = L"Home_Button";
			this->Home_Button->Size = System::Drawing::Size(32, 32);
			this->Home_Button->TabIndex = 5;
			this->Home_Button->UseVisualStyleBackColor = true;
			// 
			// Details_button
			// 
			this->Details_button->FlatAppearance->BorderSize = 0;
			this->Details_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Details_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Details_button->ForeColor = System::Drawing::Color::White;
			this->Details_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Details_button.Image")));
			this->Details_button->Location = System::Drawing::Point(12, 364);
			this->Details_button->Name = L"Details_button";
			this->Details_button->Size = System::Drawing::Size(32, 32);
			this->Details_button->TabIndex = 9;
			this->Details_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Details_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Details_button->UseVisualStyleBackColor = true;
			// 
			// Result_button
			// 
			this->Result_button->FlatAppearance->BorderSize = 0;
			this->Result_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Result_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Result_button->ForeColor = System::Drawing::Color::White;
			this->Result_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Result_button.Image")));
			this->Result_button->Location = System::Drawing::Point(12, 314);
			this->Result_button->Name = L"Result_button";
			this->Result_button->Size = System::Drawing::Size(32, 32);
			this->Result_button->TabIndex = 8;
			this->Result_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Result_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Result_button->UseVisualStyleBackColor = true;
			// 
			// Identify_button
			// 
			this->Identify_button->FlatAppearance->BorderSize = 0;
			this->Identify_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Identify_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Identify_button->ForeColor = System::Drawing::Color::White;
			this->Identify_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Identify_button.Image")));
			this->Identify_button->Location = System::Drawing::Point(12, 266);
			this->Identify_button->Name = L"Identify_button";
			this->Identify_button->Size = System::Drawing::Size(32, 32);
			this->Identify_button->TabIndex = 7;
			this->Identify_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Identify_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Identify_button->UseVisualStyleBackColor = true;
			// 
			// Browse_button
			// 
			this->Browse_button->FlatAppearance->BorderSize = 0;
			this->Browse_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Browse_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Browse_button->ForeColor = System::Drawing::Color::White;
			this->Browse_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Browse_button.Image")));
			this->Browse_button->Location = System::Drawing::Point(12, 213);
			this->Browse_button->Name = L"Browse_button";
			this->Browse_button->Size = System::Drawing::Size(32, 32);
			this->Browse_button->TabIndex = 6;
			this->Browse_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Browse_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Browse_button->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(83, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Home Button";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Location = System::Drawing::Point(83, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Help Button";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label3->Location = System::Drawing::Point(83, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Closes the form";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Location = System::Drawing::Point(83, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Capture leaf image";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label5->Location = System::Drawing::Point(83, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Browse image in computer";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label6->Location = System::Drawing::Point(83, 277);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Identify leaf species";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label7->Location = System::Drawing::Point(83, 325);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(185, 17);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Test if leaf is diseased or not";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label8->Location = System::Drawing::Point(83, 375);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(200, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Get possible disease and cure";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(251, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(32, 32);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Help_Form::button1_Click);
			// 
			// Help_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->ClientSize = System::Drawing::Size(284, 399);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Details_button);
			this->Controls->Add(this->Result_button);
			this->Controls->Add(this->Identify_button);
			this->Controls->Add(this->Browse_button);
			this->Controls->Add(this->Close);
			this->Controls->Add(this->Help);
			this->Controls->Add(this->Home_Button);
			this->Controls->Add(this->Capture_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Help_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Help_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
};
}
