// DP.h : main header file for the DP application
//
#if !defined(AFX_DP_H__317CA959_2DAD_450D_BF90_57F34401C172__INCLUDED_)
#define AFX_DP_H__317CA959_2DAD_450D_BF90_57F34401C172__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDPApp:
// See DP.cpp for the implementation of this class
//

class CDPApp : public CWinApp
{

public:
	CDPApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDPApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDPApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DP_H__317CA959_2DAD_450D_BF90_57F34401C172__INCLUDED_)
