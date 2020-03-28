#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef _Korova_h_
#define _Korova_h_
#include "Skot.h"

class TKorova : public TSkot
{

protected:

	int KolvoMoloka = 0;
	string cvet;
public:
	TKorova();
	string Golos();
	void SetKolvomoloka(int k);
	int GetKolvomoloka();
	string GetCvet();
	void SetCvet(string c);

};


#endif // !_Korova_h_