﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmModeloCadastroCRUD.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmModeloCadastroCRUD *FrmModeloCadastroCRUD;
//---------------------------------------------------------------------------
__fastcall TFrmModeloCadastroCRUD::TFrmModeloCadastroCRUD(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------
void __fastcall TFrmModeloCadastroCRUD::EvFecharFormularioClose(TObject *Sender, TCloseAction &Action)

{
    //Close Action(caFree)
    Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TFrmModeloCadastroCRUD::EvSairFormularioClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

