//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QRCtrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TPIPD : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TEdit *Edit8;
        TEdit *Edit9;
        TLabel *Label10;
        TEdit *Edit10;
        TQuickRep *QuickRep1;
        TQRBand *QRBand1;
        TQRBand *QRBand2;
        TQRLabel *QRLabel1;
        TQRLabel *QRLabel2;
        TQRLabel *QRLabel3;
        TQRLabel *QRLabel4;
        TQRLabel *QRLabel5;
        TQRLabel *QRLabel6;
        TQRLabel *QRLabel7;
        TQRLabel *QRLabel8;
        TQRLabel *QRLabel9;
        TQRLabel *QRLabel10;
        TQRLabel *QRLabel11;
        TQRLabel *QRLabel12;
        TQRLabel *QRLabel13;
        TQRLabel *QRLabel14;
        TQRLabel *QRLabel15;
        TQRLabel *QRLabel16;
        TQRBand *QRBand4;
        TLabel *Label11;
        TQRLabel *QRLabel18;
        TQRLabel *QRLabel19;
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
        TButton *Button1;
        TButton *Button2;
        TQRLabel *QRLabel17;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPIPD(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPIPD *PIPD;
//---------------------------------------------------------------------------
#endif
