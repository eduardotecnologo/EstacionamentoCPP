//---------------------------------------------------------------------------

#ifndef UFrmPrincipalH
#define UFrmPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFrmPrincipal : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *mnmPrincipal;
	TMenuItem *A1;
	TMenuItem *Arquivo1;
	TMenuItem *Sair1;
	TMenuItem *N1;
	TMenuItem *Relatrio1;
	TMenuItem *Modelo1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *ipo1;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *icket1;
	TMenuItem *Veculo1;
	TMenuItem *Permanncia1;
	TMenuItem *ema1;
	TMenuItem *mnDarkCLick;
	TMenuItem *mnLightClick;
	TMenuItem *mnGlossyClick;
	TMenuItem *mnPurpleClick;
	void __fastcall EvEncerrarSistema(TObject *Sender);
	void __fastcall EvAtivarCadastroCondutorClick(TObject *Sender);
	void __fastcall EvAtivarCadastroMontadoraClick(TObject *Sender);
	void __fastcall EvAtivarCadastroModeloClick(TObject *Sender);
	void __fastcall EvAtivarCadastroVeiculoClick(TObject *Sender);
	void __fastcall EvAtivarCadastroTipoClick(TObject *Sender);
	void __fastcall mnDarkCLickClick(TObject *Sender);
	void __fastcall mnLightClickClick(TObject *Sender);
	void __fastcall mnGlossyClickClick(TObject *Sender);
	void __fastcall mnPurpleClickClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmPrincipal *FrmPrincipal;
//---------------------------------------------------------------------------
#endif
