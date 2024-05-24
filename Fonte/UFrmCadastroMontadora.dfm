inherited FrmCadastroMontadora: TFrmCadastroMontadora
  Caption = 'Cadastro de Montadora'
  ClientHeight = 266
  ClientWidth = 751
  ExplicitWidth = 763
  ExplicitHeight = 304
  TextHeight = 15
  object Label1: TLabel [0]
    Left = 65
    Top = 49
    Width = 50
    Height = 19
    Caption = '&C'#242'digo'
    FocusControl = dbeCodMontadora
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel [1]
    Left = 73
    Top = 95
    Width = 42
    Height = 19
    Caption = '&Nome'
    FocusControl = dbeNomeMontadora
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
    ExplicitTop = 207
    ExplicitWidth = 747
    object ToolButton4: TToolButton [1]
      Left = 73
      Top = 0
      Width = 13
      Caption = 'ToolButton4'
      ImageIndex = 6
      Style = tbsSeparator
    end
    inherited btnPesquisar: TToolButton
      Left = 86
      ExplicitLeft = 86
    end
    object ToolButton5: TToolButton [3]
      Left = 159
      Top = 0
      Width = 13
      Caption = 'ToolButton5'
      ImageIndex = 6
      Style = tbsSeparator
    end
    inherited btnGravar: TToolButton
      Left = 172
      ExplicitLeft = 172
    end
    object ToolButton3: TToolButton [5]
      Left = 245
      Top = 0
      Width = 13
      Caption = 'ToolButton3'
      ImageIndex = 6
      Style = tbsSeparator
    end
    inherited btnExcluir: TToolButton
      Left = 258
      ExplicitLeft = 258
    end
    inherited ToolButton1: TToolButton
      Left = 331
      ExplicitLeft = 331
    end
    inherited btnCancelar: TToolButton
      Left = 344
      ExplicitLeft = 344
    end
    inherited ToolButton2: TToolButton
      Left = 417
      Width = 264
      ExplicitLeft = 417
      ExplicitWidth = 264
    end
    inherited btnSair: TToolButton
      Left = 681
      ExplicitLeft = 681
    end
  end
  object dbeCodMontadora: TDBEdit [3]
    Left = 121
    Top = 46
    Width = 165
    Height = 27
    DataField = 'mon_cod'
    DataSource = dtsPrincipal
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object dbeNomeMontadora: TDBEdit [4]
    Left = 121
    Top = 92
    Width = 270
    Height = 27
    CharCase = ecUpperCase
    DataField = 'mon_nom'
    DataSource = dtsPrincipal
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  inherited imgAtiva: TImageList
    Left = 632
    Top = 0
  end
  inherited imgDesabilitado: TImageList
    Left = 568
    Top = 0
  end
  inherited imgHot: TImageList
    Left = 696
    Top = 0
  end
  inherited dtsPrincipal: TDataSource
    DataSet = dtmEstacionamento.qryMontadora
    Left = 696
    Top = 56
  end
  inherited aclCRUD: TActionList
    Left = 696
    Top = 120
  end
end
