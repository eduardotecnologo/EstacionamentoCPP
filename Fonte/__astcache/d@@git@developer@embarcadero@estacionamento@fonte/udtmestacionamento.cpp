﻿//---------------------------------------------------------------------------
#pragma hdrstop

#include "UDtmEstacionamento.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TdtmEstacionamento *dtmEstacionamento;

//---------------------------------------------------------------------------
__fastcall TdtmEstacionamento::TdtmEstacionamento(TComponent* Owner)
    : TDataModule(Owner)
{

}

//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::ConfigureLookUp(TFDQuery* AQuery)
{
  if(AQuery->Active)
   {
      AQuery->Close();
   }
  AQuery->Connection = cnxEstacionamento;
  AQuery->Open();
}

//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::AtualizaLookUp(TFDQuery* AQuery)
{
   AQuery->Close();
   AQuery->Open();
}

//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::LimpaModeloVeiculo()
{
    if (qryVeiculoMON_COD->NewValue != qryVeiculoMON_COD->OldValue)
    {
       if( qryVeiculo->State == dsEdit || qryVeiculo->State == dsInsert)
       {
         qryVeiculoMON_COD->AsVariant = Null();
       }
    }

        /*TIntegerField *qryVeiculoMOD_COD;
        TIntegerField *qryVeiculoTIP_COD;
        TStringField *qryVeiculoVEI_PLA;*/
}
//---------------------------------------------------------------------------

