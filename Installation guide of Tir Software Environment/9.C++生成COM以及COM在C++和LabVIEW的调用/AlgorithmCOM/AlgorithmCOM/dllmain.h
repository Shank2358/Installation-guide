// dllmain.h: 模块类的声明。

class CAlgorithmCOMModule : public ATL::CAtlDllModuleT< CAlgorithmCOMModule >
{
public :
	DECLARE_LIBID(LIBID_AlgorithmCOMLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ALGORITHMCOM, "{D807691F-9C62-4A40-BADC-0B2126A5BE4A}")
};

extern class CAlgorithmCOMModule _AtlModule;
