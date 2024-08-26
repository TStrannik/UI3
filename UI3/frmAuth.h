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
	public:		  frmAuth(void) { InitializeComponent(); }
	protected: ~frmAuth() { if (components) delete components; }

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
			   this->ClientSize = System::Drawing::Size(1107, 556);
			   this->Font = (gcnew System::Drawing::Font(L"NanumGothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			   this->Name = L"frmAuth";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   this->Text = L"frmAuth";
			   this->Load += gcnew System::EventHandler(this, &frmAuth::frmAuth_Load);
			   this->ResumeLayout(false);

		   }
#pragma endregion

#pragma region Voids
	private:
		System::Void frmAuth_Load(System::Object^ sender, System::EventArgs^ e) {
			//
		}
#pragma endregion




	};
}
