#pragma once

namespace Leaf_Classification {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Browse_Form : public System::Windows::Forms::Form
	{
	public:
		Browse_Form(void)
		{
			InitializeComponent();
		}

	protected:
		~Browse_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^  browse_pictureBox;
	private: System::Windows::Forms::TextBox^  browse_textBox;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  Cropped_PicBox;



	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Cropped_PicBox = (gcnew System::Windows::Forms::PictureBox());
			this->browse_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->browse_textBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cropped_PicBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->browse_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				36)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->Cropped_PicBox, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->browse_pictureBox, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->browse_textBox, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 88.69347F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.30653F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(728, 398);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// Cropped_PicBox
			// 
			this->Cropped_PicBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Cropped_PicBox->Location = System::Drawing::Point(366, 3);
			this->Cropped_PicBox->Name = L"Cropped_PicBox";
			this->Cropped_PicBox->Size = System::Drawing::Size(359, 346);
			this->Cropped_PicBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Cropped_PicBox->TabIndex = 4;
			this->Cropped_PicBox->TabStop = false;
			// 
			// browse_pictureBox
			// 
			this->tableLayoutPanel1->SetColumnSpan(this->browse_pictureBox, 2);
			this->browse_pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->browse_pictureBox->Location = System::Drawing::Point(3, 3);
			this->browse_pictureBox->Name = L"browse_pictureBox";
			this->browse_pictureBox->Size = System::Drawing::Size(357, 346);
			this->browse_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->browse_pictureBox->TabIndex = 0;
			this->browse_pictureBox->TabStop = false;
			// 
			// browse_textBox
			// 
			this->browse_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->browse_textBox->Location = System::Drawing::Point(3, 365);
			this->browse_textBox->Name = L"browse_textBox";
			this->browse_textBox->Size = System::Drawing::Size(256, 20);
			this->browse_textBox->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(491, 359);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Pre Process";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Browse_Form::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(271, 359);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 31);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Browse";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Browse_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->ClientSize = System::Drawing::Size(728, 398);
			this->Controls->Add(this->tableLayoutPanel1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Browse_Form";
			this->Text = L"Browse_Form";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cropped_PicBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->browse_pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{

	}

};
}
