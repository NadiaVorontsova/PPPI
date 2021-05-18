//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDoc *Doc;
//---------------------------------------------------------------------------
__fastcall TDoc::TDoc(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDoc::Button1Click(TObject *Sender)
{
Doc->Hide();
Main_Menu->Show();
}
//---------------------------------------------------------------------------
void __fastcall TDoc::DBGrid1CellClick(TColumn *Column)
{
if (ADOTable1->Fields->Fields[0]->AsString=="Положення")
Memo1->Lines->LoadFromFile("Pologennya.txt");
if (ADOTable1->Fields->Fields[0]->AsString=="Стаття 21")
Memo1->Lines->LoadFromFile("Stattya21.txt");
if (ADOTable1->Fields->Fields[0]->AsString=="Стаття 22")
Memo1->Lines->LoadFromFile("Stattya22.txt");
if (ADOTable1->Fields->Fields[0]->AsString=="Стаття 57")
Memo1->Lines->LoadFromFile("Stattya57.txt");
if (ADOTable1->Fields->Fields[0]->AsString=="Загальні положення")
Memo1->Lines->LoadFromFile("Zag_pol.txt");
if (ADOTable1->Fields->Fields[0]->AsString=="Основні завдання")
Memo1->Lines->LoadFromFile("Osn_zavd.txt");
if (ADOTable1->Fields->Fields[0]->AsString=="Структура та управління психологічною службою")
Memo1->Lines->LoadFromFile("Struct.txt");
if (ADOTable1->Fields->Fields[0]->AsString=="Зміст діяльності")
Memo1->Lines->LoadFromFile("Zmist.txt");
if (ADOTable1->Fields->Fields[0]->AsString=="Фінансування діяльності")
Memo1->Lines->LoadFromFile("Finans.txt");
}
//---------------------------------------------------------------------------

void __fastcall TDoc::FormCreate(TObject *Sender)
{
Memo1->Text="";
}
//---------------------------------------------------------------------------

