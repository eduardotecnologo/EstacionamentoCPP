//---------------------------------------------------------------------------

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
//---------------------------------------------------------------------------
class TdtmEstacionamento : public TDataModule
{
__published:	// IDE-managed Components
	TFDConnection *cnxEstacionamento;
	TFDPhysPgDriverLink *FDPhysPgDriverLink1;
	void __fastcall DataModuleCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TdtmEstacionamento(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdtmEstacionamento *dtmEstacionamento;
//---------------------------------------------------------------------------
#endif
