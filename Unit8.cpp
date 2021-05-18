//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit6.h"
#include "Unit8.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMain_Menu *Main_Menu;
//---------------------------------------------------------------------------
__fastcall TMain_Menu::TMain_Menu(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMain_Menu::Button1Click(TObject *Sender)
{
Main_Menu->Hide();
Grafik->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMain_Menu::Button2Click(TObject *Sender)
{
Main_Menu->Hide();
Menuu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMain_Menu::Button4Click(TObject *Sender)
{
Main_Menu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMain_Menu::Button3Click(TObject *Sender)
{
Main_Menu->Hide();
Doc->Show();
}
//---------------------------------------------------------------------------

