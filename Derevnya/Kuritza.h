#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef _Kuritza_h_
#define _Kuritza_h_
#include "Ptitzy.h"

class TKuritza : public TPtitzy
{
private:
	int KolvoYaitz = 0;
	string cvet;
public:
	TKuritza();
	string Golos();
	void SetKolvoYaitz(int k);
	int GetKolvoYaitz();
	string GetCvet();
	void SetCvet(string c);

};


#endif // !_Kuritza_h_