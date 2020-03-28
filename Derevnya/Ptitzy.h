#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef _Ptitzy_h_
#define _Ptitzy_h_
#include "Givotnie.h"

class TPtitzy : public TGivotnie
{
protected:
	string pol;
	bool UmeetPlavat;
	bool perya;

public:
	TPtitzy();
	void SetPol(string p);
	bool GetPerya();
	void SetUmeetPlavat(bool u);
	void SetPerya(bool per);
	bool GetUmeetPlavat();
	string GetPol();
};


#endif // !_Chelovek_h_
