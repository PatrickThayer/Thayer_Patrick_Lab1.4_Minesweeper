#pragma once
#include "wx/wx.h"

class Window;

class cApp : public wxApp

{
	Window* window = nullptr;
	virtual bool OnInit();

};

