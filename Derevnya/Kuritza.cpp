#include "Kuritza.h"
#include <stdlib.h>

TKuritza::TKuritza()
{
	KolvoYaitz = 0;
	cvet = "ne ukazano";
	pol = "woman";
	UmeetPlavat = 0;
	perya = 1;

}

string TKuritza::Golos()
{
	return "KoKoKo";
}

void TKuritza::SetKolvoYaitz(int k)
{
	KolvoYaitz = k;
}

int TKuritza::GetKolvoYaitz()
{
	return KolvoYaitz;
}
string TKuritza::GetCvet()
{
	return cvet;
}
void TKuritza::SetCvet(string c)
{
	cvet = c;
}