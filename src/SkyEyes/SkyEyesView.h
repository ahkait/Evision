// ��� MFC ʾ��Դ������ʾ���ʹ�� MFC Microsoft Office Fluent �û����� 
// (��Fluent UI��)����ʾ�������ο���
// ���Բ��䡶Microsoft ������ο����� 
// MFC C++ �������渽����ص����ĵ���  
// ���ơ�ʹ�û�ַ� Fluent UI �����������ǵ����ṩ�ġ�  
// ��Ҫ�˽��й� Fluent UI ���ɼƻ�����ϸ��Ϣ�������  
// http://go.microsoft.com/fwlink/?LinkId=238214��
//
// ��Ȩ����(C) Microsoft Corporation
// ��������Ȩ����

// SkyEyesView.h : CSkyEyesView ��Ľӿ�
//

#pragma once

#include "resource.h"
#include "afxcmn.h"
#include "SkyEyesDoc.h"
#include "Para1.h"
#include "Para2.h"
#include "Para3.h"
#include "Para4.h"

class CSkyEyesView : public CFormView
{
protected: // �������л�����
	CSkyEyesView();
	DECLARE_DYNCREATE(CSkyEyesView)

public:
	enum{ IDD = IDD_SKYEYES_FORM };

// ����
public:
	CSkyEyesDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CSkyEyesView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	// TabControl�Ŀ��Ʊ���
	CTabCtrl m_tab;
    //��Ҵ��ڵ�����
	CPara1* m_para1;
	CPara2* m_para2;
	CPara3* m_para3;
	CPara4* m_para4;
	afx_msg void OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult);
//	afx_msg void OnPaint();
//	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#ifndef _DEBUG  // SkyEyesView.cpp �еĵ��԰汾
inline CSkyEyesDoc* CSkyEyesView::GetDocument() const
   { return reinterpret_cast<CSkyEyesDoc*>(m_pDocument); }
#endif
