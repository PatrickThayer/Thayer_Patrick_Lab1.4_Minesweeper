#pragma once
#include "wx/wx.h"

class Window : public wxFrame

{

public:
	int nFieldWidth = 10;
	int nFieldHeight = 10;
	wxButton** btn;

	Window();

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

