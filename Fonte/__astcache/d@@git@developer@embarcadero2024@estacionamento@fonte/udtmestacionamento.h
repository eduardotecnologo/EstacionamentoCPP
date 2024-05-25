﻿//---------------------------------------------------------------------------

#ifndef UDtmEstacionamentoH
#define UDtmEstacionamentoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.PG.hpp>
#include <FireDAC.Phys.PGDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Comp.UI.hpp>
//---------------------------------------------------------------------------
class TdtmEstacionamento : public TDataModule
{
__published:	// IDE-managed Components
	TFDConnection *FDConnection;
	TFDPhysPgDriverLink *FDPhysPgDriverLink;
	TFDQuery *qryMontadora;
	TFDQuery *qryCondutor;
	TFDQuery *qryModelo;
	TFDQuery *qryTipo;
	TFDQuery *qryVeiculo;
	TFDGUIxWaitCursor *FDGUIxWaitCursor1;
	TIntegerField *qryMontadoramon_cod;
	TWideStringField *qryMontadoramon_nom;
	TIntegerField *qryTipotip_cod;
	TWideStringField *qryTipotip_des;
	TIntegerField *qryCondutorcon_cod;
	TWideStringField *qryCondutorcon_nom;
	TWideStringField *qryCondutorcon_cnh;
	TWideStringField *qryCondutorcon_cpf;
private:	// User declarations
public:		// User declarations
    __fastcall TdtmEstacionamento(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TdtmEstacionamento *dtmEstacionamento;
//---------------------------------------------------------------------------
#endif
