//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSCHORPP *SCHORPP;
//---------------------------------------------------------------------------
__fastcall TSCHORPP::TSCHORPP(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSCHORPP::Button1Click(TObject *Sender)
{
ADOTable1->Append();
ADOTable1->Edit();
ADOTable1->Fields->Fields[1]->Value=DTP1->Date.DateString();
ADOTable1->Fields->Fields[2]->Value=Edit2->Text;
ADOTable1->Fields->Fields[3]->Value=Edit3->Text.ToInt();
ADOTable1->Fields->Fields[4]->Value=Edit4->Text;
ADOTable1->Fields->Fields[5]->Value=Edit5->Text.ToInt();
ADOTable1->Fields->Fields[6]->Value=Edit6->Text;
ADOTable1->Fields->Fields[7]->Value=Edit7->Text;
ADOTable1->Post();
}
//---------------------------------------------------------------------------

void __fastcall TSCHORPP::Button3Click(TObject *Sender)
{
 SCHORPP->Hide();
 Menuu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TSCHORPP::Button2Click(TObject *Sender)
{
 ADOTable1->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TSCHORPP::DBGrid2CellClick(TColumn *Column)
{
        Edit2->Text=T_Napryam->Fields->Fields[0]->AsString;
        
}
//---------------------------------------------------------------------------

void __fastcall TSCHORPP::Edit1Enter(TObject *Sender)
{
        DBGrid2->Visible=true;        
}
//---------------------------------------------------------------------------

void __fastcall TSCHORPP::Edit3Enter(TObject *Sender)
{
        DBGrid2->Visible=false;        
}
//---------------------------------------------------------------------------

void __fastcall TSCHORPP::Button5Click(TObject *Sender)
{
if (CB1->Text=="по напряму") {
if (LE1->Text!=""){
QNapryam->Parameters->ParamByName("N")->Value=LE1->Text;
QNapryam->Active=true;
                }
else ShowMessage("Параметр запиту не вказаний");
                }
else
if (CB1->Text=="по кількості годин") {
if (LE1->Text!=""){
QGodin->Parameters->ParamByName("G")->Value=LE1->Text;
QGodin->Active=true;                   }
else ShowMessage("Параметр запиту не вказаний");
}
else
{
if (LE1->Text!=""){
QOsib->Parameters->ParamByName("O")->Value=LE1->Text;
QOsib->Active=true;
}
else ShowMessage("Параметр запиту не вказаний");
}
}
//---------------------------------------------------------------------------

void __fastcall TSCHORPP::Button4Click(TObject *Sender)
{
Panel1->Visible=false;
Label9->Visible=true;
CB1->Visible=true;
LE1->Visible=true;
Button5->Visible=true;
}
//---------------------------------------------------------------------------

