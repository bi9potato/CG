// circlrDoc.cpp : implementation of the CCirclrDoc class
//

#include "stdafx.h"
#include "circlr.h"

#include "circlrDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCirclrDoc

IMPLEMENT_DYNCREATE(CCirclrDoc, CDocument)

BEGIN_MESSAGE_MAP(CCirclrDoc, CDocument)
	//{{AFX_MSG_MAP(CCirclrDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCirclrDoc construction/destruction

CCirclrDoc::CCirclrDoc()
{
	// TODO: add one-time construction code here

}

CCirclrDoc::~CCirclrDoc()
{
}

BOOL CCirclrDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCirclrDoc serialization

void CCirclrDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CCirclrDoc diagnostics

#ifdef _DEBUG
void CCirclrDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCirclrDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCirclrDoc commands
