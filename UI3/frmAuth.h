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

	protected:
	private: System::ComponentModel::Container^ components;
#pragma endregion Kernel

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->SuspendLayout();
			   // 
			   // frmAuth
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				   static_cast<System::Int32>(static_cast<System::Byte>(185)));
			   this->ClientSize = System::Drawing::Size(1100, 810);
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
			   this->ResumeLayout(false);

		   }
#pragma endregion

#pragma region Fields
	public:

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


#pragma endregion Voids

#pragma region ProgerVods
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
