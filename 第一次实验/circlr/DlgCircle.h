#if !defined(AFX_DLGCIRCLE_H__418E3F41_EB93_4F7F_A7A8_91ABBA83BF4D__INCLUDED_)
#define AFX_DLGCIRCLE_H__418E3F41_EB93_4F7F_A7A8_91ABBA83BF4D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgCircle.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgCircle dialog

class CDlgCircle : public CDialog
{
// Construction
public:
	CDlgCircle(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgCircle)
	enum { IDD = IDD_DIALOG_CIRCLE };
	double	m_rad;
	double	m_perimeter;
	double	m_area;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgCircle)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgCircle)
	afx_msg void OnButtonCount();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGCIRCLE_H__418E3F41_EB93_4F7F_A7A8_91ABBA83BF4D__INCLUDED_)
