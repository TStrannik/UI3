#pragma region Desctiption
//////////////////////////////////////////////////
///                                            ///
/// /// ÍÓÚÓ‡ˇ ÔÓÏÓÊÂÚ ‚‡Ï ÔËÌˇÚ¸            ///
/// ÏÓ˛ œ‡‚‰Û                                 ///
///                                            ///
///  1) Õ≈ œ€“¿…“≈—¡ ◊“Œ“0                     ///
///  N3Ã≈Õ»“‹!                                 ///
///                                            ///
///  2) ƒ”Ã¿N“3 “ŒÀ‹ Œ Œ —≈¡≈!                 ///
///                                            ///
///  3) –” »                                   ///
///                                            ///
///  4) ƒŒ—ÃŒ“?                                ///
///                                            ///
//////////////////////////////////////////////////
#pragma endregion Desctiption

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
	private: System::Windows::Forms::Panel^ pnlAuth;
	protected:

	private: System::Windows::Forms::Label^ lblHeader;

	private: System::Windows::Forms::Panel^ pnlBreadcrumb;

	private: System::Windows::Forms::Button^ button1;
	private: CLUI::cluiTextBox^ cluiTextPassword;
	private: CLUI::cluiTextBox^ cluiTextEmail;


	private: CLUI::cluiTextBox^ cluiTextFullName;



	private: System::Windows::Forms::Panel^ pnlBreadcrumbs;
	private: System::Windows::Forms::PictureBox^ pic1;

	private: System::Windows::Forms::PictureBox^ pic5;
	private: System::Windows::Forms::PictureBox^ pic4;
	private: System::Windows::Forms::PictureBox^ pic3;
	private: System::Windows::Forms::PictureBox^ pic2;
	private: System::Windows::Forms::Panel^ pnlContent;
	private: System::Windows::Forms::Timer^ tmrCrutch;
	private: System::Windows::Forms::Label^ lblFullName;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::Label^ lblEMail;
	private: System::Windows::Forms::CheckBox^ cbxAgree;


	private: System::ComponentModel::IContainer^ components;






