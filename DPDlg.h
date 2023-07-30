// DPDlg.h : header file
#pragma once

/////////////////////////////////////////////////////////////////////////////
// CDPDlg dialog

class CDPDlg : public CDialogEx
{
	// Construction
public:
	CDPDlg(CWnd* pParent = nullptr);	// standard constructor

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DP_DIALOG };
#endif
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

public:
	DCB dcb;
	BOOL m_OpenFlag;		// 串口的连接状态标志
	HANDLE m_hCom;			// 串行口句柄
	OVERLAPPED m_osRead;			// 用于重叠读
	OVERLAPPED m_osWrite;			// 用于重叠写
	DWORD WriteSerial(BYTE* chBuf, DWORD dwLength);
	DWORD ReadSerial(BYTE* chBuf, DWORD dwLength);
	bool OpenComPort(CString comPortName);
	void ClosePort();
	bool SendData(CString data);
	DWORD getBufferLength();
	BOOL PreTranslateMessage(MSG* pMsg);
	HICON hIco;
	CString createStr(BYTE command, BYTE channel, BYTE data);

	CListBox	m_List;
	CSliderCtrl	m_SliderChannel1;
	CSliderCtrl	m_SliderChannel2;
	CScrollBar	m_TestValue;
	CComboBox	m_CboChannel;
	CComboBox	m_CboFunction;
	CComboBox	m_COMList;
	CScrollBar	m_ScrollBarChannel1;
	int		m_EditChannel1;
	CScrollBar	m_ScrollBarChannel2;
	int		m_EditChannel2;
	int		m_EditTestValue;

	// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonSend();
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnReleasedcaptureSliderChannel1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnClose();
	afx_msg void OnButtonExit();
	afx_msg void OnSelchangeComboCom();
	afx_msg void OnButtonRefresh();
	afx_msg void OnRadioC1On();
	afx_msg void OnRadioC1Off();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnRadioC2On();
	afx_msg void OnRadioC2Off();
	afx_msg void OnReleasedcaptureSliderChannel2(NMHDR* pNMHDR, LRESULT* pResult);
	DECLARE_MESSAGE_MAP()
};
