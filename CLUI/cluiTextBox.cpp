#include "pch.h"
#include "cluiTextBox.h"

using namespace CLUI;

void cluiTextBox::StartSet() {

	SetStyle(
		ControlStyles::AllPaintingInWmPaint |
		ControlStyles::OptimizedDoubleBuffer |
		ControlStyles::ResizeRedraw |
		ControlStyles::SupportsTransparentBackColor |
		ControlStyles::UserPaint |
		ControlStyles::DoubleBuffer, true
	);
	DoubleBuffered = true;

	BackColor = Color::Blue;
	ForeColor = Color::White;


	SF->Alignment = StringAlignment::Center;
	SF->LineAlignment = StringAlignment::Center;

	//Text = L"SampleText";
	PlaceHolder = L"Placeholder";

	PasswordBox = false;
	PasswordChar = '*';
	ShowPassword = false;

	
	BorderRadius = 10;
	ColorLeaveBord = Color::FromArgb(255, 77, 99, 116);
	ColorLeaveBack = Color::FromArgb(255, 34, 47, 76);	
	ColorLeaveText = Color::White;

	ColorEnterBord = Color::White;
	ColorEnterBack = Color::Tomato;
	ColorEnterText = Color::White;

	ColorWrongBack = Color::LightCoral;
	ColorWrongBord = Color::Red;
	ColorWrongText = Color::Black;

}