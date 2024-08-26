#include "frmSub2.h"
#include <Windows.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void MAin(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    UI3::frmSub2 form;
    Application::Run(% form);
}