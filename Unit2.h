//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QRCtrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TPVS : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *QRBand1;
        TQRBand *QRBand4;
        TQRLabel *QRLabel1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TEdit *Edit8;
        TEdit *Edit9;
        TEdit *Edit10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TEdit *Edit11;
        TEdit *Edit12;
        TEdit *Edit13;
        TEdit *Edit14;
        TEdit *Edit15;
        TLabel *Label16;
        TEdit *Edit16;
        TLabel *Label17;
        TEdit *Edit17;
        TLabel *Label18;
        TEdit *Edit18;
        TLabel *Label19;
        TEdit *Edit19;
        TLabel *Label20;
        TEdit *Edit20;
        TLabel *Label21;
        TEdit *Edit21;
        TComboBox *ComboBox1;
        TLabel *Label22;
        TLabel *Label23;
        TComboBox *ComboBox2;
        TButton *Button1;
        TButton *Button2;
        TQRLabel *QRLabel4;
        TComboBox *ComboBox3;
        TQRLabel *QRLabel2;
        TQRLabel *QRLabel3;
        TQRLabel *QRLabel5;
        TQRLabel *QRLabel6;
        TQRBand *QRBand3;
        TLabel *Label3;
        TQRLabel *QRLabel16;
        TQRLabel *QRLabel17;
        TQRLabel *QRLabel18;
        TQRLabel *QRLabel19;
        TQRLabel *QRLabel15;
        TQRLabel *QRLabel7;
        TQRLabel *QRLabel8;
        TQRLabel *QRLabel9;
        TQRLabel *QRLabel10;
        TQRLabel *QRLabel11;
        TQRLabel *QRLabel12;
        TQRLabel *QRLabel13;
        TQRLabel *QRLabel14;
        TQRLabel *QRLabel20;
        TQRLabel *QRLabel21;
        TQRLabel *QRLabel22;
        TQRLabel *QRLabel23;
        TQRLabel *QRLabel24;
        TQRLabel *QRLabel25;
        TQRLabel *QRLabel26;
        TQRLabel *QRLabel27;
        TQRLabel *QRLabel28;
        TQRLabel *QRLabel29;
        TQRLabel *QRLabel30;
        TQRLabel *QRLabel31;
        TQRLabel *QRLabel32;
        TQRLabel *QRLabel33;
        TQRLabel *QRLabel34;
        TQRLabel *QRLabel35;
        TQRLabel *QRLabel36;
        TQRLabel *QRLabel38;
        TQRLabel *QRLabel39;
        TQRLabel *QRLabel40;
        TQRLabel *QRLabel41;
        TQRLabel *QRLabel42;
        TQRLabel *QRLabel43;
        TQRLabel *QRLabel44;
        TQRLabel *QRLabel45;
        TQRLabel *QRLabel46;
        TQRLabel *QRLabel47;
        TQRLabel *QRLabel37;
        TQRLabel *QRLabel48;
        TQRLabel *QRLabel49;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPVS(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPVS *PVS;
//---------------------------------------------------------------------------
#endif
