#pragma once

namespace UI3 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;


	public ref class frmSub1 : public System::Windows::Forms::Form
	{
	public:		 frmSub1(void) { InitializeComponent();				}
	protected:	~frmSub1()	   { if (components) delete components; }
	private: System::Windows::Forms::Label^ lblHeader;
	private: System::Windows::Forms::PictureBox^ picIcon;
	protected:
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSub1::typeid));
			this->lblHeader = (gcnew System::Windows::Forms::Label());
			this->picIcon = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// lblHeader
			// 
			this->lblHeader->AutoSize = true;
			this->lblHeader->BackColor = System::Drawing::Color::Transparent;
			this->lblHeader->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblHeader->ForeColor = System::Drawing::Color::White;
			this->lblHeader->Location = System::Drawing::Point(74, 164);
			this->lblHeader->Name = L"lblHeader";
			this->lblHeader->Size = System::Drawing::Size(393, 58);
			this->lblHeader->TabIndex = 2;
			this->lblHeader->Text = L"Plan your activities and control your\r\nprogress online";
			this->lblHeader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// picIcon
			// 
			this->picIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picIcon.BackgroundImage")));
			this->picIcon->Location = System::Drawing::Point(24, 23);
			this->picIcon->Name = L"picIcon";
			this->picIcon->Size = System::Drawing::Size(38, 42);
			this->picIcon->TabIndex = 3;
			this->picIcon->TabStop = false;
			// 
			// frmSub1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->ClientSize = System::Drawing::Size(550, 810);
			this->Controls->Add(this->picIcon);
			this->Controls->Add(this->lblHeader);
			this->Font = (gcnew System::Drawing::Font(L"NanumGothic", 14.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"frmSub1";
			this->Text = L"First form";
			this->Load += gcnew System::EventHandler(this, &frmSub1::frmSub1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmSub1::frmSub1_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picIcon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Void frmSub1_Load(System::Object^ sender, System::EventArgs^ e) {
			SetStyle(
				ControlStyles::AllPaintingInWmPaint |
				ControlStyles::OptimizedDoubleBuffer |
				ControlStyles::ResizeRedraw |
				ControlStyles::SupportsTransparentBackColor |
				ControlStyles::UserPaint, true
			);
			DoubleBuffered = true;
		}
		System::Void frmSub1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			LinearGradientBrush^ lgb =
				gcnew LinearGradientBrush(ClientRectangle,
					Color::FromArgb(255, 113, 227, 205),
					Color::FromArgb(255,  82, 197, 185),
					90.0f
				);
			g->FillRectangle(lgb, ClientRectangle);			
		}

	
	};
}
