object Doc: TDoc
  Left = 192
  Top = 114
  Width = 870
  Height = 640
  Align = alClient
  Caption = #1044#1086#1082#1091#1084#1077#1085#1090#1072#1094#1110#1103
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 8
    Top = 240
    Width = 1257
    Height = 601
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    Lines.Strings = (
      'Memo1')
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object Button1: TButton
    Left = 520
    Top = 872
    Width = 281
    Height = 49
    Caption = #1055#1086#1074#1077#1088#1085#1091#1090#1080#1089#1103' '#1076#1086' '#1075#1086#1083#1086#1074#1085#1086#1075#1086' '#1084#1077#1085#1102
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button1Click
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 32
    Width = 1257
    Height = 193
    DataSource = DataSource1
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    OnCellClick = DBGrid1CellClick
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=D:\'#1057#1086#1088#1086#1074#1077#1094#1082#1080#1081'\'#1087#1088#1086#1075#1088 +
      #1072#1084#1085#1080#1081' '#1087#1088#1072#1082#1090#1080#1082#1091#1084'\db1.mdb;Persist Security Info=False'
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Doc'
    Left = 56
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 32
  end
end
