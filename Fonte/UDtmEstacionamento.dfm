object dtmEstacionamento: TdtmEstacionamento
  Height = 480
  Width = 835
  object FDConnection: TFDConnection
    Params.Strings = (
      'Database=estacionamento'
      'User_Name=postgres'
      'Password=root'
      'DriverID=PG')
    Connected = True
    Left = 56
    Top = 16
  end
  object FDPhysPgDriverLink: TFDPhysPgDriverLink
    VendorLib = 
      'D:\postgres\postgresql-10.23-1-windows-binaries\pgsql\bin\libpq.' +
      'dll'
    Left = 56
    Top = 80
  end
  object qryMontadora: TFDQuery
    Active = True
    Connection = FDConnection
    SQL.Strings = (
      'SELECT MON_COD,'
      '       MON_NOM'
      '       FROM MONTADORA;')
    Left = 168
    Top = 16
    object qryMontadoramon_cod: TIntegerField
      DisplayLabel = 'C'#242'digo Montadora'
      DisplayWidth = 5
      FieldName = 'mon_cod'
      Origin = 'mon_cod'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      MaxValue = 2000
      MinValue = 1
    end
    object qryMontadoramon_nom: TWideStringField
      DisplayLabel = 'Nome Montadora'
      FieldName = 'mon_nom'
      Origin = 'mon_nom'
      Size = 60
    end
  end
  object qryCondutor: TFDQuery
    Active = True
    Connection = FDConnection
    SQL.Strings = (
      'SELECT CON_COD,'
      '       CON_NOM,'
      '       CON_CNH,'
      '       CON_CPF'
      ' FROM CONDUTOR;')
    Left = 168
    Top = 80
  end
  object qryModelo: TFDQuery
    Active = True
    Connection = FDConnection
    SQL.Strings = (
      'SELECT MOD_COD,'
      '       MON_COD,'
      '       MOD_NOM'
      ' FROM MODELO;')
    Left = 168
    Top = 144
  end
  object qryTipo: TFDQuery
    Active = True
    Connection = FDConnection
    SQL.Strings = (
      'SELECT '
      '     TIP_COD,'
      '     TIP_DES'
      ' FROM TIPO;')
    Left = 168
    Top = 208
    object qryTipotip_cod: TIntegerField
      DisplayLabel = 'C'#243'digo'
      FieldName = 'tip_cod'
      Origin = 'tip_cod'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      MaxValue = 2000
      MinValue = 1
    end
    object qryTipotip_des: TWideStringField
      DisplayLabel = 'Descri'#231#227'o'
      DisplayWidth = 60
      FieldName = 'tip_des'
      Origin = 'tip_des'
    end
  end
  object qryVeiculo: TFDQuery
    Active = True
    Connection = FDConnection
    SQL.Strings = (
      'SELECT VEI_COD,'
      '       MON_COD,'
      '       MOD_COD,'
      '       TIP_COD,'
      '       VEI_PLA,'
      '       VEI_ANO_FAB'
      '        FROM VEICULO;')
    Left = 168
    Top = 272
  end
  object FDGUIxWaitCursor1: TFDGUIxWaitCursor
    Provider = 'Forms'
    Left = 56
    Top = 144
  end
end
