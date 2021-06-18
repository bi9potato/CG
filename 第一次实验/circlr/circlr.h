// circlr.h : main header file for the CIRCLR application
//

#if !defined(AFX_CIRCLR_H__62635971_8E5C_41FA_8164_5571401AB56F__INCLUDED_)
#define AFX_CIRCLR_H__62635971_8E5C_41FA_8164_5571401AB56F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCirclrApp:
// See circlr.cpp for the implementation of this class
//

class CCirclrApp : public CWinApp
{
public:
	CCirclrApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCirclrApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CCirclrApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CIRCLR_H__62635971_8E5C_41FA_8164_5571401AB56F__INCLUDED_)
