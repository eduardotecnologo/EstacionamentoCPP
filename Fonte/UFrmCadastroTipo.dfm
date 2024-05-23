inherited FrmCadastroTipo: TFrmCadastroTipo
  Caption = 'Cadastro de Tipos'
  ClientHeight = 266
  ClientWidth = 751
  ExplicitWidth = 763
  ExplicitHeight = 304
  TextHeight = 15
  object Label1: TLabel [0]
    Left = 65
    Top = 56
    Width = 50
    Height = 19
    Caption = '&C'#243'digo'
    FocusControl = dbeCodigo
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel [1]
    Left = 48
    Top = 104
    Width = 67
    Height = 19
    Caption = '&Descri'#231#227'o'
    FocusControl = dbeDescricao
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  inherited tlbCadastroCRUD: TToolBar
    Top = 208
    Width = 751
  end
  object dbeCodigo: TDBEdit [3]
    Left = 121
    Top = 53
    Width = 154
    Height = 28
    DataField = 'tip_cod'
    DataSource = dtsPrincipal
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object dbeDescricao: TDBEdit [4]
    Left = 121
    Top = 101
    Width = 456
    Height = 28
    DataField = 'tip_des'
    DataSource = dtsPrincipal
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  inherited dtsPrincipal: TDataSource
    DataSet = dtmEstacionamento.qryTipo
    Left = 768
    Top = 8
  end
  inherited aclCRUD: TActionList
    Left = 768
    Top = 64
  end
end
