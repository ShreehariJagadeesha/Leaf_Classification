#pragma once
#include"Help_Form.h"
#include "opencv2\opencv.hpp"
#include <msclr\marshal_cppstd.h>
#include<vector>

namespace Leaf_Classification {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging; 
	using namespace cv;
	using namespace System::Diagnostics;
	using namespace MySql::Data::MySqlClient;
	using namespace std;

	typedef unsigned char byte;
	VideoCapture cap;
	Mat image;
		
	public ref class Entry_Form : public System::Windows::Forms::Form
	{
		
	public:
		Entry_Form()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panel5->BackgroundImage = Image::FromFile("Enter_Screen.jpg");
			panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		}

	protected:
		~Entry_Form()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region System Genearate 
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  Result_button;

	private: System::Windows::Forms::Button^  Identify_button;

	private: System::Windows::Forms::Button^  Browse_button;

	private: System::Windows::Forms::Button^  Capture_button;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1_capture;

	private: System::Windows::Forms::Panel^  panelLeft;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  Details_button;

	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Home_Button;
	private: System::Windows::Forms::Button^  Close_Btn;

	private: System::Windows::Forms::Button^  Help;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  Post_Process_Button;
	private: System::Windows::Forms::Label^  Final_Disease_Label;



	private: System::ComponentModel::IContainer^  components;
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Entry_Form::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Post_Process_Button = (gcnew System::Windows::Forms::Button());
			this->Details_button = (gcnew System::Windows::Forms::Button());
			this->Result_button = (gcnew System::Windows::Forms::Button());
			this->panelLeft = (gcnew System::Windows::Forms::Panel());
			this->Identify_button = (gcnew System::Windows::Forms::Button());
			this->Browse_button = (gcnew System::Windows::Forms::Button());
			this->Capture_button = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Final_Disease_Label = (gcnew System::Windows::Forms::Label());
			this->label1_capture = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Close_Btn = (gcnew System::Windows::Forms::Button());
			this->Help = (gcnew System::Windows::Forms::Button());
			this->Home_Button = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Post_Process_Button);
			this->panel1->Controls->Add(this->Details_button);
			this->panel1->Controls->Add(this->Result_button);
			this->panel1->Controls->Add(this->panelLeft);
			this->panel1->Controls->Add(this->Identify_button);
			this->panel1->Controls->Add(this->Browse_button);
			this->panel1->Controls->Add(this->Capture_button);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(135, 554);
			this->panel1->TabIndex = 0;
			// 
			// Post_Process_Button
			// 
			this->Post_Process_Button->FlatAppearance->BorderSize = 0;
			this->Post_Process_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Post_Process_Button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Post_Process_Button->ForeColor = System::Drawing::Color::White;
			this->Post_Process_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Post_Process_Button.Image")));
			this->Post_Process_Button->Location = System::Drawing::Point(3, 334);
			this->Post_Process_Button->Name = L"Post_Process_Button";
			this->Post_Process_Button->Size = System::Drawing::Size(117, 59);
			this->Post_Process_Button->TabIndex = 6;
			this->Post_Process_Button->Text = L"Post Process";
			this->Post_Process_Button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Post_Process_Button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Post_Process_Button->UseVisualStyleBackColor = true;
			this->Post_Process_Button->Click += gcnew System::EventHandler(this, &Entry_Form::Post_Process_Button_Click);
			// 
			// Details_button
			// 
			this->Details_button->FlatAppearance->BorderSize = 0;
			this->Details_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Details_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Details_button->ForeColor = System::Drawing::Color::White;
			this->Details_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Details_button.Image")));
			this->Details_button->Location = System::Drawing::Point(3, 479);
			this->Details_button->Name = L"Details_button";
			this->Details_button->Size = System::Drawing::Size(117, 59);
			this->Details_button->TabIndex = 5;
			this->Details_button->Text = L"Details";
			this->Details_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Details_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Details_button->UseVisualStyleBackColor = true;
			this->Details_button->Click += gcnew System::EventHandler(this, &Entry_Form::button5_Click);
			// 
			// Result_button
			// 
			this->Result_button->FlatAppearance->BorderSize = 0;
			this->Result_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Result_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Result_button->ForeColor = System::Drawing::Color::White;
			this->Result_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Result_button.Image")));
			this->Result_button->Location = System::Drawing::Point(3, 399);
			this->Result_button->Name = L"Result_button";
			this->Result_button->Size = System::Drawing::Size(117, 78);
			this->Result_button->TabIndex = 4;
			this->Result_button->Text = L"Identify Disease";
			this->Result_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Result_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Result_button->UseVisualStyleBackColor = true;
			this->Result_button->Click += gcnew System::EventHandler(this, &Entry_Form::button4_Click);
			// 
			// panelLeft
			// 
			this->panelLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panelLeft->Location = System::Drawing::Point(125, 114);
			this->panelLeft->Name = L"panelLeft";
			this->panelLeft->Size = System::Drawing::Size(7, 59);
			this->panelLeft->TabIndex = 3;
			// 
			// Identify_button
			// 
			this->Identify_button->FlatAppearance->BorderSize = 0;
			this->Identify_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Identify_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Identify_button->ForeColor = System::Drawing::Color::White;
			this->Identify_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Identify_button.Image")));
			this->Identify_button->Location = System::Drawing::Point(3, 269);
			this->Identify_button->Name = L"Identify_button";
			this->Identify_button->Size = System::Drawing::Size(117, 59);
			this->Identify_button->TabIndex = 3;
			this->Identify_button->Text = L"Identify Leaf";
			this->Identify_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Identify_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Identify_button->UseVisualStyleBackColor = true;
			this->Identify_button->Click += gcnew System::EventHandler(this, &Entry_Form::button3_Click);
			// 
			// Browse_button
			// 
			this->Browse_button->FlatAppearance->BorderSize = 0;
			this->Browse_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Browse_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Browse_button->ForeColor = System::Drawing::Color::White;
			this->Browse_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Browse_button.Image")));
			this->Browse_button->Location = System::Drawing::Point(3, 192);
			this->Browse_button->Name = L"Browse_button";
			this->Browse_button->Size = System::Drawing::Size(117, 59);
			this->Browse_button->TabIndex = 2;
			this->Browse_button->Text = L"Browse Leaf";
			this->Browse_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Browse_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Browse_button->UseVisualStyleBackColor = true;
			this->Browse_button->Click += gcnew System::EventHandler(this, &Entry_Form::button2_Click);
			// 
			// Capture_button
			// 
			this->Capture_button->FlatAppearance->BorderSize = 0;
			this->Capture_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Capture_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Capture_button->ForeColor = System::Drawing::Color::White;
			this->Capture_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Capture_button.Image")));
			this->Capture_button->Location = System::Drawing::Point(3, 114);
			this->Capture_button->Name = L"Capture_button";
			this->Capture_button->Size = System::Drawing::Size(117, 59);
			this->Capture_button->TabIndex = 1;
			this->Capture_button->Text = L"Capture ";
			this->Capture_button->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Capture_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->Capture_button->UseVisualStyleBackColor = true;
			this->Capture_button->Click += gcnew System::EventHandler(this, &Entry_Form::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(135, 68);
			this->panel3->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(6, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Classification";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(29, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 28);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Leaf";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Final_Disease_Label);
			this->panel2->Controls->Add(this->label1_capture);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(135, 498);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(728, 56);
			this->panel2->TabIndex = 1;
			// 
			// Final_Disease_Label
			// 
			this->Final_Disease_Label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Final_Disease_Label->AutoSize = true;
			this->Final_Disease_Label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Final_Disease_Label->Location = System::Drawing::Point(389, 14);
			this->Final_Disease_Label->Name = L"Final_Disease_Label";
			this->Final_Disease_Label->Size = System::Drawing::Size(177, 21);
			this->Final_Disease_Label->TabIndex = 3;
			this->Final_Disease_Label->Text = L"Disease Identification";
			// 
			// label1_capture
			// 
			this->label1_capture->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1_capture->AutoSize = true;
			this->label1_capture->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1_capture->Location = System::Drawing::Point(156, 17);
			this->label1_capture->Name = L"label1_capture";
			this->label1_capture->Size = System::Drawing::Size(148, 21);
			this->label1_capture->TabIndex = 2;
			this->label1_capture->Text = L"Leaf Classification";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->Close_Btn);
			this->panel4->Controls->Add(this->Help);
			this->panel4->Controls->Add(this->Home_Button);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(135, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(728, 68);
			this->panel4->TabIndex = 2;
			this->panel4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Entry_Form::panel4_MouseDown);
			// 
			// Close_Btn
			// 
			this->Close_Btn->FlatAppearance->BorderSize = 0;
			this->Close_Btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Close_Btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Close_Btn.Image")));
			this->Close_Btn->Location = System::Drawing::Point(684, 19);
			this->Close_Btn->Name = L"Close_Btn";
			this->Close_Btn->Size = System::Drawing::Size(32, 32);
			this->Close_Btn->TabIndex = 0;
			this->Close_Btn->UseVisualStyleBackColor = true;
			this->Close_Btn->Click += gcnew System::EventHandler(this, &Entry_Form::Close_Btn_Click);
			// 
			// Help
			// 
			this->Help->FlatAppearance->BorderSize = 0;
			this->Help->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Help->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Help.Image")));
			this->Help->Location = System::Drawing::Point(372, 19);
			this->Help->Name = L"Help";
			this->Help->Size = System::Drawing::Size(32, 32);
			this->Help->TabIndex = 0;
			this->Help->UseVisualStyleBackColor = true;
			this->Help->Click += gcnew System::EventHandler(this, &Entry_Form::Help_Click);
			// 
			// Home_Button
			// 
			this->Home_Button->FlatAppearance->BorderSize = 0;
			this->Home_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Home_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Home_Button.Image")));
			this->Home_Button->Location = System::Drawing::Point(304, 19);
			this->Home_Button->Name = L"Home_Button";
			this->Home_Button->Size = System::Drawing::Size(32, 32);
			this->Home_Button->TabIndex = 0;
			this->Home_Button->UseVisualStyleBackColor = true;
			this->Home_Button->Click += gcnew System::EventHandler(this, &Entry_Form::Home_Button_Click);
			// 
			// panel5
			// 
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(135, 68);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(728, 430);
			this->panel5->TabIndex = 3;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Entry_Form::timer1_Tick);
			// 
			// Entry_Form
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(863, 554);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Entry_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Entry_Form";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion 

