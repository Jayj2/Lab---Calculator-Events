#pragma once
#include "wx/wx.h"

class MainWindow : public wxFrame
{
private:
	wxButton* button1;
	wxButton* button2;
	wxButton* button3;
	wxButton* button4;
	wxButton* button5;
	wxButton* button6;
	wxButton* button7;
	wxButton* button8;
	wxButton* button9;
	wxButton* button10;
	wxButton* button11;
	wxButton* button12;
	wxButton* button13;
	wxButton* button14;
	wxButton* button15;
	wxTextCtrl* textBox = nullptr;
	wxListBox* list = nullptr;


	wxButton** btn;

public:
	MainWindow();
	wxDECLARE_EVENT_TABLE();
	void OnButtonClick(wxCommandEvent& evt);


};

