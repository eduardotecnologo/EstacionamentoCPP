﻿//---------------------------------------------------------------------------

#ifndef UDtmEstacionamentoH
#define UDtmEstacionamentoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.FB.hpp>
#include <FireDAC.Phys.FBDef.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Comp.UI.hpp>
#include <FireDAC.Phys.IBBase.hpp>
//---------------------------------------------------------------------------
class TdtmEstacionamento : public TDataModule
{
__published:	// IDE-managed Components
    TFDConnection *cnxEstacionamento;
    TFDQuery *qryMontadora;
    TFDPhysFBDriverLink *FBDriverLink;
    TFDGUIxWaitCursor *WaitCursor;
    TIntegerField *qryMontadoraMON_COD;
    TStringField *qryMontadoraMON_NOM;
    TFDQuery *qryTipo;
    TIntegerField *qryTipoTIP_COD;
    TStringField *qryTipoTIP_DES;
    TFDQuery *qryCondutor;
    TIntegerField *qryCondutorCON_COD;
    TStringField *qryCondutorCON_NOM;
    TStringField *qryCondutorCON_CNH;
    TStringField *qryCondutorCON_CPF;
    TFDQuery *qryModelo;
    TIntegerField *qryModeloMOD_COD;
    TIntegerField *qryModeloMON_COD;
    TStringField *qryModeloMOD_NOM;
    TFDQuery *qryVeiculo;
    TIntegerField *qryVeiculoVEI_COD;
    TIntegerField *qryVeiculoMON_COD;
    TIntegerField *qryVeiculoMOD_COD;
    TIntegerField *qryVeiculoTIP_COD;
    TStringField *qryVeiculoVEI_PLA;
    TIntegerField *qryVeiculoVEI_ANO_FAB;
    TFDQuery *qryConducao;
    TIntegerField *qryConducaoCND_COD;
    TIntegerField *qryConducaoCON_COD;
    TIntegerField *qryConducaoVEI_COD;
    TFDQuery *qryTicket;
    TIntegerField *qryTicketTIC_NUM;
    TIntegerField *qryTicketCND_COD;
    TSQLTimeStampField *qryTicketTIC_DAT;
    TSQLTimeStampField *qryTicketTIC_HOR_ENT;
    TSQLTimeStampField *qryTicketTIC_HOR_SAI;
    TBCDField *qryTicketTIC_VAL_PAG;
    TDataSource *dtsConducaoTicketMD;
private:	// User declarations
public:		// User declarations
    __fastcall TdtmEstacionamento(TComponent* Owner);

    void __fastcall ConfigureLookUp(TFDQuery* AQuery);
    void __fastcall AtualizaLookUp(TFDQuery* AQuery);
    void __fastcall LimpaModeloVeiculo();
};
//---------------------------------------------------------------------------
extern PACKAGE TdtmEstacionamento *dtmEstacionamento;
//---------------------------------------------------------------------------
#endif
