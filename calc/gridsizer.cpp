#include "gridsizer.h"
#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);
 
  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1051, wxT("Cls")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1051, wxT("Bck")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1050, wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1007, wxT("7")), 0, wxEXPAND); 
  gs->Add(new wxButton(this, 1008, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1009, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1014, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1004, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1006, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1013, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1001, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1002, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1003, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1012, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1000, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT(".")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1015, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1011 , wxT("+")), 0, wxEXPAND);

  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}

void GridSizer::onBtClose (wxCommandEvent& WXUNUSED (event)) {
	Destroy();
}

void GridSizer::onBt0 (wxCommandEvent& WXUNUSED (event)) {
	/*nClicks += 1;
	display->SetValue("0");
	if (nClicks==1){
		valor1 = 0;
		cout<<valor1<<endl;
	}
	if (nClicks==2){
		valor2 = 0;
		cout<<valor2<<endl;
	}
	*/
	display->AppendText("0");
}

void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
	/*nClicks += 1;
	display->SetValue("1");
	if (nClicks==1){
		valor1 = 1;
		cout<<valor1<<endl;
	}
	if (nClicks==2){
		valor2 = 1;
		cout<<valor2<<endl;
	}
	*/
	display->AppendText("1");
}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
	/*nClicks += 1;
	display->SetValue("2");
	if (nClicks==1){
		valor1 = 2;
		cout<<valor1<<endl;
	}
	if (nClicks==2){
		valor2 = 2;
		cout<<valor2<<endl;
	}
	*/
	display->AppendText("2");
}

void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)) {
	/*nClicks += 1;
	display->SetValue("3");
	if (nClicks==1){
		valor1 = 3;
		cout<<valor1<<endl;
	}
	if (nClicks==2){
		valor2 = 3;
		cout<<valor2<<endl;
	}
	*/
	display->AppendText("3");
}

void GridSizer::onBt4 (wxCommandEvent& WXUNUSED (event)) {
	/*nClicks += 1;
	display->SetValue("4");
	if (nClicks==1){
		valor1 = 4;
		cout<<valor1<<endl;
	}
	if (nClicks==2){
		valor2 = 4;
		cout<<valor2<<endl;
	}
	*/
	display->AppendText("4");
}

void GridSizer::onBt5 (wxCommandEvent& WXUNUSED (event)) {
	/*nClicks += 1;
	display->SetValue("5");
	if (nClicks==1){
		valor1 = 5;
		cout<<valor1<<endl;
	}
	if (nClicks==2){
		valor2 = 5;
		cout<<valor2<<endl;
	}
	*/
	display->AppendText("5");
}

void GridSizer::onBt6 (wxCommandEvent& WXUNUSED (event)) {
	/*nClicks += 1;
	display->SetValue("6");
	if (nClicks==1){
		valor1 = 6;
		cout<<valor1<<endl;
	}
	if (nClicks==2){
		valor2 = 6;
		cout<<valor2<<endl;
	}
	*/
	display->AppendText("6");
}

void GridSizer::onBt7 (wxCommandEvent& WXUNUSED (event)) {
	/*nClicks += 1;
	display->SetValue("7");
	if (nClicks==1){
		valor1 = 7;
		cout<<valor1<<endl;
	}
	if (nClicks==2){
		valor2 = 7;
		cout<<valor2<<endl;
	}
	*/
	display->AppendText("7");
}

void GridSizer::onBt8 (wxCommandEvent& WXUNUSED (event)) {
	/*nClicks += 1;
	display->SetValue("8");
	if (nClicks==1){
		valor1 = 8;
		cout<<valor1<<endl;
	}
	if (nClicks==2){
		valor2 = 8;
		cout<<valor2<<endl;
	}
	*/
	display->AppendText("8");
}

void GridSizer::onBt9 (wxCommandEvent& WXUNUSED (event)) {
	/*nClicks += 1;
	display->SetValue("9");
	if (nClicks==1){
		valor1 = 9;
		cout<<valor1<<endl;
	}
	if (nClicks==2){
		valor2 = 9;
		cout<<valor2<<endl;
	}
	*/
	display->AppendText("9");
}

void GridSizer::onBtIgual(wxCommandEvent& WXUNUSED (event)){	
	nClicks=0;
	cout<<"Resultado igual a : "<<total<<endl;
	ostringstream convertir;
	string resultado;
	convertir<<total;
	resultado=convertir.str();
	display->SetValue(resultado);
}

void GridSizer::onBtCls(wxCommandEvent& WXUNUSED (event)){	
	nClicks=0;
	display->SetValue(" ");
}

void GridSizer::onBtBck(wxCommandEvent& WXUNUSED (event)){	
	nClicks=0;
	display->SetValue(" ");
	
}


void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	//total = valor1 + valor2;
	string texto=(string)display->GetValue();
	valor1=atoi(texto.c_str());
	operacion="+";
	display->SetValue("");
	cout<<"Operador: "<<operacion<<endl;
	cout<<"Valor: "<<valor1;
}

void GridSizer::onBtRes(wxCommandEvent& WXUNUSED (event)){
	total=valor1-valor2;
}

void GridSizer::onBtMul(wxCommandEvent& WXUNUSED (event)){
	total=valor1*valor2;
}

void GridSizer::onBtDiv(wxCommandEvent& WXUNUSED (event)){	
	total=valor1/valor2;
}


BEGIN_EVENT_TABLE(GridSizer, wxFrame)
    EVT_BUTTON(1050,  GridSizer::onBtClose)
    EVT_BUTTON(1051,  GridSizer::onBtCls)
    EVT_BUTTON(1052,  GridSizer::onBtBck)	
    EVT_BUTTON(1000,  GridSizer::onBt0)
    EVT_BUTTON(1001,  GridSizer::onBt1)
    EVT_BUTTON(1002,  GridSizer::onBt2)
    EVT_BUTTON(1003,  GridSizer::onBt3)
    EVT_BUTTON(1004,  GridSizer::onBt4)
    EVT_BUTTON(1005,  GridSizer::onBt5)
    EVT_BUTTON(1006,  GridSizer::onBt6)
    EVT_BUTTON(1007,  GridSizer::onBt7)
    EVT_BUTTON(1008,  GridSizer::onBt8)
    EVT_BUTTON(1009,  GridSizer::onBt9)
    EVT_BUTTON(1015,  GridSizer::onBtIgual)
    EVT_BUTTON(1011,  GridSizer::onBtSum)
    EVT_BUTTON(1012,  GridSizer::onBtRes)
    EVT_BUTTON(1013,  GridSizer::onBtMul)
    EVT_BUTTON(1014,  GridSizer::onBtDiv)
END_EVENT_TABLE()
