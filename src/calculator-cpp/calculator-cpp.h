#pragma once

#include "resource.h"

enum operation {
	ADD,
	SUBSTR,
	MULTIPL,
	DIV,
	NONE
};

class Calc {
	double number1, number2;
	operation oper;
public:
	Calc();
	void ButtonNumberPress(LPARAM Button, HWND hWnd);

};