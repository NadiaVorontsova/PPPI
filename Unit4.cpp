//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPIPD *PIPD;
//---------------------------------------------------------------------------
__fastcall TPIPD::TPIPD(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPIPD::Button1Click(TObject *Sender)
{
if ((Edit1->Text!="")&&(Edit2->Text!="")&&(Edit3->Text!="")&&(Edit4->Text!="")&&(Edit5->Text!="")&&(Edit6->Text!="")&&(Edit7->Text!="")&&(Edit8->Text!=""))
        {
        QRLabel7->Caption=Edit1->Text;
        QRLabel23->Caption=Edit2->Text;
        QRLabel24->Caption=Edit3->Text;
        QRLabel25->Caption=Edit4->Text;
        QRLabel26->Caption=Edit5->Text;
        QRLabel27->Caption=Edit6->Text;
        QRLabel28->Caption=Edit7->Text;
        QRLabel29->Caption=Edit8->Text;
        QRLabel30->Caption=Edit9->Text;
        QRLabel31->Caption=Edit10->Text;
        QuickRep1->Preview();
        }
else ShowMessage("????????? ?? ??? ????");
}
//---------------------------------------------------------------------------

void __fastcall TPIPD::Button2Click(TObject *Sender)
{
 PIPD->Hide();
 Menuu->Show();
}
//---------------------------------------------------------------------------


void __fastcall TPIPD::FormCreate(TObject *Sender)
{
QuickRep1->Visible=false;
}
//---------------------------------------------------------------------------

