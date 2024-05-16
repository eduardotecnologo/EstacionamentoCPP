//---------------------------------------------------------------------------

#include <vcl.h>
#include <Vcl.Themes.hpp>
#pragma hdrstop

#include "UFrmPrincipal.h"
#include "UFrmCadastroCondutor.h"
#include "UFrmCadastroMontadora.h"
#include "UFrmCadastroModelo.h"
#include "UFrmCadastroVeiculo.h"
#include "UFrmCadastroTipo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmPrincipal *FrmPrincipal;
//---------------------------------------------------------------------------
__fastcall TFrmPrincipal::TFrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{

}

void __fastcall ApplyDarkTheme()
{
	TStyleManager::TrySetStyle("Carbon");
}

void __fastcall ApplyLightTheme()
{
	TStyleManager::TrySetStyle("Aqua Light Slate");
}

void __fastcall ApplyGlossyTheme()
{
	TStyleManager::TrySetStyle("Glossy");
}

void __fastcall ApplyPurpleTheme()
{
	TStyleManager::TrySetStyle("Windows10 Purple");
}



void __fastcall TFrmPrincipal::EvEncerrarSistema(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarCadastroCondutorClick(TObject *Sender)
{
    new TFrmCadastroCondutor(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarCadastroMontadoraClick(TObject *Sender)
{
    new TFrmCadastroMontadora(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarCadastroModeloClick(TObject *Sender)
{
    new TFrmCadastroModelo(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarCadastroVeiculoClick(TObject *Sender)
{
	new TFrmCadastroVeiculo(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarCadastroTipoClick(TObject *Sender)
{
    new TFrmCadastroTipo(this);
}
//---------------------------------------------------------------------------



void __fastcall TFrmPrincipal::mnDarkCLickClick(TObject *Sender)
{
	ApplyDarkTheme();
}
//---------------------------------------------------------------------------


void __fastcall TFrmPrincipal::mnLightClickClick(TObject *Sender)
{
   ApplyLightTheme();
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::mnGlossyClickClick(TObject *Sender)
{
   ApplyGlossyTheme();
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::mnPurpleClickClick(TObject *Sender)
{
   ApplyPurpleTheme();
}
//---------------------------------------------------------------------------