#pragma region Panel moving

public: const int HT_CAPTION = 0x2;

public:
	[System::Runtime::InteropServices::DllImportAttribute("user32.dll")]
	static int SendMessage(IntPtr hWnd, int Msg, int wParam, int lParam);

public: 
	[System::Runtime::InteropServices::DllImportAttribute("user32.dll")]
	static bool ReleaseCapture();

private:
	void panel4_MouseDown(Object ^sender, MouseEventArgs  ^e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			ReleaseCapture();
			SendMessage(Handle, WM_NCLBUTTONDOWN, HT_CAPTION, 0);
		}
	}
#pragma endregion

System::Drawing::Bitmap^ GetBitMap(const cv::Mat& img)  ///reference https://goo.gl/WbWjLG
{
	PixelFormat fmt;
	if (img.type() == CV_8UC4)
		fmt = PixelFormat::Format32bppArgb;
	else fmt = PixelFormat::Format24bppRgb;

	Bitmap ^bmpimg = gcnew Bitmap(img.cols, img.rows, fmt);
	BitmapData ^data = bmpimg->LockBits(System::Drawing::Rectangle(0, 0, img.cols, img.rows), ImageLockMode::WriteOnly, fmt);
	byte *dstData = reinterpret_cast<byte*>(data->Scan0.ToPointer());
	unsigned char *srcData = img.data;
	for (int row = 0; row < data->Height; ++row)
		memcpy(reinterpret_cast<void*>(&dstData[row*data->Stride]), reinterpret_cast<void*>(&srcData[row*img.step]), img.cols*img.channels());
	bmpimg->UnlockBits(data);
	return bmpimg;
}

//Capture image
#pragma region Capture image
System::Windows::Forms::PictureBox^  capture_PictureBox;
System::Windows::Forms::TextBox^  cameraInput_textbox;
System::Windows::Forms::Button^  Capture_button1;
System::Windows::Forms::PictureBox^  Cropped_PictureBox;

