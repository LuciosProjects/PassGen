#include "PassGenUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	PassGen::PassGenUI PassGenUI;
	Application::Run(% PassGenUI);
}