#pragma once
#include "Header.h"

namespace Mappage {
	ref class Statistique
	{
	public:
		// Constructeur par defaut
		Statistique();

		String^ ChiffreAff();
		String^ ValeurCommerciale();
		String^ ValeurAchat();
		String^ SousSeuil();
		String^ PlusVendus();
		String^ MoinsVendus();

	private:

	};
}

