// COM.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include "atlcomcli.h"  
#import "E:\\visual studio 2017\\Projects\\ATLProject6\\x64\\Release\\ATLProject6.dll" no_namespace  //
using namespace std;
int main()   
{
	    CoInitialize(NULL);
		CLSID clsid;//CLSIDָ��
		CLSIDFromProgID(OLESTR("f.1"), &clsid);//ProgIDָ�룬classname.rgs�п����ҵ�
		//rgs�����ע��Ľű��ļ�����ʹ��Regsvr32.exeע�����ʱ������ڲ����ǵ���������ļ���rgs�ļ�������Դ����ʽ����DLL�ڵġ�
		CComPtr<IFirstClass> pFirstClass;//����ָ�룬ָ��COM�е���
		pFirstClass.CoCreateInstance(clsid);
		long ret = pFirstClass->add(1, 2);//������
		cout << ret << endl;
		pFirstClass.Release();//�ͷ��ڴ�
		CoUninitialize();
	
	return 0;
}