void Draw_Controls_for_OpenCamera()
{
		System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
		System::Windows::Forms::Button^  button2;
		System::Windows::Forms::Button^  PreProcess_Button;
		System::Windows::Forms::Timer^  timer1;
	
		tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
		Cropped_PictureBox = (gcnew System::Windows::Forms::PictureBox());
		capture_PictureBox = (gcnew System::Windows::Forms::PictureBox());
		cameraInput_textbox = (gcnew System::Windows::Forms::TextBox());
		button2 = (gcnew System::Windows::Forms::Button());
		Capture_button1 = (gcnew System::Windows::Forms::Button());
		PreProcess_Button = (gcnew System::Windows::Forms::Button());
		tableLayoutPanel1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(Cropped_PictureBox))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(capture_PictureBox))->BeginInit();
		SuspendLayout();
		// 
		// tableLayoutPanel1
		// 
		tableLayoutPanel1->ColumnCount = 3;
		tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			35.98901F)));
		tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			13.87363F)));
		tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		tableLayoutPanel1->Controls->Add(Cropped_PictureBox, 1, 0);
		tableLayoutPanel1->Controls->Add(capture_PictureBox, 0, 0);
		tableLayoutPanel1->Controls->Add(PreProcess_Button, 2, 1);
		tableLayoutPanel1->Controls->Add(cameraInput_textbox, 0, 1);
		tableLayoutPanel1->Controls->Add(button2, 1, 1);
		tableLayoutPanel1->Controls->Add(Capture_button1, 1, 2);
		tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
		tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
		tableLayoutPanel1->Name = L"tableLayoutPanel1";
		tableLayoutPanel1->RowCount = 3;
		tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 88.79552F)));
		tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.20448F)));
		tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
		tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
		tableLayoutPanel1->Size = System::Drawing::Size(728, 398);
		tableLayoutPanel1->TabIndex = 0;
		// 
		// pictureBox2
		// 
		Cropped_PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		Cropped_PictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
		Cropped_PictureBox->Location = System::Drawing::Point(366, 3);
		Cropped_PictureBox->Name = L"Cropped_PictureBox";
		Cropped_PictureBox->Size = System::Drawing::Size(359, 311);
		Cropped_PictureBox->TabIndex = 4;
		Cropped_PictureBox->TabStop = false;
		// 
		// capture_PictureBox
		// 
		capture_PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;

		tableLayoutPanel1->SetColumnSpan(capture_PictureBox, 2);
		capture_PictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
		capture_PictureBox->Location = System::Drawing::Point(3, 3);
		capture_PictureBox->Name = L"capture_PictureBox";
		capture_PictureBox->Size = System::Drawing::Size(357, 311);
		capture_PictureBox->TabIndex = 0;
		capture_PictureBox->TabStop = false;
		// 
		// cameraInput_textbox
		// 
		cameraInput_textbox->Anchor = System::Windows::Forms::AnchorStyles::Left;
		cameraInput_textbox->Location = System::Drawing::Point(3, 327);
		cameraInput_textbox->Name = L"cameraInput_textbox";
		cameraInput_textbox->Size = System::Drawing::Size(256, 20);
		cameraInput_textbox->TabIndex = 2;
		// 
		// button2
		// 
		button2->AccessibleRole = System::Windows::Forms::AccessibleRole::OutlineButton;
		button2->Anchor = System::Windows::Forms::AnchorStyles::None;
		button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
		button2->ForeColor = System::Drawing::Color::White;
		button2->Location = System::Drawing::Point(268, 320);
		button2->Name = L"button2";
		button2->Size = System::Drawing::Size(88, 34);
		button2->TabIndex = 3;
		button2->Text = L"Open";
		button2->UseVisualStyleBackColor = true;
		button2->Click += gcnew System::EventHandler(this, &Entry_Form::OnClick_Open);

		// 
		// Capture_button1
		// 
		Capture_button1->Anchor = System::Windows::Forms::AnchorStyles::None;
		Capture_button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		Capture_button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
		Capture_button1->ForeColor = System::Drawing::Color::White;
		Capture_button1->Location = System::Drawing::Point(271, 360);
		Capture_button1->Name = L"Capture_button1";
		Capture_button1->Size = System::Drawing::Size(83, 34);
		Capture_button1->TabIndex = 1;
		Capture_button1->Text = L"Capture";
		Capture_button1->UseVisualStyleBackColor = true;
		Capture_button1->Click += gcnew System::EventHandler(this, &Entry_Form::capture_frame_Click);
		// 
		// button3
		// 
		PreProcess_Button->Anchor = System::Windows::Forms::AnchorStyles::None;
		PreProcess_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		PreProcess_Button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
		PreProcess_Button->ForeColor = System::Drawing::Color::White;
		PreProcess_Button->Location = System::Drawing::Point(491, 320);
		PreProcess_Button->Name = L"PreProcess_Button";
		PreProcess_Button->Size = System::Drawing::Size(109, 34);
		PreProcess_Button->TabIndex = 5;
		PreProcess_Button->Text = L"Pre Process";
		PreProcess_Button->UseVisualStyleBackColor = true;
		PreProcess_Button->Click += gcnew System::EventHandler(this, &Entry_Form::PreProcess_Button_Click);		 
		panel5->Controls->Add(tableLayoutPanel1);
		ResumeLayout(true);
}

private: System::Void PreProcess_Button_Click(System::Object^  sender, System::EventArgs^  e)
{
		System::String ^executable_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);

		msclr::interop::marshal_context context;
		std::string path = context.marshal_as<std::string>(executable_path);
		Mat img = imread(path + "/image.jpg");
		Mat hsv;
		cvtColor(img, hsv, CV_BGR2HSV);
		Mat binary;
		inRange(hsv, Scalar(37, 20, 0), Scalar(62, 255, 225), binary);

		vector<vector<cv::Point>> contours;
		findContours(binary, contours, CV_RETR_LIST, CV_CHAIN_APPROX_NONE);
		double max_area = 0;
		int id;
		for (size_t idx = 0; idx < contours.size(); idx++)
		{
			double temp_area = contourArea(contours[idx]);
			if (temp_area > max_area)
			{
				max_area = temp_area;
				id = idx;
			}
		}
		Rect Max_rect = boundingRect(contours[id]);
		Mat ROI = img(Max_rect);
		Cropped_PictureBox->Image = GetBitMap(ROI);

		imwrite(path + "/image.jpg", ROI);
}

System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	cap >> image;
	capture_PictureBox->Image = GetBitMap(image);
	capture_PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
}

void capture_frame_Click(System::Object^  sender, System::EventArgs^  e)
{
	System::String ^executable_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);
	GetBitMap(image)->Save(executable_path + "\\" + "image.jpg");
	timer1->Stop();
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		GC::Collect();
		panel5->Controls->Clear();
		panel5->BackgroundImage = nullptr;
		panelLeft->Height = Capture_button->Height;
		panelLeft->Top = Capture_button->Top;
		Draw_Controls_for_OpenCamera();
	}

void OnClick_Open(System::Object ^sender, System::EventArgs ^e)
{
	if(cameraInput_textbox->Text->Length == 0)
	{
		MessageBox::Show("Could not find camera");
		return;
	}
	else if (cameraInput_textbox->Text->Length < 3)
	{
		cap.open(Convert::ToInt32(cameraInput_textbox->Text)); 
	}
	else
	{
		msclr::interop::marshal_context context;
		std::string ip_address = context.marshal_as<std::string>(cameraInput_textbox->Text);
		cap.open(ip_address);
	}
	if (!cap.isOpened())
	{
		MessageBox::Show("Could not open camera");
		cap.release();
		return;
	}
	else
	{
		Capture_button1->Enabled = true;
		timer1->Start();
	}
}
#pragma endregion

//Browse image
#pragma region Browse image

	 System::Windows::Forms::TextBox^  browse_textBox;
     System::Windows::Forms::PictureBox^  browse_pictureBox;
	 System::Windows::Forms::PictureBox^  Cropped_PicBox;
