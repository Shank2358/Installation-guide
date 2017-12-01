// TirBase.cpp : CTirBase 的实现

#include "stdafx.h"
#include "TirBase.h"


// CTirBase



STDMETHODIMP CTirBase::Add(LONG para1, LONG para2, LONG* result)
{
	*result = para1 + para2;
	// TODO: 在此添加实现代码
	return S_OK;
}
