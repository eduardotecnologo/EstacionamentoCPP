﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroMontadora.h"
#include "UDtmEstacionamento.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastroCRUD"
#pragma resource "*.dfm"
TFrmCadastroMontadora *FrmCadastroMontadora;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroMontadora::TFrmCadastroMontadora(TComponent* Owner)
	: TFrmModeloCadastroCRUD(Owner)
{
}
//---------------------------------------------------------------------------