#pragma endregion Kernel

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   this->pnlAuth = (gcnew System::Windows::Forms::Panel());
			   this->lblHeader = (gcnew System::Windows::Forms::Label());
			   this->cluiTextPassword = (gcnew CLUI::cluiTextBox());
			   this->cluiTextEmail = (gcnew CLUI::cluiTextBox());
			   this->cluiTextFullName = (gcnew CLUI::cluiTextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->pnlBreadcrumb = (gcnew System::Windows::Forms::Panel());
			   this->pnlBreadcrumbs = (gcnew System::Windows::Forms::Panel());
			   this->pic5 = (gcnew System::Windows::Forms::PictureBox());
			   this->pic4 = (gcnew System::Windows::Forms::PictureBox());
			   this->pic3 = (gcnew System::Windows::Forms::PictureBox());
			   this->pic2 = (gcnew System::Windows::Forms::PictureBox());
			   this->pic1 = (gcnew System::Windows::Forms::PictureBox());
			   this->pnlContent = (gcnew System::Windows::Forms::Panel());
			   this->tmrCrutch = (gcnew System::Windows::Forms::Timer(this->components));
			   this->lblFullName = (gcnew System::Windows::Forms::Label());
			   this->lblPassword = (gcnew System::Windows::Forms::Label());
			   this->lblEMail = (gcnew System::Windows::Forms::Label());
			   this->cbxAgree = (gcnew System::Windows::Forms::CheckBox());
			   this->pnlAuth->SuspendLayout();
			   this->pnlBreadcrumb->SuspendLayout();
			   this->pnlBreadcrumbs->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pnlAuth
			   // 
			   this->pnlAuth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				   static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->pnlAuth->Controls->Add(this->cbxAgree);
			   this->pnlAuth->Controls->Add(this->lblEMail);
			   this->pnlAuth->Controls->Add(this->lblPassword);
			   this->pnlAuth->Controls->Add(this->lblFullName);
			   this->pnlAuth->Controls->Add(this->lblHeader);
			   this->pnlAuth->Controls->Add(this->cluiTextPassword);
			   this->pnlAuth->Controls->Add(this->cluiTextEmail);
			   this->pnlAuth->Controls->Add(this->cluiTextFullName);
			   this->pnlAuth->Controls->Add(this->button1);
			   this->pnlAuth->Dock = System::Windows::Forms::DockStyle::Right;
			   this->pnlAuth->Location = System::Drawing::Point(700, 0);
			   this->pnlAuth->Name = L"pnlAuth";
			   this->pnlAuth->Size = System::Drawing::Size(700, 1025);
			   this->pnlAuth->TabIndex = 0;
			   this->pnlAuth->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAuth::pnlAuth_Paint);
			   this->pnlAuth->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::pblAuth_MouseDown);
			   this->pnlAuth->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::pblAuth_MouseMove);
			   this->pnlAuth->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::pblAuth_MouseUp);
			   // 
			   // lblHeader
			   // 
			   this->lblHeader->AutoSize = true;
			   this->lblHeader->BackColor = System::Drawing::Color::Transparent;
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
			   // cluiTextPassword
			   // 
			   this->cluiTextPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				   static_cast<System::Int32>(static_cast<System::Byte>(82)));
			   this->cluiTextPassword->BorderRadius = 10;
			   this->cluiTextPassword->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->cluiTextPassword->ColorEnterBord = System::Drawing::Color::White;
			   this->cluiTextPassword->ColorEnterText = System::Drawing::Color::White;
			   this->cluiTextPassword->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
			   this->cluiTextPassword->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)),
				   static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			   this->cluiTextPassword->ColorLeaveText = System::Drawing::Color::White;
			   this->cluiTextPassword->ColorWrongBack = System::Drawing::Color::LightCoral;
			   this->cluiTextPassword->ColorWrongBord = System::Drawing::Color::Red;
			   this->cluiTextPassword->ColorWrongText = System::Drawing::Color::Black;
			   this->cluiTextPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->cluiTextPassword->ForeColor = System::Drawing::Color::White;
			   this->cluiTextPassword->Location = System::Drawing::Point(103, 463);
			   this->cluiTextPassword->Name = L"cluiTextPassword";
			   this->cluiTextPassword->PasswordBox = true;
			   this->cluiTextPassword->PasswordChar = '*';
			   this->cluiTextPassword->PlaceHolder = L"Enter your password";
			   this->cluiTextPassword->ShowPassword = false;
			   this->cluiTextPassword->Size = System::Drawing::Size(487, 36);
			   this->cluiTextPassword->TabIndex = 7;
			   // 
			   // cluiTextEmail
			   // 
			   this->cluiTextEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				   static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->cluiTextEmail->BorderRadius = 10;
			   this->cluiTextEmail->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->cluiTextEmail->ColorEnterBord = System::Drawing::Color::White;
			   this->cluiTextEmail->ColorEnterText = System::Drawing::Color::White;
			   this->cluiTextEmail->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->cluiTextEmail->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)),
				   static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			   this->cluiTextEmail->ColorLeaveText = System::Drawing::Color::White;
			   this->cluiTextEmail->ColorWrongBack = System::Drawing::Color::LightCoral;
			   this->cluiTextEmail->ColorWrongBord = System::Drawing::Color::Red;
			   this->cluiTextEmail->ColorWrongText = System::Drawing::Color::Black;
			   this->cluiTextEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cluiTextEmail->ForeColor = System::Drawing::Color::White;
			   this->cluiTextEmail->Location = System::Drawing::Point(103, 577);
			   this->cluiTextEmail->Name = L"cluiTextEmail";
			   this->cluiTextEmail->PasswordBox = false;
			   this->cluiTextEmail->PasswordChar = '*';
			   this->cluiTextEmail->PlaceHolder = L"Your e-mail goes here";
			   this->cluiTextEmail->ShowPassword = false;
			   this->cluiTextEmail->Size = System::Drawing::Size(487, 36);
			   this->cluiTextEmail->TabIndex = 5;
			   // 
			   // cluiTextFullName
			   // 
			   this->cluiTextFullName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				   static_cast<System::Int32>(static_cast<System::Byte>(87)));
			   this->cluiTextFullName->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->cluiTextFullName->BorderRadius = 10;
			   this->cluiTextFullName->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->cluiTextFullName->ColorEnterBord = System::Drawing::Color::White;
			   this->cluiTextFullName->ColorEnterText = System::Drawing::Color::White;
			   this->cluiTextFullName->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				   static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			   this->cluiTextFullName->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)),
				   static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(116)));
			   this->cluiTextFullName->ColorLeaveText = System::Drawing::Color::White;
			   this->cluiTextFullName->ColorWrongBack = System::Drawing::Color::LightCoral;
			   this->cluiTextFullName->ColorWrongBord = System::Drawing::Color::Red;
			   this->cluiTextFullName->ColorWrongText = System::Drawing::Color::Black;
			   this->cluiTextFullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->cluiTextFullName->ForeColor = System::Drawing::Color::White;
			   this->cluiTextFullName->Location = System::Drawing::Point(102, 350);
			   this->cluiTextFullName->Name = L"cluiTextFullName";
			   this->cluiTextFullName->PasswordBox = false;
			   this->cluiTextFullName->PasswordChar = '*';
			   this->cluiTextFullName->PlaceHolder = L"Enter your full name";
			   this->cluiTextFullName->ShowPassword = false;
			   this->cluiTextFullName->Size = System::Drawing::Size(487, 36);
			   this->cluiTextFullName->TabIndex = 3;
			   // 
			   // button1
			   // 
			   this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->button1->BackColor = System::Drawing::Color::Transparent;
			   this->button1->FlatAppearance->BorderSize = 0;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Location = System::Drawing::Point(608, 0);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(92, 48);
			   this->button1->TabIndex = 2;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &frmAuth::button1_Click);
			   // 
			   // pnlBreadcrumb
			   // 
			   this->pnlBreadcrumb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				   static_cast<System::Int32>(static_cast<System::Byte>(185)));
			   this->pnlBreadcrumb->Controls->Add(this->pnlBreadcrumbs);
			   this->pnlBreadcrumb->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->pnlBreadcrumb->Location = System::Drawing::Point(0, 925);
			   this->pnlBreadcrumb->Name = L"pnlBreadcrumb";
			   this->pnlBreadcrumb->Size = System::Drawing::Size(700, 100);
			   this->pnlBreadcrumb->TabIndex = 2;
			   // 
			   // pnlBreadcrumbs
			   // 
			   this->pnlBreadcrumbs->Controls->Add(this->pic5);
			   this->pnlBreadcrumbs->Controls->Add(this->pic4);
			   this->pnlBreadcrumbs->Controls->Add(this->pic3);
			   this->pnlBreadcrumbs->Controls->Add(this->pic2);
			   this->pnlBreadcrumbs->Controls->Add(this->pic1);
			   this->pnlBreadcrumbs->Location = System::Drawing::Point(289, 36);
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
			   // pnlContent
			   // 
			   this->pnlContent->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pnlContent->Location = System::Drawing::Point(0, 0);
			   this->pnlContent->Name = L"pnlContent";
			   this->pnlContent->Size = System::Drawing::Size(700, 925);
			   this->pnlContent->TabIndex = 2;
			   // 
			   // tmrCrutch
			   // 
			   this->tmrCrutch->Enabled = true;
			   this->tmrCrutch->Tick += gcnew System::EventHandler(this, &frmAuth::tmrCrutch_Tick);
			   // 
			   // lblFullName
			   // 
			   this->lblFullName->AutoSize = true;
			   this->lblFullName->BackColor = System::Drawing::Color::Transparent;
			   this->lblFullName->Font = (gcnew System::Drawing::Font(L"NanumGothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFullName->ForeColor = System::Drawing::Color::White;
			   this->lblFullName->Location = System::Drawing::Point(99, 312);
			   this->lblFullName->Name = L"lblFullName";
			   this->lblFullName->Size = System::Drawing::Size(124, 24);
			   this->lblFullName->TabIndex = 8;
			   this->lblFullName->Text = L"FULL NAME";
			   // 
			   // lblPassword
			   // 
			   this->lblPassword->AutoSize = true;
			   this->lblPassword->BackColor = System::Drawing::Color::Transparent;
			   this->lblPassword->Font = (gcnew System::Drawing::Font(L"NanumGothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblPassword->ForeColor = System::Drawing::Color::White;
			   this->lblPassword->Location = System::Drawing::Point(99, 434);
			   this->lblPassword->Name = L"lblPassword";
			   this->lblPassword->Size = System::Drawing::Size(126, 24);
			   this->lblPassword->TabIndex = 9;
			   this->lblPassword->Text = L"PASSWORD";
			   // 
			   // lblEMail
			   // 
			   this->lblEMail->AutoSize = true;
			   this->lblEMail->BackColor = System::Drawing::Color::Transparent;
			   this->lblEMail->Font = (gcnew System::Drawing::Font(L"NanumGothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblEMail->ForeColor = System::Drawing::Color::White;
			   this->lblEMail->Location = System::Drawing::Point(99, 547);
			   this->lblEMail->Name = L"lblEMail";
			   this->lblEMail->Size = System::Drawing::Size(80, 24);
			   this->lblEMail->TabIndex = 10;
			   this->lblEMail->Text = L"E-MAIL";
			   // 
			   // cbxAgree
			   // 
			   this->cbxAgree->AutoSize = true;
			   this->cbxAgree->BackColor = System::Drawing::Color::Transparent;
			   this->cbxAgree->ForeColor = System::Drawing::Color::DimGray;
			   this->cbxAgree->Location = System::Drawing::Point(103, 633);
			   this->cbxAgree->Name = L"cbxAgree";
			   this->cbxAgree->Size = System::Drawing::Size(236, 25);
			   this->cbxAgree->TabIndex = 11;
			   this->cbxAgree->Text = L"i agree all statements in";
			   this->cbxAgree->UseVisualStyleBackColor = false;
			   // 
			   // frmAuth
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				   static_cast<System::Int32>(static_cast<System::Byte>(185)));
			   this->ClientSize = System::Drawing::Size(1400, 1025);
			   this->Controls->Add(this->pnlContent);
			   this->Controls->Add(this->pnlBreadcrumb);
			   this->Controls->Add(this->pnlAuth);
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
			   this->pnlAuth->ResumeLayout(false);
			   this->pnlAuth->PerformLayout();
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

			/// Repos on frmAuth_paint

			/*SetStyle(
				ControlStyles::AllPaintingInWmPaint |
				ControlStyles::OptimizedDoubleBuffer |
				ControlStyles::ResizeRedraw |
				ControlStyles::SupportsTransparentBackColor |
				ControlStyles::UserPaint, true
			);
			DoubleBuffered = true;*/

			/// TODO: block of circlement

			activeForm = nullptr;
			OpenChildForm(gcnew frmSub1(), sender);
			BCSelN_ = 1;

			
		}
		System::Void frmAuth_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			SetStyle(
				ControlStyles::AllPaintingInWmPaint |
				ControlStyles::OptimizedDoubleBuffer |
				ControlStyles::ResizeRedraw |
				ControlStyles::SupportsTransparentBackColor |
				ControlStyles::UserPaint, true
			);
			DoubleBuffered = true;
			ResizeRedraw = true;


			System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
			path->FillMode = System::Drawing::Drawing2D::FillMode::Alternate;
			int r = 16; int w = this->Width; int h = this->Height;

			path->StartFigure();
			path->AddArc(0, 0, r, r, 180, 90);  path->AddArc(w - r, 0, r, r, 270, 90);
			path->AddArc(w - r, h - r, r, r, 0, 90);	path->AddArc(0, h - r, r, r, 90, 90);
			path->CloseFigure();

			this->Region = gcnew Drawing::Region(path);


			int i = 2;
		}
		System::Void frmAuth_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyCode == Keys::Escape) Close();
		}
		System::Void frmAuth_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMD(sender, e); }
		System::Void frmAuth_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMM(sender, e); }
		System::Void frmAuth_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)   { formDrugMU(sender, e); }

		System::Void pnlAuth_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			LinearGradientBrush^ lgb =
				gcnew LinearGradientBrush(ClientRectangle,
					Color::FromArgb(255, 54, 76, 100),
					Color::FromArgb(255, 33, 45,  62),
					90.0f
				);
			g->FillRectangle(lgb, ClientRectangle);
		}
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

		System::Void tmrCrutch_Tick(System::Object^ sender, System::EventArgs^ e) { Invalidate(); tmrCrutch->Enabled = false; }

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
				Control^ cont = (Control^)sender;
				int xOffset = cont->Left; int yOffset = cont->Top;
				if (cont->Name == Name) { xOffset = 0; yOffset = 0; }
				xOffset_ = -e->X - SystemInformation::FrameBorderSize.Width + 4 - xOffset;
				yOffset_ = -e->Y - SystemInformation::FrameBorderSize.Height + 4 + yOffset;
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