void Draw_Controls_for_Browse()
		 {
			System::Windows::Forms::Button^  button1;
			System::Windows::Forms::Button^  button2;
			System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;

			tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			Cropped_PicBox = (gcnew System::Windows::Forms::PictureBox());
			browse_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			browse_textBox = (gcnew System::Windows::Forms::TextBox());
			button1 = (gcnew System::Windows::Forms::Button());
			button2 = (gcnew System::Windows::Forms::Button());
			tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(Cropped_PicBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(browse_pictureBox))->BeginInit();
			SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			tableLayoutPanel1->ColumnCount = 3;
			tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				36)));
			tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14)));
			tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			tableLayoutPanel1->Controls->Add(Cropped_PicBox, 1, 0);
			tableLayoutPanel1->Controls->Add(browse_pictureBox, 0, 0);
			tableLayoutPanel1->Controls->Add(browse_textBox, 0, 1);
			tableLayoutPanel1->Controls->Add(button1, 1, 1);
			tableLayoutPanel1->Controls->Add(button2, 1, 1);
			tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			tableLayoutPanel1->Name = L"tableLayoutPanel1";
			tableLayoutPanel1->RowCount = 2;
			tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 88.69347F)));
			tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.30653F)));
			tableLayoutPanel1->Size = System::Drawing::Size(728, 398);
			tableLayoutPanel1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			Cropped_PicBox->Dock = System::Windows::Forms::DockStyle::Fill;
			Cropped_PicBox->Location = System::Drawing::Point(366, 3);
			Cropped_PicBox->Name = L"pictureBox2";
			Cropped_PicBox->Size = System::Drawing::Size(359, 346);
			Cropped_PicBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			Cropped_PicBox->TabIndex = 4;
			Cropped_PicBox->TabStop = false;
			// 
			// pictureBox1
			// 
			tableLayoutPanel1->SetColumnSpan(browse_pictureBox, 2);
			browse_pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			browse_pictureBox->Location = System::Drawing::Point(3, 3);
			browse_pictureBox->Name = L"pictureBox1";
			browse_pictureBox->Size = System::Drawing::Size(357, 346);
			browse_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			browse_pictureBox->TabIndex = 0;
			browse_pictureBox->TabStop = false;
			// 
			// textBox1
			// 
			browse_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			browse_textBox->Location = System::Drawing::Point(3, 365);
			browse_textBox->Name = L"browse_textBox";
			browse_textBox->Size = System::Drawing::Size(256, 20);
			browse_textBox->TabIndex = 1;
			// 
			// button1
			// 
			button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			button1->ForeColor = System::Drawing::Color::White;
			button1->Location = System::Drawing::Point(491, 359);
			button1->Name = L"button1";
			button1->Size = System::Drawing::Size(109, 31);
			button1->TabIndex = 2;
			button1->Text = L"Pre Process";
			button1->UseVisualStyleBackColor = true;
			button1->Click += gcnew System::EventHandler(this, &Entry_Form::PreProcess_BrowseBtn);
			// 
			// button2
			// 
			button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			button2->ForeColor = System::Drawing::Color::White;
			button2->Location = System::Drawing::Point(271, 359);
			button2->Name = L"button2";
			button2->Size = System::Drawing::Size(83, 31);
			button2->TabIndex = 3;
			button2->Text = L"Browse";
			button2->UseVisualStyleBackColor = true;
			button2->Click += gcnew System::EventHandler(this, &Entry_Form::BrowseBtn_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(Cropped_PicBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(browse_pictureBox))->EndInit();
			panel5->Controls->Add(tableLayoutPanel1);
}

OpenFileDialog^ folderBrowserDialog1 = gcnew OpenFileDialog();
System::String^ folderPath =  ""; 
bool fileOpened = false;
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)  // Browse the computer to get the leaf image for testing
{
	GC::Collect();
	if(pictureBox1_identifyleaf)
		pictureBox1_identifyleaf->Image = nullptr;

	if (original_image_pictureBox)
		original_image_pictureBox->Image = nullptr;

	if (Histogram_picturebox)
		Histogram_picturebox->Image = nullptr;

	if (Cropped_image_picturebox)
		Cropped_image_picturebox->Image = nullptr;

	if (binary_image_picturebox)
		binary_image_picturebox->Image = nullptr;


	panel5->Controls->Clear(); // Clearing old data displayed on screen
	panel5->BackgroundImage = nullptr;
	panelLeft->Height = Browse_button->Height;
	panelLeft->Top = Browse_button->Top;
	Draw_Controls_for_Browse();

	folderBrowserDialog1->Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp) | *.jpg; *.jpeg; *.gif; *.bmp"; // image filters  
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try 
		{
			folderPath = folderBrowserDialog1->FileName;
			fileOpened = true;
		}
		catch (System::Exception^ exp)
		{
			MessageBox::Show(System::String::Concat("An error occurred while attempting to load the file. The error is: ", System::Environment::NewLine, exp, System::Environment::NewLine));
			fileOpened = false;
		}
		browse_textBox->Text = folderPath;
		browse_pictureBox->Image = Image::FromFile(folderPath);
	}
}

void BrowseBtn_Click(System::Object^sender, System::EventArgs^e)
{
	Cropped_PicBox->Image = nullptr;
	panel5->BackgroundImage = nullptr;
	panelLeft->Height = Browse_button->Height;
	panelLeft->Top = Browse_button->Top;

	folderBrowserDialog1->Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp) | *.jpg; *.jpeg; *.gif; *.bmp"; // image filters  
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			folderPath = folderBrowserDialog1->FileName;
			fileOpened = true;
		}
		catch (System::Exception^ exp)
		{
			MessageBox::Show(System::String::Concat("An error occurred while attempting to load the file. The error is: ", System::Environment::NewLine, exp, System::Environment::NewLine));
			fileOpened = false;
		}
	}
	browse_textBox->Text = folderPath;
	browse_pictureBox->Image = Image::FromFile(folderPath);
}

void PreProcess_BrowseBtn(System::Object^  sender, System::EventArgs^  e)
{
	msclr::interop::marshal_context context;
	std::string path = context.marshal_as<std::string>(folderPath);
	Mat img = imread(path);
	Mat hsv;
	cvtColor(img, hsv, CV_BGR2HSV);
	Mat binary;
	inRange(hsv, Scalar(37, 20, 0), Scalar(62, 255, 225), binary);

	vector<vector<cv::Point>> contours;
	findContours(binary, contours, CV_RETR_LIST, CV_CHAIN_APPROX_NONE);
	double max_area = 0;
	int id;
	for (size_t idx = 0; idx < contours.size(); idx++)
	{
		double temp_area = contourArea(contours[idx]);
		if (temp_area > max_area)
		{
			max_area = temp_area;
			id = idx;
		}
	}
	Rect Max_rect = boundingRect(contours[id]);
	Mat ROI = img(Max_rect);
	Cropped_PicBox->Image = GetBitMap(ROI);

	System::String ^executable_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);
	std::string imgPath = context.marshal_as<std::string>(executable_path);

	imwrite(imgPath + "/image.jpg",ROI);
}
#pragma endregion

//Identify leaf
#pragma region Identify leaf

