#include "Ptitzy.h"

TPtitzy::TPtitzy() : TGivotnie()
{
	function = "Dayot Yaitza";
	mesto = "Kuraytnik";
	pol="ne ukazano";
	UmeetPlavat=0;
	perya=1;

}

void TPtitzy::SetPol(string p)
{
	pol = p;
}

bool TPtitzy::GetPerya()
{
	return false;
}

void TPtitzy::SetUmeetPlavat(bool u)
{
	UmeetPlavat = u;
}

void TPtitzy::SetPerya(bool per)
{
	perya = per;
}

bool TPtitzy::GetUmeetPlavat()
{
	return UmeetPlavat;
}

string TPtitzy::GetPol()
{
	return pol;
}

