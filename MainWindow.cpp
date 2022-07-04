
#include "MainWindow.h"

wxBEGIN_EVENT_TABLE(MainWindow,wxFrame)


EVT_BUTTON(100, MainWindow::OnButtonClick)
EVT_BUTTON(101, MainWindow::OnButtonClick)
EVT_BUTTON(102, MainWindow::OnButtonClick)
EVT_BUTTON(103, MainWindow::OnButtonClick)
EVT_BUTTON(104, MainWindow::OnButtonClick)
EVT_BUTTON(105, MainWindow::OnButtonClick)
EVT_BUTTON(106, MainWindow::OnButtonClick)
EVT_BUTTON(107, MainWindow::OnButtonClick)
EVT_BUTTON(108, MainWindow::OnButtonClick)
EVT_BUTTON(109, MainWindow::OnButtonClick)
EVT_BUTTON(110, MainWindow::OnButtonClick)
EVT_BUTTON(111, MainWindow::OnButtonClick)
EVT_BUTTON(112, MainWindow::OnButtonClick)
EVT_BUTTON(113, MainWindow::OnButtonClick)


wxEND_EVENT_TABLE()

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Buttons", wxPoint(200, 200), wxSize(300, 300))
{
	button1 = new wxButton(this, 100, "1", wxPoint(10, 70), wxSize(50, 50));

	button2 = new wxButton(this, 101, "2", wxPoint(70, 70), wxSize(50, 50));
	button3 = new wxButton(this, 102, "3", wxPoint(130, 70), wxSize(50, 50));
	button4 = new wxButton(this, 103, "4", wxPoint(190, 70), wxSize(50, 50));
	button5 = new wxButton(this, 104, "5", wxPoint(10, 130), wxSize(50, 50));
	button6 = new wxButton(this, 105, "6", wxPoint(70, 130), wxSize(50, 50));
	button7 = new wxButton(this, 106, "7", wxPoint(130, 130), wxSize(50, 50));
	button8 = new wxButton(this, 107, "8", wxPoint(190, 130), wxSize(50, 50));
	button9 = new wxButton(this, 108, "9", wxPoint(10, 190), wxSize(50, 50));
	button10 = new wxButton(this, 109, "+", wxPoint(70, 190), wxSize(50, 50));
	button11 = new wxButton(this, 110, "-", wxPoint(130, 190), wxSize(50, 50));
	button12 = new wxButton(this, 111, "=", wxPoint(190, 190), wxSize(50, 50));
	
	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200,50));
	
	 
}

void MainWindow::OnButtonClick(wxCommandEvent& evt)
{
	int id = evt.GetId();
	wxButton *button = wxDynamicCast(evt.GetEventObject(), wxButton);
	button->SetId(id);
	//textBox->SetLabelText(button->GetLabelText());
	textBox->AppendText(button->GetLabelText());
	evt.Skip();

		
}
