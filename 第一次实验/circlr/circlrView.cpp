// circlrView.cpp : implementation of the CCirclrView class
//

#include "stdafx.h"
#include "circlr.h"

#include "circlrDoc.h"
#include "circlrView.h"
#include "dlgcircle.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCirclrView

IMPLEMENT_DYNCREATE(CCirclrView, CView)

BEGIN_MESSAGE_MAP(CCirclrView, CView)
	//{{AFX_MSG_MAP(CCirclrView)
	ON_COMMAND(ID_MENU_CIRCLE, OnMenuCircle)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCirclrView construction/destruction

CCirclrView::CCirclrView()
{
	// TODO: add construction code here

}

CCirclrView::~CCirclrView()
{
}

BOOL CCirclrView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCirclrView drawing

void CCirclrView::OnDraw(CDC* pDC)
{
	CCirclrDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CCirclrView printing

BOOL CCirclrView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCirclrView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCirclrView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCirclrView diagnostics

#ifdef _DEBUG
void CCirclrView::AssertValid() const
{
	CView::AssertValid();
}

void CCirclrView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCirclrDoc* CCirclrView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCirclrDoc)));
	return (CCirclrDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCirclrView message handlers

void CCirclrView::OnMenuCircle() 
{
	// TODO: Add your command handler code here
	CDlgCircle dlg;
	dlg.DoModal();
	
}
