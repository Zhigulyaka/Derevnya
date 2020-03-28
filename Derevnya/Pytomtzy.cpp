#include "Pytomtzy.h"

TPytomtzy::TPytomtzy() : TGivotnie()
{
	gender = "ne ukazano";
	sherst = false;
	poroda = 0;
	function = "Ohrana";
	mesto = "Dvor";
}

void TPytomtzy::SetPol(string g)
{
	gender =g;
}

bool TPytomtzy::GetSherst()
{
	return sherst;
}

bool TPytomtzy::GetPoroda()
{
	return poroda;
}

void TPytomtzy::SetSherst(bool s)
{
	sherst = s;
}

string TPytomtzy::GetPol()
{
	return gender;
}
