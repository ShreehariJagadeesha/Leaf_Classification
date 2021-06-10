#pragma once

namespace Leaf_Classification {

	using namespace System; 
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	 
	public ref class PostProcessing : public System::Windows::Forms::Form
	{
	public:
		PostProcessing(void)
		{
			InitializeComponent();
		}

	protected:
		~PostProcessing()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^  Cropped_image_picturebox;
	private: System::Windows::Forms::PictureBox^  binary_image_picturebox;
	private: System::Windows::Forms::PictureBox^  Histogram_picturebox;
	private: System::Windows::Forms::PictureBox^  original_image_pictureBox;
	private: System::Windows::Forms::TextBox^  kMeans_textbox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Cropped_image_picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->binary_image_picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->Histogram_picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->original_image_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->kMeans_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cropped_image_picturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->binary_image_picturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Histogram_picturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->original_image_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->Cropped_image_picturebox, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->binary_image_picturebox, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->Histogram_picturebox, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->original_image_pictureBox, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->kMeans_textbox, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(554, 409);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel1->SetColumnSpan(this->button1, 2);
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(201, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 31);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Extract Disease";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Cropped_image_picturebox
			// 
			this->Cropped_image_picturebox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cropped_image_picturebox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Cropped_image_picturebox->Location = System::Drawing::Point(287, 264);
			this->Cropped_image_picturebox->Margin = System::Windows::Forms::Padding(10);
			this->Cropped_image_picturebox->Name = L"Cropped_image_picturebox";
			this->Cropped_image_picturebox->Size = System::Drawing::Size(257, 135);
			this->Cropped_image_picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Cropped_image_picturebox->TabIndex = 3;
			this->Cropped_image_picturebox->TabStop = false;
			// 
			// binary_image_picturebox
			// 
			this->binary_image_picturebox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->binary_image_picturebox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->binary_image_picturebox->Location = System::Drawing::Point(10, 264);
			this->binary_image_picturebox->Margin = System::Windows::Forms::Padding(10);
			this->binary_image_picturebox->Name = L"binary_image_picturebox";
			this->binary_image_picturebox->Size = System::Drawing::Size(257, 135);
			this->binary_image_picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->binary_image_picturebox->TabIndex = 2;
			this->binary_image_picturebox->TabStop = false;
			// 
			// Histogram_picturebox
			// 
			this->Histogram_picturebox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Histogram_picturebox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Histogram_picturebox->Location = System::Drawing::Point(287, 110);
			this->Histogram_picturebox->Margin = System::Windows::Forms::Padding(10);
			this->Histogram_picturebox->Name = L"Histogram_picturebox";
			this->Histogram_picturebox->Size = System::Drawing::Size(257, 134);
			this->Histogram_picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Histogram_picturebox->TabIndex = 1;
			this->Histogram_picturebox->TabStop = false;
			// 
			// original_image_pictureBox
			// 
			this->original_image_pictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->original_image_pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->original_image_pictureBox->Location = System::Drawing::Point(10, 110);
			this->original_image_pictureBox->Margin = System::Windows::Forms::Padding(10);
			this->original_image_pictureBox->Name = L"original_image_pictureBox";
			this->original_image_pictureBox->Size = System::Drawing::Size(257, 134);
			this->original_image_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->original_image_pictureBox->TabIndex = 0;
			this->original_image_pictureBox->TabStop = false;
			// 
			// kMeans_textbox
			// 
			this->kMeans_textbox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->kMeans_textbox->Location = System::Drawing::Point(280, 15);
			this->kMeans_textbox->MaxLength = 2;
			this->kMeans_textbox->Name = L"kMeans_textbox";
			this->kMeans_textbox->Size = System::Drawing::Size(148, 20);
			this->kMeans_textbox->TabIndex = 4;
			this->kMeans_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &PostProcessing::kMeans_textbox_KeyPress);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(103, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 19);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Numbers of Clusters (K) :";
			// 
			// PostProcessing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->ClientSize = System::Drawing::Size(554, 409);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PostProcessing";
			this->Text = L"PostProcessing";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cropped_image_picturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->binary_image_picturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Histogram_picturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->original_image_pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void kMeans_textbox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
}
};
}
