#include <Windows.h>

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
	private: System::ComponentModel::Container^ components;
#pragma endregion Kernel

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->pblAuth = (gcnew System::Windows::Forms::Panel());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->lblHeader = (gcnew System::Windows::Forms::Label());
			   this->pnlContent = (gcnew System::Windows::Forms::Panel());
			   this->pnlBreadcrumb = (gcnew System::Windows::Forms::Panel());
			   this->cluiTextBox2 = (gcnew CLUI::cluiTextBox());
			   this->cluiTextBox3 = (gcnew CLUI::cluiTextBox());
			   this->cluiTextBox4 = (gcnew CLUI::cluiTextBox());
			   this->pblAuth->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // pblAuth
			   // 
			   this->pblAuth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				   static_cast<System::Int32>(static_cast<System::Byte>(78)));
			   this->pblAuth->Controls->Add(this->cluiTextBox4);
			   this->pblAuth->Controls->Add(this->cluiTextBox3);
			   this->pblAuth->Controls->Add(this->cluiTextBox2);
			   this->pblAuth->Controls->Add(this->button1);
			   this->pblAuth->Controls->Add(this->lblHeader);
			   this->pblAuth->Dock = System::Windows::Forms::DockStyle::Right;
			   this->pblAuth->Location = System::Drawing::Point(550, 0);
			   this->pblAuth->Name = L"pblAuth";
			   this->pblAuth->Size = System::Drawing::Size(550, 810);
			   this->pblAuth->TabIndex = 0;
			   this->pblAuth->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::pblAuth_MouseDown);
			   this->pblAuth->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::pblAuth_MouseMove);
			   this->pblAuth->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmAuth::pblAuth_MouseUp);
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
			   // lblHeader
			   // 
			   this->lblHeader->AutoSize = true;
			   this->lblHeader->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->lblHeader->ForeColor = System::Drawing::Color::White;
			   this->lblHeader->Location = System::Drawing::Point(76, 104);
			   this->lblHeader->Name = L"lblHeader";
			   this->lblHeader->Size = System::Drawing::Size(393, 58);
			   this->lblHeader->TabIndex = 1;
			   this->lblHeader->Text = L"Plan your activities and control your\r\nprogress online";
			   this->lblHeader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // pnlContent
			   // 
			   this->pnlContent->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pnlContent->Location = System::Drawing::Point(0, 0);
			   this->pnlContent->Name = L"pnlContent";
			   this->pnlContent->Size = System::Drawing::Size(550, 710);
			   this->pnlContent->TabIndex = 2;
			   // 
			   // pnlBreadcrumb
			   // 
			   this->pnlBreadcrumb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				   static_cast<System::Int32>(static_cast<System::Byte>(185)));
			   this->pnlBreadcrumb->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->pnlBreadcrumb->Location = System::Drawing::Point(0, 710);
			   this->pnlBreadcrumb->Name = L"pnlBreadcrumb";
			   this->pnlBreadcrumb->Size = System::Drawing::Size(550, 100);
			   this->pnlBreadcrumb->TabIndex = 2;
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
#pragma endregion Fields

#pragma region Voids

	private:
		System::Void frmAuth_Load(System::Object^ sender, System::EventArgs^ e) {
			//
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


		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			Close();
		}

#pragma endregion Voids

#pragma region ProgerVods
	public:
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

		void OpenChildForm(Form^ childForm, System::Object^ btnSender) {
			if (ActiveForm != nullptr) {
				ActiveForm->Close();
			}
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

#pragma endregion ProgerVods
	
	
	};
}
