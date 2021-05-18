//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit5.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGrafik *Grafik;
//---------------------------------------------------------------------------
__fastcall TGrafik::TGrafik(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGrafik::Button2Click(TObject *Sender)
{
if ((Edit1->Text!="")|(Edit2->Text!="")|(Edit3->Text!="")|(Edit4->Text!="")|(Edit5->Text!="")|(Edit6->Text!="")|(Edit7->Text!="")|(Edit8->Text!="")|(Edit9->Text!="")|(Edit10->Text!=""))
        {
        QRLabel22->Caption=Edit1->Text;
        QRLabel23->Caption=Edit2->Text;
        QRLabel24->Caption=Edit3->Text;
        QRLabel28->Caption=Edit4->Text;
        QRLabel25->Caption=Edit5->Text;
        QRLabel26->Caption=Edit6->Text;
        QRLabel27->Caption=Edit7->Text;
        QRLabel29->Caption=Edit9->Text;
        QRLabel30->Caption=Edit8->Text;
        QRLabel31->Caption=Edit10->Text;
        QuickRep1->Preview();
        }
else ShowMessage("Заповнені не всі поля");
}
//---------------------------------------------------------------------------


void __fastcall TGrafik::Button3Click(TObject *Sender)
{
if ((Edit1->Text!="")|(Edit2->Text!="")|(Edit3->Text!="")|(Edit4->Text!="")|(Edit5->Text!="")|(Edit6->Text!="")|(Edit7->Text!="")|(Edit8->Text!="")|(Edit9->Text!="")|(Edit10->Text!=""))
Edit11->Text=TimeToStr(StrToTime(Edit2->Text)-StrToTime(Edit1->Text)+StrToTime(Edit4->Text)-StrToTime(Edit3->Text)+StrToTime(Edit6->Text)-StrToTime(Edit5->Text)+StrToTime(Edit8->Text)-StrToTime(Edit7->Text)+StrToTime(Edit10->Text)-StrToTime(Edit9->Text));
else ShowMessage("Заповнені не всі текстові поля");
}
//---------------------------------------------------------------------------



void __fastcall TGrafik::Button1Click(TObject *Sender)
{
 Grafik->Hide();
 Main_Menu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TGrafik::FormCreate(TObject *Sender)
{
QuickRep1->Visible=false;
}
//---------------------------------------------------------------------------

