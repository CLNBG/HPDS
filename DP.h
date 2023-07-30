// DP.h : main header file for the DP application
//
#pragma once
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

