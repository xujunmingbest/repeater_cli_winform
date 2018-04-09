#include "mainWnd.h"

using namespace 转发器基地客户端;

[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
void main()
{
	Application::EnableVisualStyles();
	mainWnd ^m = gcnew mainWnd;
	Application::Run(m);
}