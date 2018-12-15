#include "MainWindowForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;


//[STAThread]
int main ( array<String^>^ args )
{
	Application::EnableVisualStyles ( );
	Application::SetCompatibleTextRenderingDefault ( false );

	Exam::MainWindowForm form;
	Application::Run ( %form );
}

Exam::MainWindowForm::MainWindowForm ( void )
{
	InitializeComponent ( );
	handler = new MainHandler ( );
	show ( handler->getPrograms(), handler->getResources() );
}

Exam::MainWindowForm::~MainWindowForm ( )
{
	std::cout << "Destructor executed" << std::endl;
	if (components)
		delete components;
	
	delete handler;
	handler = nullptr;
}
