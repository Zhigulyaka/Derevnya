#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef _Givotnie_h_
#define _Givotnie_h_

class  TGivotnie
{
protected:
	string function;
	string mesto;
	
public:
	TGivotnie();
	string GetMesto();
	void SetFunction(string f);
	string GetFunction();
};





#endif // !_Givotnie_h_
