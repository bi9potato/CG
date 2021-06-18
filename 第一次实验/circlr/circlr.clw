; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CCirclrView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "circlr.h"
LastPage=0

ClassCount=6
Class1=CCirclrApp
Class2=CCirclrDoc
Class3=CCirclrView
Class4=CMainFrame

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class5=CAboutDlg
Class6=CDlgCircle
Resource3=IDD_DIALOG_CIRCLE

[CLS:CCirclrApp]
Type=0
HeaderFile=circlr.h
ImplementationFile=circlr.cpp
Filter=N

[CLS:CCirclrDoc]
Type=0
HeaderFile=circlrDoc.h
ImplementationFile=circlrDoc.cpp
Filter=N

[CLS:CCirclrView]
Type=0
HeaderFile=circlrView.h
ImplementationFile=circlrView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=ID_MENU_CIRCLE


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_MENU_CIRCLE




[CLS:CAboutDlg]
Type=0
HeaderFile=circlr.cpp
ImplementationFile=circlr.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
Command17=ID_MENU_CIRCLE
CommandCount=17

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
Command9=ID_MENU_CIRCLE
CommandCount=9

[DLG:IDD_DIALOG_CIRCLE]
Type=1
Class=CDlgCircle
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT_RAD,edit,1350631552
Control7=IDC_EDIT_PERIMETER,edit,1350631552
Control8=IDC_EDIT_AREA,edit,1350631552
Control9=IDC_BUTTON_COUNT,button,1342242816

[CLS:CDlgCircle]
Type=0
HeaderFile=DlgCircle.h
ImplementationFile=DlgCircle.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CDlgCircle

