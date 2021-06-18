// circlrView.h : interface of the CCirclrView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CIRCLRVIEW_H__164C7FDC_D423_4186_9399_6028D07AE4D7__INCLUDED_)
#define AFX_CIRCLRVIEW_H__164C7FDC_D423_4186_9399_6028D07AE4D7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCirclrView : public CView
{
protected: // create from serialization only
	CCirclrView();
	DECLARE_DYNCREATE(CCirclrView)

// Attributes
public:
	CCirclrDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCirclrView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCirclrView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCirclrView)
	afx_msg void OnMenuCircle();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in circlrView.cpp
inline CCirclrDoc* CCirclrView::GetDocument()
   { return (CCirclrDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CIRCLRVIEW_H__164C7FDC_D423_4186_9399_6028D07AE4D7__INCLUDED_)
