#include "Givotnie.h"
#include "Pytomtzy.h"
#include "Skot.h"
#include "Ptitzy.h"
#include "Korova.h"
#include "Sobaka.h"
#include "Kuritza.h"
#include <iostream>

using namespace std;

int main()
{
	TSobaka Sobaka1;
	Sobaka1.SetCvet("Black");
	Sobaka1.SetKlichka("Guchka");
	Sobaka1.SetPol("woman");
	cout << "Sobaka" << " " <<  Sobaka1.GetKlichka() << endl;
	cout << "Vypolnyaet function:" << " "  << Sobaka1.GetFunction() << endl;
	cout << "Givet v: " << " "  << Sobaka1.GetMesto() << endl;
	cout << "Govorit:" << " "  << Sobaka1.Golos() << endl;
	cout << "Pol:" << " "  << Sobaka1.GetPol() << endl;
	cout << "Pooroda:" << " "  << Sobaka1.GetPoroda() << endl<<endl;
	
	TKorova Korova1;
	Korova1.SetCvet("korichnevaya");
	Korova1.SetProduct("Moloko");
	Korova1.SetPol("woman");
	Korova1.SetKolvomoloka(2);
	Korova1.SetRoga(0);
	cout << "Korova" << " "  << Korova1.GetCvet() << endl;
	cout << "Vypolnyaet function:" << " "  << Korova1.GetFunction() << endl;
	cout << "Givet v: " << " "  << Korova1.GetMesto() << endl;
	cout << "Govorit:" << " "  << Korova1.Golos() << endl;
	cout << "Pol:" << " " << Korova1.GetPol() << endl;
	cout << "Daet" << " "  << Korova1.GetKolvomoloka() <<" " << "litra v den'"<< endl;
	cout << "Roga:" << " "  << Korova1.GetRoga() << endl << endl;
	
	TKuritza Kuritza1;
	Kuritza1.SetCvet("belaya");
	Kuritza1.SetUmeetPlavat(0);
	Kuritza1.SetPol("woman");
	Kuritza1.SetKolvoYaitz(2);
	cout << "Kuritza" << " "  << Kuritza1.GetCvet() << endl;
	cout << "Vypolnyaet function:" << " "  << Kuritza1.GetFunction() << endl;
	cout << "Givet v: " << " "  << Kuritza1.GetMesto() << endl;
	cout << "Govorit:" << " "  << Kuritza1.Golos() << endl;
	cout << "Pol:" << " "  << Kuritza1.GetPol() << endl;
	cout << "Daet" << " "  << Kuritza1.GetKolvoYaitz() <<" " << "yaitza v den'" << endl;
	cout << "Umeet plavat:" << " "  << Kuritza1.GetUmeetPlavat() << endl << endl;

}