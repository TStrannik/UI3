#pragma once
#include <iostream>
#include <vector>	//?

const int CS_LEAVE = 0x00;
const int CS_ENTER = 0x01;
const int CS_HOVER = 0x02;
const int CS_WRONG = 0x03;


using namespace System;
using namespace System::Collections::Generic;
using namespace System::Text;
using namespace System::Threading::Tasks;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;

typedef enum { OnlyText, Password } fisting;


namespace CLUI {
	public ref class cluiTextBox : public System::Windows::Forms::UserControl
	{
#pragma region Fields


		

	public:

		//property List<fisting> BoxType;
		property bool	 PasswordBox;
		property wchar_t PasswordChar;
		property bool	 ShowPassword;
		property int     BorderRadius;
		property Color   ColorLeaveBack;
		property Color   ColorLeaveBord;
		property Color   ColorLeaveText;
		property Color   ColorEnterBack;
		property Color   ColorEnterBord;
		property Color   ColorEnterText;
		property Color   ColorWrongBack;
		property Color   ColorWrongBord;
		property Color   ColorWrongText;
		property String^ PlaceHolder;

	private:
		StringFormat^ SF = gcnew StringFormat;
		String^ CurrentDir = System::IO::Directory::GetCurrentDirectory();
		int UICompState;

	private: System::Windows::Forms::MaskedTextBox^ mtbBox;

		   String^ Password;

#pragma endregion Fields

#pragma region Kernel
	public:		cluiTextBox(void) { StartSet(); InitializeComponent(); } void StartSet();
	protected: ~cluiTextBox()	  { if (components) delete components; }
	private: System::Windows::Forms::TextBox^ txtBox;
	private: System::Windows::Forms::Label^ lblPH;
	private: System::Windows::Forms::Button^ btnEye;
	protected:

	protected:

	protected:
	private: System::ComponentModel::Container^ components;
#pragma endregion Kernel

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->txtBox = (gcnew System::Windows::Forms::TextBox());
			   this->lblPH = (gcnew System::Windows::Forms::Label());
			   this->btnEye = (gcnew System::Windows::Forms::Button());
			   this->mtbBox = (gcnew System::Windows::Forms::MaskedTextBox());
			   this->SuspendLayout();
			   // 
			   // txtBox
			   // 
			   this->txtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->txtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->txtBox->Location = System::Drawing::Point(73, 4);
			   this->txtBox->Name = L"txtBox";
			   this->txtBox->Size = System::Drawing::Size(20, 22);
			   this->txtBox->TabIndex = 0;
			   this->txtBox->TextChanged += gcnew System::EventHandler(this, &cluiTextBox::txtBox_TextChanged);
			   this->txtBox->GotFocus += gcnew System::EventHandler(this, &cluiTextBox::RemoveText);
			   this->txtBox->LostFocus += gcnew System::EventHandler(this, &cluiTextBox::AddText);
			   // 
			   // lblPH
			   // 
			   this->lblPH->AutoSize = true;
			   this->lblPH->BackColor = System::Drawing::Color::Transparent;
			   this->lblPH->Cursor = System::Windows::Forms::Cursors::IBeam;
			   this->lblPH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblPH->ForeColor = System::Drawing::Color::Gray;
			   this->lblPH->Location = System::Drawing::Point(3, 4);
			   this->lblPH->Margin = System::Windows::Forms::Padding(0, 0, 3, 0);
			   this->lblPH->Name = L"lblPH";
			   this->lblPH->Size = System::Drawing::Size(67, 24);
			   this->lblPH->TabIndex = 1;
			   this->lblPH->Text = L"Holder";
			   this->lblPH->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->lblPH->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &cluiTextBox::lblPH_MouseClick);
			   // 
			   // btnEye
			   // 
			   this->btnEye->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->btnEye->FlatAppearance->BorderSize = 0;
			   this->btnEye->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			   this->btnEye->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			   this->btnEye->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnEye->Location = System::Drawing::Point(125, 7);
			   this->btnEye->Name = L"btnEye";
			   this->btnEye->Size = System::Drawing::Size(30, 20);
			   this->btnEye->TabIndex = 2;
			   this->btnEye->UseVisualStyleBackColor = true;
			   this->btnEye->Click += gcnew System::EventHandler(this, &cluiTextBox::btnEye_Click);
			   this->btnEye->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &cluiTextBox::btnEye_Paint);
			   this->btnEye->MouseEnter += gcnew System::EventHandler(this, &cluiTextBox::btnEye_MouseEnter);
			   this->btnEye->MouseLeave += gcnew System::EventHandler(this, &cluiTextBox::btnEye_MouseLeave);
			   // 
			   // mtbBox
			   // 
			   this->mtbBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->mtbBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->mtbBox->Location = System::Drawing::Point(99, 5);
			   this->mtbBox->Name = L"mtbBox";
			   this->mtbBox->PasswordChar = '*';
			   this->mtbBox->Size = System::Drawing::Size(20, 22);
			   this->mtbBox->TabIndex = 0;
			   this->mtbBox->UseSystemPasswordChar = true;
			   this->mtbBox->TextChanged += gcnew System::EventHandler(this, &cluiTextBox::mtbBox_TextChanged);
			   this->mtbBox->GotFocus += gcnew System::EventHandler(this, &cluiTextBox::RemoveText);
			   this->mtbBox->LostFocus += gcnew System::EventHandler(this, &cluiTextBox::AddText);
			   // 
			   // cluiTextBox
			   // 
			   this->Controls->Add(this->lblPH);
			   this->Controls->Add(this->btnEye);
			   this->Controls->Add(this->txtBox);
			   this->Controls->Add(this->mtbBox);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Name = L"cluiTextBox";
			   this->Size = System::Drawing::Size(320, 36);
			   this->Load += gcnew System::EventHandler(this, &cluiTextBox::uiTextBox_Load);
			   this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &cluiTextBox::uiTextBox_Paint);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

