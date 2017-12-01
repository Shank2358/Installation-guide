#include "stdafx.h"
#include<iostream>
#include<Engine.h>
using namespace std;


int main() {
	Engine* m_pEngine;
	m_pEngine = engOpen(NULL);
	if (m_pEngine == NULL) {
		cout << "error!" << endl;
		exit(-1);
	}
	engEvalString(m_pEngine, "x=0:0.01:2*pi;");
	engEvalString(m_pEngine, "y=sin(x);");
	engEvalString(m_pEngine, "figure; plot(x,y,'g');");

	system("pause");
	engClose(m_pEngine);
	return 0;
}