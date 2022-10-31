// CodadoReply.cpp : Implementation of WinMain


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "CodadoReply_i.h"
#include "xdlldata.h"


using namespace ATL;


class CCodadoReplyModule : public ATL::CAtlExeModuleT< CCodadoReplyModule >
{
public :
	DECLARE_LIBID(LIBID_CodadoReplyLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CODADOREPLY, "{c4e449d4-3a27-43de-a185-0bc59ad29434}")
};

CCodadoReplyModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

