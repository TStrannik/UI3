#include <Windows.h>
#include "frmSub1.h"
#include "frmSub2.h"

#pragma once

namespace UI3 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class frmAuth : public System::Windows::Forms::Form
	{
#pragma region Kernel
	public:		frmAuth(void) { InitializeComponent(); }
	protected: ~frmAuth()	  { if (components) delete components; }
	private: System::Windows::Forms::Panel^ pblAuth;
	private: System::Windows::Forms::Label^ lblHeader;
	private: System::Windows::Forms::Panel^ pnlContent;
	private: System::Windows::Forms::Panel^ pnlBreadcrumb;

	private: System::Windows::Forms::Button^ button1;
	private: CLUI::cluiTextBox^ cluiTextBox4;
	private: CLUI::cluiTextBox^ cluiTextBox3;
	private: CLUI::cluiTextBox^ cluiTextBox2;


	private: System::Windows::Forms::Panel^ pnlBreadcrumbs;
	private: System::Windows::Forms::PictureBox^ pic1;

	private: System::Windows::Forms::PictureBox^ pic5;
	private: System::Windows::Forms::PictureBox^ pic4;
	private: System::Windows::Forms::PictureBox^ pic3;
	private: System::Windows::Forms::PictureBox^ pic2;
	private: System::ComponentModel::Container^ components;
#pragma endregion Kernel

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->pblAuth = (gcnew System::Windows::Forms::Panel());
			   this->lblHeader = (gcnew System::Windows::Forms::Label());
			   this->cluiTextBox4 = (gcnew CLUI::cluiTextBox());
			   this->cluiTextBox3 = (gcnew CLUI::cluiTextBox());
			   this->cluiTextBox2 = (gcnew CLUI::cluiTextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->pnlContent = (gcnew System::Windows::Forms::Panel());
			   this->pnlBreadcrumb = (gcnew System::Windows::Forms::Panel());
			   this->pnlBreadcrumbs = (gcnew System::Windows::Forms::Panel());
			   this->pic5 = (gcnew System::Windows::Forms::PictureBox());
			   this->pic4 = (gcnew System::Windows::Forms::PictureBox());
			   this->pic3 = (gcnew System::Windows::Forms::PictureBox());
			   this->pic2 = (gcnew System::Windows::Forms::PictureBox());
			   this->pic1 = (gcnew System::Windows::Forms::PictureBox());
			   this->pblAuth->SuspendLayout();
			   this->pnlBreadcrumb->SuspendLayout();
			   this->pnlBreadcrumbs->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pblAuth
			   // 
			   this->pblAuth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				   static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->pblAuth->Controls->Add(this->lblHeader);
			   this->pblAuth->Controls->Add(this->cluiTextBox4);
			   this->pblAuth->Controls->Add(this->cluiTextBox3);
			   this->pblAuth->Controls->Add(this->cluiTextBox2);
			   this->pblAuth->Controls->Add(this->button1);
			   this->pblAuth->Dock = System::Windows::Forms::DockStyle::Right;
			   this->pblAuth->Location = System::Drawing::Point(550, 0);
			   this->pblAuth->Name = L"pblAuth";
			   this->pblAuth->Size = System::Drawing::Size(550, 810);
			   this->pblAuth->TabIndex = 0;
			   this->pblAuth->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::pblAuth_MouseDown);
			   this->pblAuth->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::pblAuth_MouseMove);
			   this->pblAuth->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::pblAuth_MouseUp);
			   // 
			   // lblHeader
			   // 
			   this->lblHeader->AutoSize = true;
			   this->lblHeader->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->lblHeader->ForeColor = System::Drawing::Color::White;
			   this->lblHeader->Location = System::Drawing::Point(6, 3);
			   this->lblHeader->Name = L"lblHeader";
			   this->lblHeader->Size = System::Drawing::Size(117, 29);
			   this->lblHeader->TabIndex = 1;
			   this->lblHeader->Text = L"First form";
			   this->lblHeader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->lblHeader->Visible = false;
			   // 
			   // cluiTextBox4
			   // 
			   this->cluiTextBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				   static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->cluiTextBox4->BorderRadius = 10;
			   this->cluiTextBox4->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->cluiTextBox4->ColorEnterBord = System::Drawing::Color::White;
			   this->cluiTextBox4->ColorEnterText = System::Drawing::Color::White;
			   this->cluiTextBox4->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->cluiTextBox4->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)),
				   static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			   this->cluiTextBox4->ColorLeaveText = System::Drawing::Color::White;
			   this->cluiTextBox4->ColorWrongBack = System::Drawing::Color::LightCoral;
			   this->cluiTextBox4->ColorWrongBord = System::Drawing::Color::Red;
			   this->cluiTextBox4->ColorWrongText = System::Drawing::Color::Black;
			   this->cluiTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cluiTextBox4->ForeColor = System::Drawing::Color::White;
			   this->cluiTextBox4->Location = System::Drawing::Point(112, 373);
			   this->cluiTextBox4->Name = L"cluiTextBox4";
			   this->cluiTextBox4->PasswordBox = true;
			   this->cluiTextBox4->PasswordChar = '*';
			   this->cluiTextBox4->PlaceHolder = L"Enter your password";
			   this->cluiTextBox4->ShowPassword = false;
			   this->cluiTextBox4->Size = System::Drawing::Size(320, 36);
			   this->cluiTextBox4->TabIndex = 7;
			   // 
			   // cluiTextBox3
			   // 
			   this->cluiTextBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				   static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->cluiTextBox3->BorderRadius = 10;
			   this->cluiTextBox3->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->cluiTextBox3->ColorEnterBord = System::Drawing::Color::White;
			   this->cluiTextBox3->ColorEnterText = System::Drawing::Color::White;
			   this->cluiTextBox3->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->cluiTextBox3->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)),
				   static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			   this->cluiTextBox3->ColorLeaveText = System::Drawing::Color::White;
			   this->cluiTextBox3->ColorWrongBack = System::Drawing::Color::LightCoral;
			   this->cluiTextBox3->ColorWrongBord = System::Drawing::Color::Red;
			   this->cluiTextBox3->ColorWrongText = System::Drawing::Color::Black;
			   this->cluiTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cluiTextBox3->ForeColor = System::Drawing::Color::White;
			   this->cluiTextBox3->Location = System::Drawing::Point(112, 468);
			   this->cluiTextBox3->Name = L"cluiTextBox3";
			   this->cluiTextBox3->PasswordBox = false;
			   this->cluiTextBox3->PasswordChar = '*';
			   this->cluiTextBox3->PlaceHolder = L"Your e-mail goes here";
			   this->cluiTextBox3->ShowPassword = false;
			   this->cluiTextBox3->Size = System::Drawing::Size(320, 36);
			   this->cluiTextBox3->TabIndex = 5;
			   // 
			   // cluiTextBox2
			   // 
			   this->cluiTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				   static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->cluiTextBox2->BorderRadius = 10;
			   this->cluiTextBox2->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->cluiTextBox2->ColorEnterBord = System::Drawing::Color::White;
			   this->cluiTextBox2->ColorEnterText = System::Drawing::Color::White;
			   this->cluiTextBox2->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->cluiTextBox2->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)),
				   static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			   this->cluiTextBox2->ColorLeaveText = System::Drawing::Color::White;
			   this->cluiTextBox2->ColorWrongBack = System::Drawing::Color::LightCoral;
			   this->cluiTextBox2->ColorWrongBord = System::Drawing::Color::Red;
			   this->cluiTextBox2->ColorWrongText = System::Drawing::Color::Black;
			   this->cluiTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cluiTextBox2->ForeColor = System::Drawing::Color::White;
			   this->cluiTextBox2->Location = System::Drawing::Point(112, 283);
			   this->cluiTextBox2->Name = L"cluiTextBox2";
			   this->cluiTextBox2->PasswordBox = false;
			   this->cluiTextBox2->PasswordChar = '*';
			   this->cluiTextBox2->PlaceHolder = L"Enter your full name";
			   this->cluiTextBox2->ShowPassword = false;
			   this->cluiTextBox2->Size = System::Drawing::Size(320, 36);
			   this->cluiTextBox2->TabIndex = 3;
			   // 
			   // button1
			   // 
			   this->button1->FlatAppearance->BorderSize = 0;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Location = System::Drawing::Point(455, 3);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(92, 48);
			   this->button1->TabIndex = 2;
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &frmAuth::button1_Click);
			   // 
			   // pnlContent
			   // 
			   this->pnlContent->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pnlContent->Location = System::Drawing::Point(0, 0);
			   this->pnlContent->Name = L"pnlContent";
			   this->pnlContent->Size = System::Drawing::Size(550, 710);
			   this->pnlContent->TabIndex = 2;
			   this->pnlContent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAuth::pnlContent_Paint);
			   // 
			   // pnlBreadcrumb
			   // 
			   this->pnlBreadcrumb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				   static_cast<System::Int32>(static_cast<System::Byte>(185)));
			   this->pnlBreadcrumb->Controls->Add(this->pnlBreadcrumbs);
			   this->pnlBreadcrumb->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->pnlBreadcrumb->Location = System::Drawing::Point(0, 710);
			   this->pnlBreadcrumb->Name = L"pnlBreadcrumb";
			   this->pnlBreadcrumb->Size = System::Drawing::Size(550, 100);
			   this->pnlBreadcrumb->TabIndex = 2;
			   // 
			   // pnlBreadcrumbs
			   // 
			   this->pnlBreadcrumbs->Controls->Add(this->pic5);
			   this->pnlBreadcrumbs->Controls->Add(this->pic4);
			   this->pnlBreadcrumbs->Controls->Add(this->pic3);
			   this->pnlBreadcrumbs->Controls->Add(this->pic2);
			   this->pnlBreadcrumbs->Controls->Add(this->pic1);
			   this->pnlBreadcrumbs->Location = System::Drawing::Point(215, 36);
			   this->pnlBreadcrumbs->Name = L"pnlBreadcrumbs";
			   this->pnlBreadcrumbs->Size = System::Drawing::Size(120, 24);
			   this->pnlBreadcrumbs->TabIndex = 2;
			   // 
			   // pic5
			   // 
			   this->pic5->Dock = System::Windows::Forms::DockStyle::Left;
			   this->pic5->Location = System::Drawing::Point(96, 0);
			   this->pic5->Name = L"pic5";
			   this->pic5->Size = System::Drawing::Size(24, 24);
			   this->pic5->TabIndex = 7;
			   this->pic5->TabStop = false;
			   this->pic5->Click += gcnew System::EventHandler(this, &frmAuth::pic5_Click);
			   this->pic5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAuth::pic5_Paint);
			   // 
			   // pic4
			   // 
			   this->pic4->Dock = System::Windows::Forms::DockStyle::Left;
			   this->pic4->Location = System::Drawing::Point(72, 0);
			   this->pic4->Name = L"pic4";
			   this->pic4->Size = System::Drawing::Size(24, 24);
			   this->pic4->TabIndex = 6;
			   this->pic4->TabStop = false;
			   this->pic4->Click += gcnew System::EventHandler(this, &frmAuth::pic4_Click);
			   this->pic4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAuth::pic4_Paint);
			   // 
			   // pic3
			   // 
			   this->pic3->Dock = System::Windows::Forms::DockStyle::Left;
			   this->pic3->Location = System::Drawing::Point(48, 0);
			   this->pic3->Name = L"pic3";
			   this->pic3->Size = System::Drawing::Size(24, 24);
			   this->pic3->TabIndex = 5;
			   this->pic3->TabStop = false;
			   this->pic3->Click += gcnew System::EventHandler(this, &frmAuth::pic3_Click);
			   this->pic3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAuth::pic3_Paint);
			   // 
			   // pic2
			   // 
			   this->pic2->Dock = System::Windows::Forms::DockStyle::Left;
			   this->pic2->Location = System::Drawing::Point(24, 0);
			   this->pic2->Name = L"pic2";
			   this->pic2->Size = System::Drawing::Size(24, 24);
			   this->pic2->TabIndex = 4;
			   this->pic2->TabStop = false;
			   this->pic2->Click += gcnew System::EventHandler(this, &frmAuth::pic2_Click);
			   this->pic2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAuth::pic2_Paint);
			   // 
			   // pic1
			   // 
			   this->pic1->Dock = System::Windows::Forms::DockStyle::Left;
			   this->pic1->Location = System::Drawing::Point(0, 0);
			   this->pic1->Name = L"pic1";
			   this->pic1->Size = System::Drawing::Size(24, 24);
			   this->pic1->TabIndex = 3;
			   this->pic1->TabStop = false;
			   this->pic1->Click += gcnew System::EventHandler(this, &frmAuth::pic1_Click);
			   this->pic1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAuth::pic1_Paint);
			   // 
			   // frmAuth
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				   static_cast<System::Int32>(static_cast<System::Byte>(185)));
			   this->ClientSize = System::Drawing::Size(1100, 810);
			   this->Controls->Add(this->pnlContent);
			   this->Controls->Add(this->pnlBreadcrumb);
			   this->Controls->Add(this->pblAuth);
			   this->Font = (gcnew System::Drawing::Font(L"NanumGothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			   this->Name = L"frmAuth";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"frmAuth";
			   this->Load += gcnew System::EventHandler(this, &frmAuth::frmAuth_Load);
			   this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAuth::frmAuth_Paint);
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &frmAuth::frmAuth_KeyDown);
			   this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::frmAuth_MouseDown);
			   this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::frmAuth_MouseMove);
			   this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::frmAuth_MouseUp);
			   this->pblAuth->ResumeLayout(false);
			   this->pblAuth->PerformLayout();
			   this->pnlBreadcrumb->ResumeLayout(false);
			   this->pnlBreadcrumbs->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