#pragma region Voids
	private:
		System::Void uiTextBox_Load(System::Object^ sender, System::EventArgs^ e) {
			//int r = BorderRadius;
			//int mw = r < 10 ? 10 : r; int mh = 5;
			int mw = 0; int mh = 0;
			int eyeW = PasswordBox ? 20 : 0;

			txtBox->Left = mw; txtBox->Top = mh;
			txtBox->Width = Width - mw * 2 - eyeW - 2;
			txtBox->ForeColor = ForeColor;
			txtBox->Visible = !PasswordBox;

			mtbBox->Left = mw; mtbBox->Top = mh;
			mtbBox->Width = Width - mw * 2 - eyeW - 2;
			mtbBox->PasswordChar = PasswordChar;
			mtbBox->ForeColor = ForeColor;
			mtbBox->Visible = PasswordBox;

			lblPH->Left = txtBox->Left + 1 - 4; lblPH->Top = txtBox->Top;
			lblPH->Text = PlaceHolder;

			btnEye->Width = 30; btnEye->Height = 20;
			btnEye->Left = Width - mw - btnEye->Width; btnEye->Top = mh;
			btnEye->Visible = PasswordBox;

			AddText(sender, e);
		}
		System::Void uiTextBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
			int w = Width - 1, h = Height - 1;
			Pen^ ebdPen = gcnew Pen(ColorEnterBord);
			Brush^ ebkBrush = gcnew SolidBrush(ColorEnterBack);
			Brush^ etxBrush = gcnew SolidBrush(ColorEnterText);

			Pen^ lbdPen = gcnew Pen(ColorLeaveBord);
			Brush^ lbkBrush = gcnew SolidBrush(ColorLeaveBack);
			Brush^ ltxBrush = gcnew SolidBrush(ColorLeaveText);

			Pen^ wbdPen = gcnew Pen(ColorWrongBord);
			Brush^ wbkBrush = gcnew SolidBrush(ColorWrongBack);
			Brush^ wtxBrush = gcnew SolidBrush(ColorWrongText);

			Pen^ bdPen = gcnew Pen(Color::Black);
			Brush^ bkBrush = gcnew SolidBrush(BackColor);
			Brush^ txBrush = gcnew SolidBrush(BackColor);


			switch (UICompState) {
			case CS_LEAVE:
				bdPen = lbdPen; bkBrush = lbkBrush; txBrush = ltxBrush;
				BackColor = ColorLeaveBack;
				break;
			case CS_WRONG:
				bdPen = wbdPen; bkBrush = wbkBrush; txBrush = wtxBrush;
				BackColor = ColorWrongBack;
				break;
			}


			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;	// :AntiAlias;
			g->Clear(Parent->BackColor);



			g->DrawLine(bdPen, 0, h, w, h);
	



			txtBox->BackColor = BackColor;
			mtbBox->BackColor = BackColor;
			btnEye->BackColor = BackColor;
			btnEye->FlatAppearance->MouseOverBackColor = BackColor;
			btnEye->FlatAppearance->MouseDownBackColor = BackColor;
		}

		System::Void btnEye_Click(System::Object^ sender, System::EventArgs^ e) {
			ShowPassword ? mtbBox->PasswordChar = PasswordChar : mtbBox->PasswordChar = NULL;
			mtbBox->UseSystemPasswordChar = ShowPassword;
			ShowPassword = !ShowPassword;

			PasswordBox ? mtbBox->Focus() : txtBox->Focus();





			/// TODO:
			// Use thah
			//////// FOR paint
			//// CS_WRONG

		//	UICompState = !ShowPassword ? CS_WRONG : CS_LEAVE;
		//	Invalidate();


		}
		System::Void btnEye_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			//
		}
		System::Void btnEye_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			btnEye->BackgroundImage = Image::FromFile(getUIDir() + "\\eye1b.png");
		}
		System::Void btnEye_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			btnEye->BackgroundImage = Image::FromFile(getUIDir() + "\\eye1.png");
		}

		System::Void mtbBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			RemoveText(sender, e);
		}
		System::Void txtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			RemoveText(sender, e);
		}
		System::Void lblPH_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			!PasswordBox ? txtBox->Focus() : mtbBox->Focus();
		}

	public:
		void RemoveText(System::Object^ sender, System::EventArgs^ e)
		{
			!PasswordBox ? lblPH->Visible = txtBox->Text->Length == 0
			:			   lblPH->Visible = mtbBox->Text->Length == 0;

			lblPH->Left = txtBox->Left + 1;
		}
		void AddText(System::Object^ sender, System::EventArgs^ e)
		{
			if (!PasswordBox) lblPH->Visible = String::IsNullOrWhiteSpace(txtBox->Text);
			else			  lblPH->Visible = String::IsNullOrWhiteSpace(mtbBox->Text);

			lblPH->Left = txtBox->Left + 1 - 4;
		}
		String^ getUIDir() {
			String^ stepDir = CurrentDir;
			int c = CurrentDir->Length - 1;
			while (stepDir[c] != '\\') { stepDir = stepDir->Remove(c); c--; }
			stepDir = stepDir->Remove(c);
			System::IO::Directory::SetCurrentDirectory(stepDir);
			String^ dir = stepDir + "\\CLUI\\Sources\\UI\\";
			return dir;
		}

#pragma endregion Voids

	};
}
