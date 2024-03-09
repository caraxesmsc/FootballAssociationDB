#include "MainForm.h"
using namespace FootballAssociationDB;
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main window and run it
	Application::Run(gcnew FootballAssociationDB::MainForm());
}

// Path: MainForm.h
// Compare this snippet from MainForm.cpp:
// 			this->label1->Location = System::Drawing::Point(12, 9);