#pragma region Fields
	public:
		Form^ activeForm;

	private:
		Point mouseOffset_;
		bool isMouseDown_ = false;
		int xOffset_, yOffset_;

		unsigned int BCSelN_;
#pragma endregion Fields

#pragma region Voids

	private:
		System::Void frmAuth_Load(System::Object^ sender, System::EventArgs^ e) {
			SetStyle(
				ControlStyles::AllPaintingInWmPaint |
				ControlStyles::OptimizedDoubleBuffer |
				ControlStyles::ResizeRedraw |
				ControlStyles::SupportsTransparentBackColor |
				ControlStyles::UserPaint, true
			);
			DoubleBuffered = true;

			activeForm = nullptr;
			OpenChildForm(gcnew frmSub1(), sender);
			BCSelN_ = 1;
		}
		System::Void frmAuth_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
			path->FillMode = System::Drawing::Drawing2D::FillMode::Alternate;
			int r = 10; int w = this->Width; int h = this->Height;

			path->StartFigure();
			path->AddArc(0, 0, r, r, 180, 90);  path->AddArc(w - r, 0, r, r, 270, 90);
			path->AddArc(w - r, h - r, r, r, 0, 90);	path->AddArc(0, h - r, r, r, 90, 90);
			path->CloseFigure();

			this->Region = gcnew Drawing::Region(path);
		}
		System::Void frmAuth_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyCode == Keys::Escape) Close();
		}
		System::Void frmAuth_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMD(sender, e); }
		System::Void frmAuth_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMM(sender, e); }
		System::Void frmAuth_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)   { formDrugMU(sender, e); }

		System::Void pblAuth_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMD(sender, e); }
		System::Void pblAuth_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMM(sender, e); }
		System::Void pblAuth_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)	  { formDrugMU(sender, e); }

		System::Void pic1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) { refresh_Breadcrumb(sender, e, 1); }
		System::Void pic2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) { refresh_Breadcrumb(sender, e, 2); }
		System::Void pic3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) { refresh_Breadcrumb(sender, e, 3); }
		System::Void pic4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) { refresh_Breadcrumb(sender, e, 4); }
		System::Void pic5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) { refresh_Breadcrumb(sender, e, 5); }

		System::Void pic1_Click(System::Object^ sender, System::EventArgs^ e) { setPic(1, sender); }
		System::Void pic2_Click(System::Object^ sender, System::EventArgs^ e) { setPic(2, sender); }
		System::Void pic3_Click(System::Object^ sender, System::EventArgs^ e) { setPic(3, sender); }
		System::Void pic4_Click(System::Object^ sender, System::EventArgs^ e) { setPic(4, sender); }
		System::Void pic5_Click(System::Object^ sender, System::EventArgs^ e) { setPic(5, sender); }


		System::Void pnlContent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		}


		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { Close(); }

