//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TDoc : public TForm
{
__published:	// IDE-managed Components
        TMemo *Memo1;
        TButton *Button1;
        TADOConnection *ADOConnection1;
        TADOTable *ADOTable1;
        TDBGrid *DBGrid1;
        TDataSource *DataSource1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall DBGrid1CellClick(TColumn *Column);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TDoc(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDoc *Doc;
//---------------------------------------------------------------------------
#endif
