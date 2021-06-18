// DlgCircle.cpp : implementation file
//

#include "stdafx.h"
#include "circlr.h"
#include "DlgCircle.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgCircle dialog


CDlgCircle::CDlgCircle(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgCircle::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgCircle)
	m_rad = 0.0;
	m_perimeter = 0.0;
	m_area = 0.0;
	//}}AFX_DATA_INIT
}


void CDlgCircle::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgCircle)
	DDX_Text(pDX, IDC_EDIT_RAD, m_rad);
	DDV_MinMaxDouble(pDX, m_rad, 0., 1000.);
	DDX_Text(pDX, IDC_EDIT_PERIMETER, m_perimeter);
	DDX_Text(pDX, IDC_EDIT_AREA, m_area);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgCircle, CDialog)
	//{{AFX_MSG_MAP(CDlgCircle)
	ON_BN_CLICKED(IDC_BUTTON_COUNT, OnButtonCount)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgCircle message handlers

void CDlgCircle::OnButtonCount() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);

	m_perimeter=3.14*2*m_rad;
	m_area=3.14*m_rad*m_rad;
	UpdateData(false);
}
