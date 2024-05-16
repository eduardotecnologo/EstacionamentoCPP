﻿//---------------------------------------------------------------------------

#ifndef UFrmModeloCadastroCRUDH
#define UFrmModeloCadastroCRUDH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Data.DB.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.DBActns.hpp>
//---------------------------------------------------------------------------
class TFrmModeloCadastroCRUD : public TForm
{
__published:	// IDE-managed Components
	TToolBar *tlbCadastroCRUD;
	TToolButton *btnNovo;
	TToolButton *btnPesquisar;
	TToolButton *btnGravar;
	TToolButton *btnExcluir;
	TToolButton *btnCancelar;
	TToolButton *ToolButton1;
	TToolButton *ToolButton2;
	TToolButton *btnSair;
	TImageList *imgAtiva;
	TImageList *imgDesabilitado;
	TImageList *imgHot;
	TDataSource *dtsPrincipal;
	TActionList *aclCRUD;
	TDataSetInsert *actNovo;
	TDataSetDelete *actDeletar;
	TDataSetPost *actGravar;
	TDataSetCancel *actCancelar;
	TAction *actPesquisar;
	TAction *actFechar;
	void __fastcall EvFecharFormularioClose(TObject *Sender, TCloseAction &Action);
	void __fastcall EvSairFormularioClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFrmModeloCadastroCRUD(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmModeloCadastroCRUD *FrmModeloCadastroCRUD;
//---------------------------------------------------------------------------
#endif
