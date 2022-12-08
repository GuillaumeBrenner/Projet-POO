#pragma once
#include "Header.h"

namespace Mappage {
	ref class Statistique
	{
	public:
		String^ PanierMoyen();
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

