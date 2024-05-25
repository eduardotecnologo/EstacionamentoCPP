inherited FrmCadastroCondutor: TFrmCadastroCondutor
  Caption = 'Cadastro Condutor'
  ClientHeight = 266
  ClientWidth = 751
  ExplicitWidth = 763
  ExplicitHeight = 304
  TextHeight = 15
  object Label1: TLabel [0]
    Left = 63
    Top = 40
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
    Left = 71
    Top = 88
    Width = 42
    Height = 19
    Caption = '&Nome'
    FocusControl = dbeNome
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel [2]
    Left = 81
    Top = 136
    Width = 32
    Height = 19
    Caption = 'CN&H'
    FocusControl = dbeCNH
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel [3]
    Left = 286
    Top = 136
    Width = 27
    Height = 19
    Caption = 'C&PF'
    FocusControl = dbeCPF
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
    ExplicitWidth = 953
  end
  object dbeCodigo: TDBEdit [5]
    Left = 119
    Top = 37
    Width = 154
    Height = 27
    DataField = 'con_cod'
    DataSource = dtsPrincipal
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object dbeNome: TDBEdit [6]
    Left = 119
    Top = 85
    Width = 370
    Height = 27
    CharCase = ecUpperCase
    DataField = 'con_nom'
    DataSource = dtsPrincipal
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object dbeCNH: TDBEdit [7]
    Left = 119
    Top = 133
    Width = 154
    Height = 27
    DataField = 'con_cnh'
    DataSource = dtsPrincipal
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    MaxLength = 11
    ParentFont = False
    TabOrder = 3
  end
  object dbeCPF: TDBEdit [8]
    Left = 325
    Top = 133
    Width = 161
    Height = 27
    DataField = 'con_cpf'
    DataSource = dtsPrincipal
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    MaxLength = 14
    ParentFont = False
    TabOrder = 4
  end
  inherited dtsPrincipal: TDataSource
    DataSet = dtmEstacionamento.qryCondutor
    Left = 800
    Top = 16
  end
  inherited aclCRUD: TActionList
    Left = 800
    Top = 72
  end
end
