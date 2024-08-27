#pragma once

namespace UI3 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	public ref class frmSub2 : public System::Windows::Forms::Form
	{
	public:		 frmSub2(void) { InitializeComponent(); }
	protected:	~frmSub2()	   { if (components) delete components;}

	private: System::Windows::Forms::PictureBox^ picIcon;
	private: System::Windows::Forms::Label^ lblHeader;
	protected:
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSub2::typeid));
			this->picIcon = (gcnew System::Windows::Forms::PictureBox());
			this->lblHeader = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// picIcon
			// 
			this->picIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picIcon.BackgroundImage")));
			this->picIcon->Location = System::Drawing::Point(41, 23);
			this->picIcon->Name = L"picIcon";
			this->picIcon->Size = System::Drawing::Size(38, 42);
			this->picIcon->TabIndex = 4;
			this->picIcon->TabStop = false;
			// 
			// lblHeader
			// 
			this->lblHeader->AutoSize = true;
			this->lblHeader->BackColor = System::Drawing::Color::Transparent;
			this->lblHeader->Font = (gcnew System::Drawing::Font(L"NanumGothic", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->lblHeader->ForeColor = System::Drawing::Color::White;
			this->lblHeader->Location = System::Drawing::Point(69, 214);
			this->lblHeader->Name = L"lblHeader";
			this->lblHeader->Size = System::Drawing::Size(583, 76);
			this->lblHeader->TabIndex = 5;
			this->lblHeader->Text = L"They know me as headshot-machine.\r\nAs for me, aiming is so easy.";
			this->lblHeader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// frmSub2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->ClientSize = System::Drawing::Size(700, 925);
			this->Controls->Add(this->lblHeader);
			this->Controls->Add(this->picIcon);
			this->Font = (gcnew System::Drawing::Font(L"NanumGothic", 14.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"frmSub2";
			this->Text = L"Second form";
			this->Load += gcnew System::EventHandler(this, &frmSub2::frmSub2_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmSub2::frmSub2_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picIcon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Void frmSub2_Load(System::Object^ sender, System::EventArgs^ e) {
			SetStyle(
				ControlStyles::AllPaintingInWmPaint |
				ControlStyles::OptimizedDoubleBuffer |
				ControlStyles::ResizeRedraw |
				ControlStyles::SupportsTransparentBackColor |
				ControlStyles::UserPaint, true
			);
			DoubleBuffered = true;
		}
		System::Void frmSub2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			LinearGradientBrush^ lgb =
				gcnew LinearGradientBrush(ClientRectangle,
					Color::FromArgb(255, 113, 227, 205),
					Color::FromArgb(255, 82, 197, 185),
					90.0f
				);
			g->FillRectangle(lgb, ClientRectangle);
		}
	
	};
}
