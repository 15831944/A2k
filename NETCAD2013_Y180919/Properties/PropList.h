#if !defined(AFX_PROPLIST_H__2BF738B2_5F0C_4A3C_B82E_AF9688467324__INCLUDED_)
#define AFX_PROPLIST_H__2BF738B2_5F0C_4A3C_B82E_AF9688467324__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CPropList wrapper class

class CPropList : public CWnd
{
protected:
	DECLARE_DYNCREATE(CPropList)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x75c461d9, 0x9588, 0x415a, { 0x8d, 0x8f, 0x4e, 0xa2, 0x43, 0x7, 0x3, 0xb9 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	short GetPrecision();
	void SetPrecision(short);
	long GetBorderStyle();
	void SetBorderStyle(long);
	BOOL GetShowDescription();
	void SetShowDescription(BOOL);

// Operations
public:
	void Clear();
	void AddProperty(LPCTSTR Category, LPCTSTR Caption, const VARIANT& Value, LPCTSTR Description, long ButtonType, BOOL IsEnabled);
	void SetValue(LPCTSTR PropertyName, const VARIANT& Value);
	void CloseAll();
	void AboutBox();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROPLIST_H__2BF738B2_5F0C_4A3C_B82E_AF9688467324__INCLUDED_)