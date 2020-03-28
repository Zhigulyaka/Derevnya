#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef _Sobaka_h_
#define _Sobaka_h_
#include "Pytomtzy.h"

class TSobaka : public TPytomtzy
{

private:
	string klichka;
	string cvet;
public:
	TSobaka();
	string Golos();
	void SetKlichka(string k);
	string GetKlichka();
	string GetCvet();
	void SetCvet(string c);

};


#endif // !_Sobaka_h_