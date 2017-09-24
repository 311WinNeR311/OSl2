#include "OSlab2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OSlab2_C_UI::OSlab2 form;
	Application::Run(%form);
}