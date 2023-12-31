﻿
// tcDlg.h: 头文件
//

#pragma once


// CtcDlg 对话框
class CtcDlg : public CDialogEx
{
// 构造
public:
	CtcDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_strSName;
	CString m_strMsg;
	CString m_strCName;
	UINT m_nPort;
	CButton m_btnConn;
	CButton m_Send;
	CButton m_btnClose;
	CListBox m_listMsg;
};
