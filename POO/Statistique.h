#pragma once
#include "Header.h"
namespace Mappage {
	ref class Statistique
	{
	public:
		int PanierMoyen();
		String^ ChiffreAff();
		int SeuilApp();
		int MontantTotal();
		String^ PlusVendus();
		String^ MoinsVendus();
		float ValCom();
		float ValAchat();
		float Simulation();
	private:
		float ca;



	};
}

