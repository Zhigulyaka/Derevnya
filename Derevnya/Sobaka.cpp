#include "Sobaka.h"
#include <stdlib.h>
TSobaka::TSobaka()
{
	cvet = "ne ukazano";
	gender = "men";
	sherst = 1;
	poroda = 0;
}

string TSobaka::Golos()
{
	return "WufWuf";
}

void TSobaka::SetKlichka(string k)
{
	klichka = k;
}

string TSobaka::GetKlichka()
{
	return klichka;
}

string TSobaka::GetCvet()
{
	return cvet;
}

void TSobaka::SetCvet(string c)
{
	cvet = c;
}
