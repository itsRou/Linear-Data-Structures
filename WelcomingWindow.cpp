#include "WelcomingWindow.h"
using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

   datas::WelcomingWindow form;

    Application::Run(% form);

}


