// circlrDoc.h : interface of the CCirclrDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CIRCLRDOC_H__90F4C266_9FFA_4087_BF84_C7829D66CEE6__INCLUDED_)
#define AFX_CIRCLRDOC_H__90F4C266_9FFA_4087_BF84_C7829D66CEE6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCirclrDoc : public CDocument
{
protected: // create from serialization only
	CCirclrDoc();
	DECLARE_DYNCREATE(CCirclrDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCirclrDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCirclrDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCirclrDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CIRCLRDOC_H__90F4C266_9FFA_4087_BF84_C7829D66CEE6__INCLUDED_)
