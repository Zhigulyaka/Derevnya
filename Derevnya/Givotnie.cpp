#include "Givotnie.h"

TGivotnie::TGivotnie()
{
	mesto="ne ukazano";
	function="ne ukazano";
	
}

string TGivotnie::GetMesto()
{
	return mesto;
}

void TGivotnie::SetFunction(string f)
{
	function=f;
}

string TGivotnie::GetFunction()
{
	return function;
}

