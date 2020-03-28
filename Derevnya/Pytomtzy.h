#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef _Pytomtzy_h_
#define _Pytomtzy_h_
#include "Givotnie.h"
class TPytomtzy : public TGivotnie
{
protected:
	string gender;
	bool poroda;
	bool sherst;
public:
	TPytomtzy();
	void SetPol(string g);
	bool GetSherst();
	bool GetPoroda();
	void SetSherst(bool s);
	string GetPol();
};
#endif // !_Pytomtzy_h_
