#pragma once

namespace UI3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� frmSub2
	/// </summary>
	public ref class frmSub2 : public System::Windows::Forms::Form
	{
	public:
		frmSub2(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~frmSub2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblHeader;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblHeader = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblHeader
			// 
			this->lblHeader->AutoSize = true;
			this->lblHeader->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblHeader->ForeColor = System::Drawing::Color::White;
			this->lblHeader->Location = System::Drawing::Point(149, 127);
			this->lblHeader->Name = L"lblHeader";
			this->lblHeader->Size = System::Drawing::Size(225, 58);
			this->lblHeader->TabIndex = 3;
			this->lblHeader->Text = L"As for me, aiming is\r\nso easy";
			this->lblHeader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// frmSub2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->ClientSize = System::Drawing::Size(550, 810);
			this->Controls->Add(this->lblHeader);
			this->Font = (gcnew System::Drawing::Font(L"NanumGothic", 14.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"frmSub2";
			this->Text = L"Second form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