#pragma endregion Voids

#pragma region ProgerVods
	public:
		void setPic(int n, System::Object^ sender) {
			BCSelN_ = n;

			Form^ frm;

			if      (n == 1) frm = gcnew frmSub1();
			else if (n == 2) frm = gcnew frmSub2();
			else			 frm = gcnew frmSub1(); // frmSub0 "Error" \ space \ holder

			OpenChildForm(frm, sender);
			pnlBreadcrumbs->Refresh(); 
		}
		void refresh_Breadcrumb(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e, unsigned int n) {
			Graphics^ g = e->Graphics;
			Drawing2D::GraphicsPath^ gp = gcnew Drawing2D::GraphicsPath();
			int w = Width - 1, h = Height - 1;

			Pen^ PenNrm = gcnew Pen(Color::FromArgb(255, 83, 201, 191), 1.0f);
			Pen^ PenSel = gcnew Pen(Color::FromArgb(255, 68, 164, 154), 2.0f);

			Brush^ BrushNrm = gcnew SolidBrush(Color::FromArgb(255, 87, 219, 206));
			Brush^ BrushSel = gcnew SolidBrush(Color::FromArgb(255, 87, 219, 206));

			if (BCSelN_ == n) {
				g->DrawArc(PenSel, 4, 4, 17, 17, 0, 360);
				gp->AddArc(4, 4, 17, 17, 0, 360);
				g->FillPath(BrushSel, gp);
			}
			else {
				g->DrawArc(PenNrm, 6, 6, 12, 12, 0, 360);
				gp->AddArc(6, 6, 12, 12, 0, 360);
				g->FillPath(BrushNrm, gp);
			}
		}
		void OpenChildForm(Form^ childForm, System::Object^ btnSender) {

			if (activeForm != nullptr) activeForm->Close();


			//AcievateButton()

			activeForm = childForm;
			childForm->TopLevel = false;
			childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			childForm->Dock = DockStyle::Fill;
			this->pnlContent->Controls->Add(childForm);
			this->pnlContent->Tag = childForm;
			childForm->BringToFront();
			childForm->Show();

			lblHeader->Text = childForm->Text;
		}

		void formDrugMD(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == Windows::Forms::MouseButtons::Left) {
				xOffset_ = -e->X - SystemInformation::FrameBorderSize.Width + 4;
				yOffset_ = -e->Y - SystemInformation::FrameBorderSize.Height + 4;
				mouseOffset_ = System::Drawing::Point(xOffset_, yOffset_);
				isMouseDown_ = true;
			}
		}
		void formDrugMM(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (isMouseDown_) {
				Point mousePos = Control::MousePosition;
				mousePos.Offset(mouseOffset_.X, mouseOffset_.Y);
				Location = mousePos;
			}
		}
		void formDrugMU(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == Windows::Forms::MouseButtons::Left) { isMouseDown_ = false; }
		}

		


#pragma endregion ProgerVods
	

	
	};
}
