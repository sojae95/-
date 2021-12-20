﻿
// MFC_MemoView.h: CMFCMemoView 클래스의 인터페이스
//

#pragma once


class CMFCMemoView : public CEditView
{
protected: // serialization에서만 만들어집니다.
	CMFCMemoView() noexcept;
	DECLARE_DYNCREATE(CMFCMemoView)

// 특성입니다.
public:
	CMFCMemoDoc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CMFCMemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC_MemoView.cpp의 디버그 버전
inline CMFCMemoDoc* CMFCMemoView::GetDocument() const
   { return reinterpret_cast<CMFCMemoDoc*>(m_pDocument); }
#endif