System::Windows::Forms::PictureBox^  pictureBox1_identifyleaf;
void Draw_Controls_for_identify_leaf()
{
	pictureBox1_identifyleaf = (gcnew System::Windows::Forms::PictureBox());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox1_identifyleaf))->BeginInit();
	SuspendLayout();
	// 
	// pictureBox1
	// 
	pictureBox1_identifyleaf->Dock = System::Windows::Forms::DockStyle::Fill;
	pictureBox1_identifyleaf->Location = System::Drawing::Point(0, 0);
	pictureBox1_identifyleaf->Name = L"pictureBox1";
	pictureBox1_identifyleaf->Size = System::Drawing::Size(728, 398);
	pictureBox1_identifyleaf->TabIndex = 0;
	pictureBox1_identifyleaf->TabStop = false;
	pictureBox1_identifyleaf->SizeMode = PictureBoxSizeMode::Zoom;
	panel5->Controls->Add(pictureBox1_identifyleaf);
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	GC::Collect();
	panel5->Controls->Clear();
	panel5->BackgroundImage = nullptr;
	panelLeft->Height = Identify_button->Height;
	panelLeft->Top = Identify_button->Top;
	Draw_Controls_for_identify_leaf();
	System::String ^executable_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);
	if (System::IO::File::Exists(executable_path + "\\" + "image.jpg"))
	{
		Image ^tempImage = Image::FromFile(executable_path + "\\" + "image.jpg");
		Bitmap ^tempBitmap = gcnew Bitmap(tempImage);
		pictureBox1_identifyleaf->Image = tempBitmap;
		pictureBox1_identifyleaf->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		leaf_recognition();
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Please choose an image");
	}
}

void leaf_recognition()
{
	System::String ^executable_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);
	System::String ^fullPath = executable_path + "/py";
	Console::WriteLine(fullPath);
	ProcessStartInfo ^psi = gcnew ProcessStartInfo();
	psi->FileName = System::IO::Path::GetFileName(fullPath);
	psi->WorkingDirectory = System::IO::Path::GetDirectoryName(fullPath);
	psi->Arguments = "label_image.py --graph " + "\"" + executable_path + "\\leaf_recognition_model.pb" + "\"" + " --labels " + "\"" + executable_path + "\\leaf_labels.txt" + "\"" + " --image " + "\"" + executable_path + "\\image.jpg" + "\"" + " --num_top_predictions 1";
	Console::WriteLine(psi->Arguments);
	psi->WindowStyle = ProcessWindowStyle::Maximized;
	psi->UseShellExecute = false;
	psi->CreateNoWindow = false; //ToDO: set this to true at release
	psi->RedirectStandardError = true;
	psi->RedirectStandardOutput = true;

	Process ^Leaf_Recognition_Process = gcnew Process();
	Leaf_Recognition_Process->StartInfo = psi;
	Leaf_Recognition_Process->EnableRaisingEvents = true;
	Leaf_Recognition_Process->ErrorDataReceived += gcnew DataReceivedEventHandler(this, &Entry_Form::OnOutputDataReceived);
	Leaf_Recognition_Process->OutputDataReceived += gcnew DataReceivedEventHandler(this, &Entry_Form::OnOutputDataReceived);
	Leaf_Recognition_Process->Start();
	Leaf_Recognition_Process->BeginErrorReadLine();
	Leaf_Recognition_Process->BeginOutputReadLine();
}

delegate void updateDelgate(System::String^ value);
delegate void updateColor(System::Drawing::Color color);
void updateLabel(System::String^ value)
{
	 label1_capture->Text = value;
}

void updateLabelColor(System::Drawing::Color color)
{
	label1_capture->ForeColor = color;
}

private: void OnOutputDataReceived(Object^ sender, DataReceivedEventArgs^ e)
{
	if (e->Data != nullptr) //Python output 
	{
		if (e->Data->Contains("=")) //my output has = then continue
		{
			System::String ^ x, ^y;
			if (e->Data->Contains("="))
			{
				x = e->Data->Split('=')[1]; // (studentname = "0.50252") split where = is there 
				y = e->Data->Split('=')[0]; // (studentname = "0.50252") split where = is there 
			}
			
			if ((x->Length > 0) && (y->Length > 0))
			{
				if (x->Contains("\""))    // remove " " from "0.50252")
					x = x->Replace('"', ' ');

				if (y->Contains("("))    // remove  ( 
					y = y->Replace('(', ' ');

				x = x->TrimEnd()->Substring(0, x->Length - 1); // remove ) last bracket
				float value = Convert::ToSingle(x);

				if (value)  // Show any data above 0.50 only
				{
					Console::WriteLine(e->Data);
					updateDelgate^ uD = gcnew updateDelgate(this, &Entry_Form::updateLabel);
					updateColor^ uC = gcnew updateColor(this, &Entry_Form::updateLabelColor);
					this->Invoke(uD, y);
					this->Invoke(uC, Color::Aqua);
				}
				/*else
				{
					Console::WriteLine(e->Data);
					updateDelgate^ uD = gcnew updateDelgate(this, &Entry_Form::updateLabel);
					updateColor^ uC = gcnew updateColor(this, &Entry_Form::updateLabelColor);
					this->Invoke(uD, "Unidentified leaf");
					this->Invoke(uC, Color::Red);
				}*/
			}
		}
	}
}

#pragma endregion

#pragma region Post Processing
private: System::Void Post_Process_Button_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GC::Collect();
	panel5->Controls->Clear();
	panel5->BackgroundImage = nullptr;
	panelLeft->Height = Post_Process_Button->Height;
	panelLeft->Top = Post_Process_Button->Top;
	Draw_Controls_for_PostProcess();
}

		System::Windows::Forms::PictureBox^  Cropped_image_picturebox;
		System::Windows::Forms::PictureBox^  binary_image_picturebox;
		System::Windows::Forms::PictureBox^  Histogram_picturebox;
		System::Windows::Forms::PictureBox^  original_image_pictureBox;
		System::Windows::Forms::TextBox^  kMeans_textbox;
