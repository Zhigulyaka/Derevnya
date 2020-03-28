#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef _Skot_h_
#define _Skot_h_

#include "Givotnie.h"

class TSkot : public TGivotnie
{
protected:
	string product;
	bool roga;
	string gen;
public:
	TSkot();
	void SetProduct(string p);
	void SetRoga(bool r);
	bool GetRoga();
	string GetProduct();
	void SetPol(string g);
	string GetPol();
};


#endif // !_Skot_h_

