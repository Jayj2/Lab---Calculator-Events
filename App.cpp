#include "App.h"
#include "wx\wx.h"

wxIMPLEMENT_APP(App);


bool App::OnInit()
{
	window = new MainWindow();
	window->Show();
	return true;


}