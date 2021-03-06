//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", PGPD);
USEFORM("Unit2.cpp", PVS);
USEFORM("Unit3.cpp", PIPK);
USEFORM("Unit4.cpp", PIPD);
USEFORM("Unit5.cpp", Grafik);
USEFORM("Unit6.cpp", Menuu);
USEFORM("Unit7.cpp", SCHORPP);
USEFORM("Unit8.cpp", Main_Menu);
USEFORM("Unit9.cpp", Doc);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TMain_Menu), &Main_Menu);
                 Application->CreateForm(__classid(TMenuu), &Menuu);
                 Application->CreateForm(__classid(TPGPD), &PGPD);
                 Application->CreateForm(__classid(TPVS), &PVS);
                 Application->CreateForm(__classid(TPIPK), &PIPK);
                 Application->CreateForm(__classid(TPIPD), &PIPD);
                 Application->CreateForm(__classid(TGrafik), &Grafik);
                 Application->CreateForm(__classid(TSCHORPP), &SCHORPP);
                 Application->CreateForm(__classid(TDoc), &Doc);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
