//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPIPK *PIPK;
//---------------------------------------------------------------------------
__fastcall TPIPK::TPIPK(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPIPK::Button1Click(TObject *Sender)
{
if ((Edit1->Text!="")&&(Edit2->Text!="")&&(Edit3->Text!="")&&(Edit4->Text!="")&&(Edit5->Text!="")&&(Edit6->Text!="")&&(Edit7->Text!="")&&(Label1->Caption!="")&&(Label2->Caption!="")&&(Label3->Caption!="")&&(Label4->Caption!="")&&(Label5->Caption!="")&&(Label6->Caption!="")&&(Label7->Caption!=""))
        {
        QRLabel3->Caption=Edit1->Text;
        QRLabel4->Caption=Label2->Caption;
        QRLabel5->Caption=Edit2->Text;
        QRLabel6->Caption=Label3->Caption;
        QRLabel7->Caption=Edit3->Text;
        QRLabel8->Caption=Label4->Caption;
        QRLabel9->Caption=Edit4->Text;
        QRLabel10->Caption=Label5->Caption;
        QRLabel11->Caption=Edit5->Text;
        QRLabel12->Caption=Label6->Caption;
        QRLabel13->Caption=Edit6->Text;
        QRLabel14->Caption=Label7->Caption;
        QRLabel15->Caption=Edit7->Text;
        QuickRep1->Preview();
        }
else ("��������� �� �� ����");
}
//---------------------------------------------------------------------------
void __fastcall TPIPK::Button2Click(TObject *Sender)
{
 PIPK->Hide();
 Menuu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TPIPK::FormCreate(TObject *Sender)
{
QuickRep1->Visible=false;
}
//---------------------------------------------------------------------------

