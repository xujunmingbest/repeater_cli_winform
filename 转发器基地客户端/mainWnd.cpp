#include "mainWnd.h"

using namespace ת�������ؿͻ���;

[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
void main()
{
	Application::EnableVisualStyles();
	mainWnd ^m = gcnew mainWnd;
	Application::Run(m);
}