void Draw_Controls_for_PostProcess()
{
	 System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	 System::Windows::Forms::Label^  label1;
	 System::Windows::Forms::Button^  button1;
	 System::ComponentModel::Container ^components;

	 tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
	 Cropped_image_picturebox = (gcnew System::Windows::Forms::PictureBox());
	 binary_image_picturebox = (gcnew System::Windows::Forms::PictureBox());
	 Histogram_picturebox = (gcnew System::Windows::Forms::PictureBox());
	 original_image_pictureBox = (gcnew System::Windows::Forms::PictureBox());
	 kMeans_textbox = (gcnew System::Windows::Forms::TextBox());
	 label1 = (gcnew System::Windows::Forms::Label());
	 button1 = (gcnew System::Windows::Forms::Button());
	 tableLayoutPanel1->SuspendLayout();
	 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cropped_image_picturebox))->BeginInit();
	 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->binary_image_picturebox))->BeginInit();
	 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Histogram_picturebox))->BeginInit();
	 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->original_image_pictureBox))->BeginInit();
	 this->SuspendLayout();
	 // 
	 // tableLayoutPanel1
	 // 
	 tableLayoutPanel1->ColumnCount = 2;
	 tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		 50)));
	 tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		 50)));
	 tableLayoutPanel1->Controls->Add(Cropped_image_picturebox, 1, 3);
	 tableLayoutPanel1->Controls->Add(binary_image_picturebox, 0, 3);
	 tableLayoutPanel1->Controls->Add(Histogram_picturebox, 1, 2);
	 tableLayoutPanel1->Controls->Add(original_image_pictureBox, 0, 2);
	 tableLayoutPanel1->Controls->Add(kMeans_textbox, 1, 0);
	 tableLayoutPanel1->Controls->Add(label1, 0, 0);
	 tableLayoutPanel1->Controls->Add(button1, 0, 1);
	 tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
	 tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
	 tableLayoutPanel1->Name = L"tableLayoutPanel1";
	 tableLayoutPanel1->RowCount = 4;
	 tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
	 tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
	 tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
	 tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
	 tableLayoutPanel1->Size = System::Drawing::Size(554, 409);
	 tableLayoutPanel1->TabIndex = 0;
	 // 
	 // Cropped_image_picturebox
	 // 
	 Cropped_image_picturebox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	 Cropped_image_picturebox->Dock = System::Windows::Forms::DockStyle::Fill;
	 Cropped_image_picturebox->Location = System::Drawing::Point(292, 269);
	 Cropped_image_picturebox->Margin = System::Windows::Forms::Padding(10);
	 Cropped_image_picturebox->Name = L"Cropped_image_picturebox";
	 Cropped_image_picturebox->Size = System::Drawing::Size(247, 125);
	 Cropped_image_picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	 Cropped_image_picturebox->TabIndex = 3;
	 Cropped_image_picturebox->TabStop = false;
	 // 
	 // binary_image_picturebox
	 // 
	 binary_image_picturebox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	 binary_image_picturebox->Dock = System::Windows::Forms::DockStyle::Fill;
	 binary_image_picturebox->Location = System::Drawing::Point(15, 269);
	 binary_image_picturebox->Margin = System::Windows::Forms::Padding(10);
	 binary_image_picturebox->Name = L"binary_image_picturebox";
	 binary_image_picturebox->Size = System::Drawing::Size(247, 125);
	 binary_image_picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	 binary_image_picturebox->TabIndex = 2;
	 binary_image_picturebox->TabStop = false;
	 // 
	 // Histogram_picturebox
	 // 
	 Histogram_picturebox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	 Histogram_picturebox->Dock = System::Windows::Forms::DockStyle::Fill;
	 Histogram_picturebox->Location = System::Drawing::Point(292, 115);
	 Histogram_picturebox->Margin = System::Windows::Forms::Padding(10);
	 Histogram_picturebox->Name = L"Histogram_picturebox";
	 Histogram_picturebox->Size = System::Drawing::Size(247, 124);
	 Histogram_picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	 Histogram_picturebox->TabIndex = 1;
	 Histogram_picturebox->TabStop = false;
	 // 
	 // original_image_pictureBox
	 // 
	 original_image_pictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	 original_image_pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
	 original_image_pictureBox->Location = System::Drawing::Point(15, 115);
	 original_image_pictureBox->Margin = System::Windows::Forms::Padding(10);
	 original_image_pictureBox->Name = L"original_image_pictureBox";
	 original_image_pictureBox->Size = System::Drawing::Size(247, 124);
	 original_image_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	 original_image_pictureBox->TabIndex = 0;
	 original_image_pictureBox->TabStop = false;
	 // 
	 // textBox1
	 // 
	 kMeans_textbox->MaxLength = 2;
	 kMeans_textbox->Anchor = System::Windows::Forms::AnchorStyles::Left;
	 kMeans_textbox->Location = System::Drawing::Point(280, 15);
	 kMeans_textbox->Name = L"kMeans_textbox";
	 kMeans_textbox->Size = System::Drawing::Size(148, 20);
	 kMeans_textbox->TabIndex = 4;
	 kMeans_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Entry_Form::kMeans_textbox_KeyPress);

	 // 
	 // label1
	 // 
	 label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
	 label1->AutoSize = true;
	 label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		 static_cast<System::Byte>(0)));
	 label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
	 label1->Location = System::Drawing::Point(131, 17);
	 label1->Name = L"label1";
	 label1->Size = System::Drawing::Size(143, 15);
	 label1->TabIndex = 5;
	 label1->Text = L"Numbers of Clusters (K) :";
	 // 
	 // button1
	 // 
	 button1->Anchor = System::Windows::Forms::AnchorStyles::None;
	 tableLayoutPanel1->SetColumnSpan(button1, 2);
	 button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	 button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		 static_cast<System::Byte>(0)));
	 button1->ForeColor = System::Drawing::Color::White;
	 button1->Location = System::Drawing::Point(201, 59);
	 button1->Name = L"button1";
	 button1->Size = System::Drawing::Size(152, 31);
	 button1->TabIndex = 6;
	 button1->Text = L"Extract Disease";
	 button1->UseVisualStyleBackColor = true;
	 button1->Click += gcnew System::EventHandler(this, &Entry_Form::postProcess_button_Click);
	 panel5->Controls->Add(tableLayoutPanel1);
	 this->ResumeLayout(false);
}

private: System::Void kMeans_textbox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && (e->KeyChar != '.'))
	{
		e->Handled = true;
	}
}

		Process ^Leaf_Recognition_Process;
private: System::Void postProcess_button_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (System::String::IsNullOrEmpty(kMeans_textbox->Text))	
		MessageBox::Show("Enter the number of clusters to be formed");
	else
	{
		try 
		{

		delete original_image_pictureBox->Image;
		delete Histogram_picturebox->Image;
		delete Cropped_image_picturebox->Image;
		delete binary_image_picturebox->Image;

		original_image_pictureBox->Image = nullptr;
		Histogram_picturebox->Image = nullptr;
		Cropped_image_picturebox->Image = nullptr;
		binary_image_picturebox->Image = nullptr;

		System::String ^executable_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);
		if (File::Exists(executable_path + "/bar.jpg"))
			File::Delete(executable_path + "/bar.jpg");

		System::String ^fullPath = executable_path + "/py";
		Console::WriteLine(fullPath);
		ProcessStartInfo ^psi = gcnew ProcessStartInfo();
		psi->FileName = System::IO::Path::GetFileName(fullPath);
		psi->WorkingDirectory = System::IO::Path::GetDirectoryName(fullPath);
		psi->Arguments = "color_kmeans.py -i" +  "\"" + executable_path + "\\image.jpg" + "\" -c " + Convert::ToString(kMeans_textbox->Text);
		Console::WriteLine(psi->Arguments);
		psi->WindowStyle = ProcessWindowStyle::Maximized;
		psi->UseShellExecute = false;
		psi->CreateNoWindow = false; //ToDO: set this to true at release
		psi->RedirectStandardError = true;
		psi->RedirectStandardOutput = true;

		Leaf_Recognition_Process = gcnew Process();
		Leaf_Recognition_Process->StartInfo = psi;
		Leaf_Recognition_Process->EnableRaisingEvents = true;
		Leaf_Recognition_Process->ErrorDataReceived += gcnew DataReceivedEventHandler(this, &Entry_Form::OnOutputDataReceived_disease);
		Leaf_Recognition_Process->OutputDataReceived += gcnew DataReceivedEventHandler(this, &Entry_Form::OnOutputDataReceived_disease);
		//Leaf_Recognition_Process->Exited += gcnew System::EventHandler(this, &Entry_Form::Leaf_Recognition_Process_Exited);
		Leaf_Recognition_Process->Start();
		Leaf_Recognition_Process->BeginErrorReadLine();
		Leaf_Recognition_Process->BeginOutputReadLine();
		}
		catch (System::Exception^ ex)
		{
			Console::WriteLine(ex->Message);
		}
	}
}
 
	delegate void updateImageDelegate();

	void imageUpdate()
	{
		System::String ^executable_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);

		Image ^tempOriginalImage = Image::FromFile(executable_path + "/image.jpg");
		Bitmap ^tempOriginalBitmap = gcnew Bitmap(tempOriginalImage);
		original_image_pictureBox->Image = tempOriginalBitmap;

		Image ^tempHistogramImage = Image::FromFile(executable_path + "/bar.jpg");
		Bitmap ^tempHistogramBitmap = gcnew Bitmap(tempHistogramImage);
		Histogram_picturebox->Image = tempHistogramImage;
		
		Image ^tempCroppedImage = Image::FromFile(executable_path + "/cropped_disease.jpg");
		Bitmap ^tempCroppedBitmap = gcnew Bitmap(tempCroppedImage);
		Cropped_image_picturebox->Image = tempCroppedBitmap;
		
		Image ^tempBinaryImage = Image::FromFile(executable_path + "/binary.jpg");
		Bitmap ^tempBinaryBitmap = gcnew Bitmap(tempBinaryImage);
		binary_image_picturebox->Image = tempBinaryBitmap;
	}

