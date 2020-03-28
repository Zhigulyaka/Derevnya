#include "Korova.h"
#include <stdlib.h>

TKorova::TKorova(): TSkot()
{
	KolvoMoloka = 0;
	cvet = "ne ukazano";
	gen = "woman";
}

string TKorova::Golos()
{
	return "Muuuuu";
}

void TKorova::SetKolvomoloka(int k)
{
	KolvoMoloka = k;
}

int TKorova::GetKolvomoloka()
{
	return KolvoMoloka;
}

string TKorova::GetCvet()
{
	return cvet;
}

void TKorova::SetCvet(string c)
{
	cvet = c;
}
