﻿//---------------------------------------------------------------------------

#ifndef UFrmCadastroModeloH
#define UFrmCadastroModeloH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UFrmModeloCadastroCRUD.h"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Data.DB.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.DBActns.hpp>
//---------------------------------------------------------------------------
class TFrmCadastroModelo : public TFrmModeloCadastroCRUD
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TFrmCadastroModelo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCadastroModelo *FrmCadastroModelo;
//---------------------------------------------------------------------------
#endif