private: void OnOutputDataReceived_disease(Object^ sender, DataReceivedEventArgs^ e)
{
	if (e->Data != nullptr) //Python output 
	{
		if (e->Data->Contains("Done"))
		{				
			Console::WriteLine(e->Data);
			updateImageDelegate^ updatedelegate = gcnew updateImageDelegate(this, &Entry_Form::imageUpdate);
			this->Invoke(updatedelegate);
		}

	}
}

#pragma endregion

//Result
#pragma region Result
	System::Windows::Forms::PictureBox^  pictureBox2_Result;
void Draw_Controls_for_result()
{
	System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	System::Windows::Forms::PictureBox^  pictureBox1;

	tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
	pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
	pictureBox2_Result = (gcnew System::Windows::Forms::PictureBox());
	tableLayoutPanel1->SuspendLayout();
	SuspendLayout();
	// 
	// tableLayoutPanel1
	// 
	tableLayoutPanel1->ColumnCount = 2;
	tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		30.4945F)));
	tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		69.50549F)));
	tableLayoutPanel1->Controls->Add( pictureBox1, 0, 0);
	tableLayoutPanel1->Controls->Add(pictureBox2_Result, 1, 0);
	tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
	tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
	tableLayoutPanel1->Name = L"tableLayoutPanel1";
	tableLayoutPanel1->RowCount = 1;
	tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
	tableLayoutPanel1->Size = System::Drawing::Size(728, 398);
	tableLayoutPanel1->TabIndex = 0;
	// 
	// pictureBox1
	// 
	pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
	pictureBox1->Location = System::Drawing::Point(3, 3);
	pictureBox1->Name = L"pictureBox1";
	pictureBox1->Size = System::Drawing::Size(215, 392);
	pictureBox1->TabIndex = 0;
	pictureBox1->TabStop = false;
	pictureBox1->Image = Image::FromFile("leaf.gif");
	pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	// 
	// pictureBox2
	// 
	pictureBox2_Result->Dock = System::Windows::Forms::DockStyle::Fill;
	pictureBox2_Result->Location = System::Drawing::Point(224, 3);
	pictureBox2_Result->Name = L"pictureBox2";
	pictureBox2_Result->Size = System::Drawing::Size(501, 392);
	pictureBox2_Result->TabIndex = 1;
	pictureBox2_Result->TabStop = false;
	pictureBox2_Result->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
	panel5->Controls->Add(tableLayoutPanel1);
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	GC::Collect();
	panel5->Controls->Clear();
	panel5->BackgroundImage = nullptr;
	panelLeft->Height = Result_button->Height;
	panelLeft->Top = Result_button->Top;
	Draw_Controls_for_result();
	System::String ^executable_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);
	if (System::IO::File::Exists(executable_path + "\\" + "cropped_disease.jpg"))
	{
		pictureBox2_Result->Image = Image::FromFile(executable_path + "\\" + "cropped_disease.jpg");
		pictureBox2_Result->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		Display_result();
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Please choose an image");
	}
}

void Display_result()
{
	System::String ^executable_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);
	System::String ^fullPath = executable_path + "/py";
	Console::WriteLine(fullPath);
	ProcessStartInfo ^psi = gcnew ProcessStartInfo();
	psi->FileName = System::IO::Path::GetFileName(fullPath);
	psi->WorkingDirectory = System::IO::Path::GetDirectoryName(fullPath);
	psi->Arguments = "label_image.py --graph " + "\"" + executable_path + "\\disease_detection_model.pb" + "\"" + " --labels " + "\"" + executable_path + "\\disease_labels.txt" + "\"" + " --image " + "\"" + executable_path + "\\cropped_disease.jpg" + "\"" + " --num_top_predictions 1";
	Console::WriteLine(psi->Arguments);
	psi->WindowStyle = ProcessWindowStyle::Maximized;
	psi->UseShellExecute = false;
	psi->CreateNoWindow = false; ///ToDO: set this to true at release
	psi->RedirectStandardError = true; 
	psi->RedirectStandardOutput = true;

	Process ^Disease_Recognition_Process = gcnew Process();
	Disease_Recognition_Process->StartInfo = psi;
	Disease_Recognition_Process->EnableRaisingEvents = true;
	Disease_Recognition_Process->ErrorDataReceived += gcnew DataReceivedEventHandler(this, &Entry_Form::OutputDataReceived);
	Disease_Recognition_Process->OutputDataReceived += gcnew DataReceivedEventHandler(this, &Entry_Form::OutputDataReceived);
	Disease_Recognition_Process->Start();
	Disease_Recognition_Process->BeginErrorReadLine();
	Disease_Recognition_Process->BeginOutputReadLine();
}

delegate void Deligateupdate(System::String^ value);
delegate void ColorUpdate(System::Drawing::Color color);
delegate void warningimage(System::Drawing::Image^ warningimaeg);

void Labelupdate(System::String^ value)
{
	Final_Disease_Label->Text = value;
}

void LabelColorupdate(System::Drawing::Color color)
{
	label1_capture->ForeColor = color;
}

void WarningImage(System::Drawing::Image^ warningimage)
{
	pictureBox2_Result->Image = warningimage;
}

