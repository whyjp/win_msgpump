
// mfc_msgpump.cpp: 애플리케이션에 대한 클래스 동작을 정의합니다.
//

#include "pch.h"
#include "framework.h"
#include "mfc_msgpump.h"
#include "mfc_msgpumpDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmfcmsgpumpApp

BEGIN_MESSAGE_MAP(CmfcmsgpumpApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CmfcmsgpumpApp 생성

CmfcmsgpumpApp::CmfcmsgpumpApp()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CmfcmsgpumpApp 개체입니다.

CmfcmsgpumpApp theApp;


// CmfcmsgpumpApp 초기화

BOOL CmfcmsgpumpApp::InitInstance()
{
	CWinApp::InitInstance();

	CmfcmsgpumpDlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();

	return FALSE;
}

