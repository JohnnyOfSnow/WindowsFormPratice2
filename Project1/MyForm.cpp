#include "MyForm.h"
#include <string>
#include <iostream> 
using namespace Project1;

[STAThreadAttribute]
int main(array<System::String ^>^args){

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());
	return 0;
}

