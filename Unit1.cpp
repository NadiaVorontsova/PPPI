//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPGPD *PGPD;
//---------------------------------------------------------------------------
__fastcall TPGPD::TPGPD(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TPGPD::Button1Click(TObject *Sender)
{
if ((Edit1->Text!="")&&(Edit2->Text!="")&&(Edit3->Text!="")&&(Edit4->Text!="")&&(Edit5->Text!="")&&(Edit6->Text!="")&&(Edit8->Text!=""))
        {
        QRLabel20->Caption=Edit1->Text;
        QRLabel21->Caption=Edit2->Text;
        QRLabel22->Caption=Edit3->Text;
        QRLabel23->Caption=Edit4->Text;
        QRLabel24->Caption=Edit5->Text;
        QRLabel25->Caption=Edit6->Text;
        QRLabel26->Caption=Edit7->Text;
        QRLabel27->Caption=Edit8->Text;
        QuickRep1->Preview();
        }
else ShowMessage("��������� �� �� ����");
}
//---------------------------------------------------------------------------

void __fastcall TPGPD::Button2Click(TObject *Sender)
{
 PGPD->Hide();
 Menuu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TPGPD::FormCreate(TObject *Sender)
{
QuickRep1->Visible=false;
}
//---------------------------------------------------------------------------

