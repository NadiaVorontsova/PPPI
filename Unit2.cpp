//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPVS *PVS;
//---------------------------------------------------------------------------
__fastcall TPVS::TPVS(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPVS::Button1Click(TObject *Sender)
{
    AnsiString CBB1,CBB2;
    AnsiString CB1=ComboBox1->Text;
    AnsiString CB2=ComboBox2->Text;
    if (CB1=="?????") CBB1="?????";
    else if (CB1=="???????") CBB1="???????";
    else CBB1="??????";
if ((Edit1->Text!="")&&(Edit3->Text!="")&&(Edit4->Text!="")&&(Edit6->Text!="")&&(Edit7->Text!="")&&(Edit8->Text!="")&&(Edit9->Text!="")&&(Edit10->Text!="")&&(Edit11->Text!="")&&(Edit12->Text!="")&&(Edit13->Text!="")&&(Edit14->Text!="")&&(Edit15->Text!="")&&(Edit16->Text!="")&&(Edit17->Text!="")&&(Edit18->Text!="")&&(Edit19->Text!="")&&(Edit20->Text!="")&&(Edit21->Text!="")&&(Label4->Caption!="")&&(Label5->Caption!="")&&(Label6->Caption!="")&&(Label7->Caption!="")&&(Label8->Caption!="")&&(Label9->Caption!="")&&(Label10->Caption!="")&&(Label11->Caption!="")&&(Label12->Caption!="")&&(Label13->Caption!="")&&(Label14->Caption!="")&&(Label15->Caption!="")&&(Label16->Caption!="")&&(Label17->Caption!="")&&(Label18->Caption!="")&&(Label19->Caption!="")&&(Label20->Caption!="")&&(Label21->Caption!="")&&(ComboBox3->Text!=""))
    {
    QRLabel3->Caption=Edit1->Text;
    QRLabel5->Caption=ComboBox3->Text;
    QRLabel6->Caption=Edit3->Text;
    QRLabel7->Caption=Label4->Caption+CB2+":";
    QRLabel8->Caption=Edit4->Text;
    QRLabel9->Caption=Label5->Caption+CB1+":";
    QRLabel10->Caption=Edit6->Text;
    QRLabel11->Caption=Label6->Caption+CB1+":";
    QRLabel12->Caption=Edit7->Text;
    QRLabel13->Caption=Label7->Caption+CBB1+":";
    QRLabel20->Caption=Label8->Caption;
    QRLabel21->Caption=Edit8->Text;
    QRLabel22->Caption=Label9->Caption;
    QRLabel23->Caption=Edit9->Text;
    QRLabel24->Caption=Label10->Caption;
    QRLabel25->Caption=Edit10->Text;
    QRLabel26->Caption=Label11->Caption;
    QRLabel27->Caption=Edit11->Text;
    QRLabel28->Caption=Label12->Caption;
    QRLabel29->Caption=Edit12->Text;
    QRLabel30->Caption=Label13->Caption;
    QRLabel31->Caption=Edit13->Text;
    QRLabel32->Caption=Label14->Caption;
    QRLabel33->Caption=Edit14->Text;
    QRLabel34->Caption=Label15->Caption;
    QRLabel35->Caption=Edit15->Text;
    QRLabel36->Caption=Label16->Caption+CBB1+":";
    QRLabel37->Caption=Edit16->Text;
    QRLabel38->Caption=Label17->Caption+CBB1+":";
    QRLabel39->Caption=Edit17->Text;
    QRLabel40->Caption=Label18->Caption;
    QRLabel41->Caption=Edit18->Text;
    QRLabel42->Caption=Label19->Caption;
    QRLabel43->Caption=Edit19->Text;
    QRLabel44->Caption=Label20->Caption;
    QRLabel45->Caption=Edit20->Text;
    QRLabel46->Caption=Label21->Caption;
    QRLabel47->Caption=Edit21->Text;
    QuickRep1->Preview();
    }
else ("????????? ?? ??? ????");
}
//---------------------------------------------------------------------------
void __fastcall TPVS::Button2Click(TObject *Sender)
{
 PVS->Hide();
 Menuu->Show();
}
//---------------------------------------------------------------------------


void __fastcall TPVS::FormCreate(TObject *Sender)
{
QuickRep1->Visible=false;
}
//---------------------------------------------------------------------------

