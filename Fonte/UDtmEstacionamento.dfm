object dtmEstacionamento: TdtmEstacionamento
  OnCreate = DataModuleCreate
  Height = 480
  Width = 640
  object cnxEstacionamento: TFDConnection
    Params.Strings = (
      'Database=estacionamento'
      'User_Name=postgres'
      'Password=root'
      'Server=localhost'
      'DriverID=PG')
    Connected = True
    Left = 56
    Top = 8
  end
  object FDPhysPgDriverLink1: TFDPhysPgDriverLink
    VendorLib = 
      'D:\postgres\postgresql-10.23-1-windows-binaries\pgsql\bin\libpq.' +
      'dll'
    Left = 56
    Top = 96
  end
end
