
#include <stdlib.h>
#include "Skot.h"

TSkot::TSkot() : TGivotnie()
{
	product = "ne ukazano";
	roga = true;
	mesto = "Zagon";
	function = "Daet Moloko";
	gen = "ne ukazano";

}

void TSkot::SetProduct(string p)
{
	product = p;
}

void TSkot::SetRoga(bool r)
{
	roga = r;
}
bool TSkot::GetRoga()
{
	return roga;
}

string TSkot::GetProduct()
{
	return product;
}

void TSkot::SetPol(string g)
{
	gen = g;
}

string TSkot::GetPol()
{
	return gen;
}
