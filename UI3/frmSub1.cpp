#include "frmSub1.h"
#include <Windows.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    UI3::frmSub1 form;
    Application::Run(% form);
}