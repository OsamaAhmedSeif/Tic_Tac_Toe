#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]


void main1(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TicTacToe::MyForm1 frm;
	Application::Run(% frm);

}