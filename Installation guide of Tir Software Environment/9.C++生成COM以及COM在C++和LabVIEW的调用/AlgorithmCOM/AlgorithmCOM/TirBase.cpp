// TirBase.cpp : CTirBase ��ʵ��

#include "stdafx.h"
#include "TirBase.h"


// CTirBase



STDMETHODIMP CTirBase::Add(LONG para1, LONG para2, LONG* result)
{
	*result = para1 + para2;
	// TODO: �ڴ����ʵ�ִ���
	return S_OK;
}
