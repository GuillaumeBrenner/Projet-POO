#pragma once
#include "Header.h"

namespace Mappage {
	ref class Statistique
	{
	public:
		// Constructeur par defaut
		Statistique();

		String^ ChiffreAff();
	private:
		float ca;
	};
}