private: void OutputDataReceived(Object^ sender, DataReceivedEventArgs^ e)
{
	if (e->Data != nullptr) //Python output 
	{
		if (e->Data->Contains("=")) //my output has = then continue
		{
			System::String ^ x, ^y;
			if (e->Data->Contains("="))
			{
				x = e->Data->Split('=')[1]; // (studentname = "0.50252") split where = is there 
				y = e->Data->Split('=')[0]; // (studentname = "0.50252") split where = is there 
			}

			if ((x->Length > 0) && (y->Length > 0))
			{
				if (x->Contains("\""))    // remove " " from "0.50252")
					x = x->Replace('"', ' ');

				if (y->Contains("("))    // remove  ( 
					y = y->Replace('(', ' ');

				x = x->TrimEnd()->Substring(0, x->Length - 1); // remove ) last bracket
				float value = Convert::ToSingle(x);

				if (y != "Healthy Leaf")
				{
					Console::WriteLine(e->Data);
					updateDelgate^ uD = gcnew updateDelgate(this, &Entry_Form::Labelupdate);
					updateColor^ uC = gcnew updateColor(this, &Entry_Form::LabelColorupdate);
					warningimage^ WI = gcnew warningimage(this, &Entry_Form::WarningImage);
					this->Invoke(uD, y);
					this->Invoke(uC, Color::Aqua);
					this->Invoke(WI, Image::FromFile("diseased_leaf_warning.jpg"));
				}
				else
				{
					Console::WriteLine(e->Data);
					updateDelgate^ updatedelegate = gcnew updateDelgate(this, &Entry_Form::Labelupdate);
					updateColor^ updatecolor = gcnew updateColor(this, &Entry_Form::LabelColorupdate);
					warningimage^ WI = gcnew warningimage(this, &Entry_Form::WarningImage);
					this->Invoke(updatedelegate, "Healthy Leaf");
					this->Invoke(updatecolor, Color::Red);
					this->Invoke(WI, Image::FromFile("Healthy_leaf.jpg"));
				}
			}
		}
	}
}

#pragma endregion

#pragma region Details

	 System::Windows::Forms::Label^  Disease_Label;
	 System::Windows::Forms::Label^  Cure_Label;
void Draw_Controls_for_Details() 
{
	System::Windows::Forms::Panel^  panel1;
	System::Windows::Forms::Panel^  panel2;
	System::Windows::Forms::Label^  label1;
	System::Windows::Forms::Label^  label2;
	System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;

	panel1 = (gcnew System::Windows::Forms::Panel());
	Disease_Label = (gcnew System::Windows::Forms::Label());
	label1 = (gcnew System::Windows::Forms::Label());
	panel2 = (gcnew System::Windows::Forms::Panel());
	Cure_Label = (gcnew System::Windows::Forms::Label());
	label2 = (gcnew System::Windows::Forms::Label());
	tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
	panel1->SuspendLayout();
	panel2->SuspendLayout();
	tableLayoutPanel1->SuspendLayout();
	SuspendLayout();
	// 
	// panel1
	// 
	panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
	panel1->BackColor = System::Drawing::Color::Silver;
	panel1->Controls->Add(Disease_Label);
	panel1->Controls->Add(label1);
	panel1->Location = System::Drawing::Point(53, 21);
	panel1->Name = L"panel1";
	panel1->Size = System::Drawing::Size(258, 355);
	panel1->TabIndex = 0;
	// 
	// Disease_Label
	// 
	Disease_Label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	Disease_Label->ForeColor = System::Drawing::Color::Red;
	Disease_Label->Location = System::Drawing::Point(18, 81);
	Disease_Label->Name = L"Disease_Label";
	Disease_Label->Size = System::Drawing::Size(221, 250);
	Disease_Label->TabIndex = 2;
	Disease_Label->Text = L"Disease 1";
	Disease_Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// label1
	// 
	label1->Anchor = System::Windows::Forms::AnchorStyles::None;
	label1->AutoSize = true;
	label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	label1->ForeColor = System::Drawing::Color::Red;
	label1->Location = System::Drawing::Point(47, 44);
	label1->Name = L"label1";
	label1->Size = System::Drawing::Size(175, 25);
	label1->TabIndex = 0;
	label1->Text = L"Possible disease";
	// 
	// panel2
	// 
	panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
	panel2->BackColor = System::Drawing::Color::Silver;
	panel2->Controls->Add(Cure_Label);
	panel2->Controls->Add(label2);
	panel2->Location = System::Drawing::Point(417, 21);
	panel2->Name = L"panel2";
	panel2->Size = System::Drawing::Size(258, 355);
	panel2->TabIndex = 1;
	// 
	// Cure_Label
	// 
	Cure_Label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	Cure_Label->ForeColor = System::Drawing::Color::Green;
	Cure_Label->Location = System::Drawing::Point(18, 81);
	Cure_Label->Name = L"Cure_Label";
	Cure_Label->Size = System::Drawing::Size(221, 250);
	Cure_Label->TabIndex = 9;
	Cure_Label->Text = L"Cure 1";
	Cure_Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// label2
	// 
	label2->Anchor = System::Windows::Forms::AnchorStyles::None;
	label2->AutoSize = true;
	label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	label2->ForeColor = System::Drawing::Color::Green;
	label2->Location = System::Drawing::Point(51, 44);
	label2->Name = L"label2";
	label2->Size = System::Drawing::Size(147, 25);
	label2->TabIndex = 0;
	label2->Text = L"Possible Cure";
	// 
	// tableLayoutPanel1
	// 
	tableLayoutPanel1->ColumnCount = 2;
	tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		50)));
	tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		50)));
	tableLayoutPanel1->Controls->Add(panel2, 1, 0);
	tableLayoutPanel1->Controls->Add(panel1, 0, 0);
	tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
	tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
	tableLayoutPanel1->Name = L"tableLayoutPanel1";
	tableLayoutPanel1->RowCount = 1;
	tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
	tableLayoutPanel1->Size = System::Drawing::Size(728, 398);
	tableLayoutPanel1->TabIndex = 2;
	panel5->Controls->Add(tableLayoutPanel1);
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Controls->Clear();
	panel5->BackgroundImage = nullptr;
	panelLeft->Height = Details_button->Height;
	panelLeft->Top = Details_button->Top;
	Draw_Controls_for_Details();
	Disease_Label->Text = Final_Disease_Label->Text;
	Database_Details();
}

void Database_Details()
{
	System::String^ constring = L"Data Source = 127.0.0.1; User ID = root; Password = root";
	MySqlConnection^ ConDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ Command = gcnew MySqlCommand("SELECT * FROM `database`.`leafdatabase` WHERE `leafdiseasename`='" + Final_Disease_Label->Text + "';", ConDatabase);
	MySqlDataReader^ dreader;
	try
	{
		ConDatabase->Open();
		dreader = Command->ExecuteReader();

		dreader->Read();		
		Cure_Label->Text = (dreader->GetString(1));		
	}
	catch (System::Exception^ ex)
	{ 
		MessageBox::Show(ex->Message);
	}
}
#pragma endregion

private: System::Void Help_Click(System::Object^  sender, System::EventArgs^  e) {
	Help_Form^ helpform = gcnew Help_Form();
	helpform->ShowDialog();
}

private: System::Void Close_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

private: System::Void Home_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Controls->Clear();
	panel5->BackgroundImage = Image::FromFile("Enter_Screen.jpg");
	panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
}

};

}