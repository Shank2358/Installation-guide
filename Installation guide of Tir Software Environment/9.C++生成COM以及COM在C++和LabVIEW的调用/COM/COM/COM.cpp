// COM.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include "atlcomcli.h"  
#import "E:\\visual studio 2017\\Projects\\ATLProject6\\x64\\Release\\ATLProject6.dll" no_namespace  //
using namespace std;
int main()   
{
	    CoInitialize(NULL);
		CLSID clsid;//CLSID指针
		CLSIDFromProgID(OLESTR("f.1"), &clsid);//ProgID指针，classname.rgs中可以找到
		//rgs是组件注册的脚本文件，当使用Regsvr32.exe注册组件时，组件内部便是调用了这个文件。rgs文件是以资源的形式存于DLL内的。
		CComPtr<IFirstClass> pFirstClass;//智能指针，指向COM中的类
		pFirstClass.CoCreateInstance(clsid);
		long ret = pFirstClass->add(1, 2);//函数名
		cout << ret << endl;
		pFirstClass.Release();//释放内存
		CoUninitialize();
	
	return 0;
}


