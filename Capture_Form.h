#pragma once

namespace Leaf_Classification {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Capture_Form : public System::Windows::Forms::Form
	{
	public:
		Capture_Form(void)
		{
			InitializeComponent();
		}

	protected:
		~Capture_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^  capture_PictureBox;
	private: System::Windows::Forms::Button^  Capture_button;
	private: System::Windows::Forms::TextBox^  cameraInput_textbox;
			 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  Cropped_PictureBox;
	private: System::Windows::Forms::Button^  PreProcess_Button;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Cropped_PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->capture_PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->PreProcess_Button = (gcnew System::Windows::Forms::Button());
			this->cameraInput_textbox = (gcnew System::Windows::Forms::TextBox());
			this->Capture_button = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cropped_PictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->capture_PictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				35.98901F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				13.87363F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->Cropped_PictureBox, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->capture_PictureBox, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->PreProcess_Button, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->cameraInput_textbox, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->Capture_button, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 88.79552F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.20448F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(728, 398);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// Cropped_PictureBox
			// 
			this->Cropped_PictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Cropped_PictureBox->Location = System::Drawing::Point(366, 3);
			this->Cropped_PictureBox->Name = L"Cropped_PictureBox";
			this->Cropped_PictureBox->Size = System::Drawing::Size(359, 311);
			this->Cropped_PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Cropped_PictureBox->TabIndex = 4;
			this->Cropped_PictureBox->TabStop = false;
			// 
			// capture_PictureBox
			// 
			this->tableLayoutPanel1->SetColumnSpan(this->capture_PictureBox, 2);
			this->capture_PictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->capture_PictureBox->Location = System::Drawing::Point(3, 3);
			this->capture_PictureBox->Name = L"capture_PictureBox";
			this->capture_PictureBox->Size = System::Drawing::Size(357, 311);
			this->capture_PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->capture_PictureBox->TabIndex = 0;
			this->capture_PictureBox->TabStop = false;
			// 
			// PreProcess_Button
			// 
			this->PreProcess_Button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->PreProcess_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PreProcess_Button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->PreProcess_Button->ForeColor = System::Drawing::Color::White;
			this->PreProcess_Button->Location = System::Drawing::Point(491, 320);
			this->PreProcess_Button->Name = L"PreProcess_Button";
			this->PreProcess_Button->Size = System::Drawing::Size(109, 34);
			this->PreProcess_Button->TabIndex = 5;
			this->PreProcess_Button->Text = L"Pre Process";
			this->PreProcess_Button->UseVisualStyleBackColor = true;
			this->PreProcess_Button->Click += gcnew System::EventHandler(this, &Capture_Form::PreProcess_Button_Click);
			// 
			// cameraInput_textbox
			// 
			this->cameraInput_textbox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->cameraInput_textbox->Location = System::Drawing::Point(3, 327);
			this->cameraInput_textbox->Name = L"cameraInput_textbox";
			this->cameraInput_textbox->Size = System::Drawing::Size(256, 20);
			this->cameraInput_textbox->TabIndex = 2;
			// 
			// Capture_button
			// 
			this->Capture_button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Capture_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Capture_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->Capture_button->ForeColor = System::Drawing::Color::White;
			this->Capture_button->Location = System::Drawing::Point(269, 360);
			this->Capture_button->Name = L"Capture_button";
			this->Capture_button->Size = System::Drawing::Size(86, 34);
			this->Capture_button->TabIndex = 1;
			this->Capture_button->Text = L"Capture";
			this->Capture_button->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->AccessibleRole = System::Windows::Forms::AccessibleRole::OutlineButton;
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(268, 320);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 34);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Open";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Capture_Form::button2_Click);
			// 
			// Capture_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->ClientSize = System::Drawing::Size(728, 398);
			this->Controls->Add(this->tableLayoutPanel1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Capture_Form";
			this->Text = L"Capture_Form";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cropped_PictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->capture_PictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void PreProcess_Button_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
